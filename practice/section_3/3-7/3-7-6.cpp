#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//入寮k
	int N;
	cin >> N;
	vector<long long> A(N + 1);
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	//配列の初期化
	vector<long long> dp(N + 1, 0);
	dp[0] = 0;
	dp[1] = A[1];

	//動的計画法
	for (int i = 2; i <= N; i++)
	{
		dp[i] = max(dp[i - 1], dp[i - 2] + A[i]);
	}

	cout << dp[N] << endl;
	return 0;
}
