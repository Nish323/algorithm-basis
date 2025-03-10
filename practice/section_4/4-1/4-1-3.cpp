#include <iostream>
#include <cmath>

using namespace std;

struct Circle
{
  long long x, y, r;
};

int
main()
{
  Circle circles[2];
  // 入力
  for (int i = 0; i < 2; i++)
    cin >> circles[i].x >> circles[i].y >> circles[i].r;

  // 中心間の距離、半径の差と和の計算
  double distance = sqrt((circles[0].x - circles[1].x) * (circles[0].x - circles[1].x) + (circles[0].y - circles[1].y) * (circles[0].y - circles[1].y));
  long long differece = abs(circles[0].r - circles[1].r);
  long long sum = circles[0].r + circles[1].r;

  if (distance < differece)
  {
    cout << 1 << endl;
  }
  else if (distance == differece)
  {
    cout << 2 << endl;
  }
  else if (distance > differece && distance < sum)
  {
    cout << 3 << endl;
  }
  else if (distance == sum)
  {
    cout << 4 << endl;
  }
  else if (distance > sum)
  {
    cout << 5 << endl;
  }

  return 0;
}
