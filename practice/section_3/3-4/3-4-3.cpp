#include <iostream>
#include <vector>
using namespace std;

long long N;
long long A_sum = 0;
long long B_sum = 0;
float sum;

int main()
{
	cin >> N;

	for (long long i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		A_sum += a;
	}
	for (long long i = 0; i < N; i++)
	{
		int b;
		cin >> b;
		B_sum += b;
	}

	sum = A_sum / 3.0 + B_sum * 2.0 / 3.0;
	cout << sum << endl;
	return 0;
}
