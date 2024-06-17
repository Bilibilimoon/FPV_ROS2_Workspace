std_msgs/Header header       # standard ROS message header

string gtimu                 # $GTIMU...
float64 gyro_x               #陀螺仪 X 轴角速率，单位（度/秒）
float64 gyro_y               #陀螺仪 Y 轴角速率，单位（度/秒）
float64 gyro_z               #陀螺仪 Z 轴角速率，单位（度/秒）
float64 acc_x                #加速度计 X 轴加速度，单位为（g）
float64 acc_y                #加速度计 Y 轴加速度，单位为（g）
float64 acc_z                #加速度计 Z 轴加速度，单位为（g）
float64 tpr                  #温度，单位为摄氏度