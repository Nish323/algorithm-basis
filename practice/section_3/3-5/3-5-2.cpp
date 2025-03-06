#include <iostream>
#include <random>

using namespace std;

int main(){
	int N = 1000000;
	int M = 0;
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<double> distpx(0.0, 6.0);
	uniform_real_distribution<double> distpy(0.0, 9.0);

	for (int i = 0; i < N; i++){
		double px = distpx(gen);
		double py = distpy(gen);	
		double dist_37 = (px - 3.0) * (px - 3.0) + (py - 7.0) * (py - 7.0);
		double dist_33 = (px - 3.0) * (px - 3.0) + (py - 3.0) * (py - 3.0);
		if(dist_37 <= 4.0 || dist_33 <= 9.0){
			M++;
		}
	}
	cout << M << endl;
	return 0;
}
