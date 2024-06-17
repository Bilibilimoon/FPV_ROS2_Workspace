#范围：-10.0 ~ 10.0
float64 boat_linear_speed #船：线速度
float64 boat_angular_speed #船：角速度

#范围：-10 ~ 10
int32 pwm_left #左螺旋桨期望PWM值
int32 pwm_right #右螺旋桨期望PWM值

#目标位置
float64 aim_gps_lng #目标经度
float64 aim_gps_lat #目标纬度

#飞机实时信息
float64 fpv_gps_lng #飞机当前经度
float64 fpv_gps_lat #飞机当前纬度
float64 fpv_gps_hight #飞机当前海拔
float64 fpv_gps_face #飞机当前水平朝向角(360°制)

#飞机期望摇杆输出（手动）
float64 manual_fpv_rol #横滚角
float64 manual_fpv_pit #俯仰角
float64 manual_fpv_yaw #偏航角
float64 manual_fpv_thr #油门

#飞机期望速度（自动）
float64 auto_fpv_rol #横滚角
float64 auto_fpv_pit #俯仰角
float64 auto_fpv_yaw #偏航角
float64 auto_fpv_thr #油门

#操控模式切换：自动1/手动-1
int32 control_model

#自动模式下两栖切换：飞机1/船-1
int32 fpv_model