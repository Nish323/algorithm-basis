#include <iostream>
#include <vector>

using namespace std;

long long GCD(long long a, long long b)
{
	while (a >= 1 && b >= 1)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}

	if (a >= 1)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A.at(i);
	}

	for (int i = 0; i < N - 1; i++)
	{
		A.at(i + 1) = GCD(A.at(i), A.at(i + 1));
	}

	cout << A.at(N - 1) << endl;

	return 0;
}
