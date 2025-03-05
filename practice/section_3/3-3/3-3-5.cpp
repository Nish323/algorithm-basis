#include <iostream>
using namespace std;

long long N;
long long A[500009];
long long a = 0, b = 0, c = 0;

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	
	for (int i = 1; i <= N; i++) {
		if (A[i] == 1) a += 1;
		if (A[i] == 2) b += 1;
		if (A[i] == 3) c += 1;
	}

	cout << a * (a - 1) / 2 + b * (b - 1) / 2 + c * (c - 1) / 2 << endl;
	return 0;
}