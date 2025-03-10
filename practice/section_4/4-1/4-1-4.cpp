#include <iostream>
#include <cmath>

using namespace std;

struct Point{
  double x, y;
};

int hourHandLength, minuteHandLength, hour, minute;
double answer, hourHandAngle, mituteHandAngle;
Point points[2];

int main(){
  //入力
  cin >> hourHandLength >> minuteHandLength >> hour >> minute;

  //角度の計算
  hourHandAngle = 30 * hour + 0.5 * minute - 90;
  mituteHandAngle = 6 * minute - 90;

  //時針の座標
  points[0].x = hourHandLength * cos(hourHandAngle * M_PI / 180);
  points[0].y = hourHandLength * sin(hourHandAngle * M_PI / 180);

  //分針の座標
  points[1].x = minuteHandLength * cos(mituteHandAngle * M_PI / 180);
  points[1].y = minuteHandLength * sin(mituteHandAngle * M_PI / 180);

  //距離の計算
  answer = sqrt((points[0].x - points[1].x) * (points[0].x - points[1].x) + (points[0].y - points[1].y) * (points[0].y - points[1].y));
  
  //出力k
  printf("%.12lf\n", answer);
  return 0;
}
