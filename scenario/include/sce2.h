/***
 * @Author: dongtaihong 2396203400@qq.com
 * @Date: 2024-06-18 20:08:01
 * @LastEditTime: 2024-06-18 20:08:02
 * @FilePath: /AlgExper/include/sce1 copy.h
 * @Description:
 */
/***
 * @Author: dongtaihong 2396203400@qq.com
 * @Date: 2024-06-16 23:01:06
 * @LastEditTime: 2024-06-16 23:01:07
 * @FilePath: /AlgExper/include/sce1.h
 * @Description:
 */
#include "../common/cartesian_frenet_conversion.h"
#include "../common/data_struct.h"
#include "../common/discrete_points_math.h"

//直线3车道场景
class sce2 {
 public:
  sce2() { generateRoad(200.0); }
  ~sce2() = default;
  void generateRoad(double length);

 public:
  // 1.全局参考线及道路边界信息
  std::vector<TrajectoryPoint> referenceLine_;  //主车参考线

  std::vector<TrajectoryPoint> leftRoadBound_;   //道路左边界
  std::vector<TrajectoryPoint> rightRoadBound_;  //道路右边界

  std::vector<TrajectoryPoint> leftDashed_;   //道路左侧虚线
  std::vector<TrajectoryPoint> rightDashed_;  //道路右测虚线

  std::vector<TrajectoryPoint> centerlane_;  //道路中心线
  std::vector<TrajectoryPoint> leftLane_;    //道路左车道中心
  std::vector<TrajectoryPoint> rightLane_;   //道路右车道中心

  // 2.障碍物列表
  ObstacleList obs_;

  // 3.主车当前定位
  Localization ego_loc_;

  // 4.主车当前状态
  VehicleStatus ego_status_;
};
