#include <iostream>
#include <limits>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
	long long x;
	long long y;
};

int num;

int main(){
	//入力
	cin >> num;
	Point points[2009];
	double minValue = numeric_limits<double>::max();
	for(int i = 1; i <= num; i++) cin >> points[i].x >> points[i].y;

	//全探索
	for(int i = 1; i <= num; i++){
		for(int j = i + 1; j <= num; j++){
			double distance = sqrt((points[i].x - points[j].x) * (points[i].x - points[j].x) + (points[i].y - points[j].y) * (points[i].y - points[j].y));
			minValue = min(minValue, distance);
		}
	}

	//出力
  printf("%.12lf\n", minValue);
  return 0;
}
