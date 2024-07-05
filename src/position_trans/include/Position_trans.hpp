#include <iostream>
#include <std_msgs/msg/string.hpp>
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <thread>
#include <cmath>
#include <cstdlib>  //清屏用的头文件
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <linux/input.h>

#include "fpv_msgs/msg/moonly_fpv.hpp"  //我自定义的FPV消息

#include "temp_msgs/msg/temp_msg.hpp"  //我自定义的测试消息

#include <vector>
#include <opencv2/opencv.hpp>

struct GPSPoint {
    double latitude;
    double longitude;
};

struct BoundingBox {
    double x_min;
    double y_min;
    double x_max;
    double y_max;
};

GPSPoint calculateCenterGPS(const std::vector<GPSPoint>& imageCorners, const BoundingBox& relativeBoundingBox) {
    // 构建透视变换矩阵
    cv::Point2f imagePoints[4];
    for (int i = 0; i < 4; ++i) {
        imagePoints[i] = cv::Point2f(imageCorners[i].longitude, imageCorners[i].latitude);
    }
    cv::Point2f srcRect[4] = {cv::Point2f(relativeBoundingBox.x_min, relativeBoundingBox.y_min),
                              cv::Point2f(relativeBoundingBox.x_max, relativeBoundingBox.y_min),
                              cv::Point2f(relativeBoundingBox.x_max, relativeBoundingBox.y_max),
                              cv::Point2f(relativeBoundingBox.x_min, relativeBoundingBox.y_max)};
    cv::Mat perspectiveTransform = cv::getPerspectiveTransform(srcRect, imagePoints);

    // 计算目标中心点的相对位置
    cv::Point2f centerPoint((relativeBoundingBox.x_min + relativeBoundingBox.x_max) / 2.0,
                            (relativeBoundingBox.y_min + relativeBoundingBox.y_max) / 2.0);

    // 应用透视变换获取目标中心点的实际GPS位置
    cv::Mat centerPointMat = (cv::Mat_<float>(3, 1) << centerPoint.x, centerPoint.y, 1);
    cv::Mat transformedCenterPointMat = perspectiveTransform * centerPointMat;
    transformedCenterPointMat /= transformedCenterPointMat.at<float>(2, 0);
    GPSPoint centerGPS;
    centerGPS.longitude = transformedCenterPointMat.at<float>(0, 0);
    centerGPS.latitude = transformedCenterPointMat.at<float>(1, 0);

    return centerGPS;
}

void sub_callback(const temp_msgs::msg::TempMsg::SharedPtr msg)
{
    std::vector<GPSPoint> corners = {
        {msg->left_up_w, msg->left_up_j},  // 左上角
        {msg->right_up_w, msg->right_up_j},  // 右上角
        {msg->right_down_w, msg->right_down_j},  // 右下角
        {msg->left_down_w, msg->left_down_j}   // 左下角
    };
    BoundingBox relativeBox = {msg->x_min, msg->y_min, msg->x_max, msg->y_max};  // 示例的相对位置信息
    GPSPoint center = calculateCenterGPS(corners, relativeBox);

    printf("目标经度：%.1f, 目标维度：%.1f", center.latitude, center.longitude);
}
// int main() {
//     // 示例用法
//     std::vector<GPSPoint> corners = {
//         {40.0, -75.0},  // 左上角
//         {40.0, -70.0},  // 右上角
//         {35.0, -70.0},  // 右下角
//         {35.0, -75.0}   // 左下角
//     };

//     BoundingBox relativeBox = {0.2, 0.3, 0.8, 0.7};  // 示例的相对位置信息

//     GPSPoint center = calculateCenterGPS(corners, relativeBox);
//     std::cout << "目标中心点的GPS位置：(" << center.latitude << ", " << center.longitude << ")" << std::endl;

//     return 0;
// }
