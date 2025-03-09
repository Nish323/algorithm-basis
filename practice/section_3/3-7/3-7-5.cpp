#include <iostream>
#include <algorithm>
using namespace std;

int dp[61][501], cal[61], val[61];

int main(){
	//入力
	for(int i = 1; i <= 60; i++) cin >> cal[i] >> val[i];

	//配列の初期化
  dp[0][0] = 0;
	for(int i = 1; i <= 60; i++) dp[0][i] = -(1LL << 60);

	//動的計画法
	for(int i = 1; i <= 60; i++){
		for(int j = 1; j <= 500; j++){
			//j < val[i] のとき
			if(j < val[w]) dp[i][j] = dp[i-1][j];
			//j>=val[i]のとき
			if(j >= val[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-val[i]] + cal[i]);
		}
	}

	int Answer = 0;
	for(int i = 0; i <= 500; i++) Answer = max(Answer, dp[60][i]);
	cout << Answer << endl;

  return 0;
}
