#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N = 1000;
	double Answer = 0.0;

	for (int i = 0; i < N; i++) {
		double x = 1.0 * (2 * i + 1) / (2 * N);
		double value = pow(2.0, x * x); 
		Answer += value;
	}
	printf("%.14lf\n", Answer / N);
	return 0;
}