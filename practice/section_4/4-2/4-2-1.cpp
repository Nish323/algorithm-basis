#include <iostream>
#include <cmath>

using namespace std;

long long N, M, A[200009], B[200009], C[200009], Answer;

int main(){
	//入力
	cin >> N;
	for(int i = 1; i <= N - 1; i++) cin >> A[i];
	cin >> M;
	for(int i = 1; i <= M; i++) cin >> B[i];

	//累積和の計算
	C[1] = 0;
	for(int i = 2; i <= N; i++) C[i] = C[i - 1] + A[i - 1];

	//移動距離の計算
	Answer = 0;
	for(int i = 1; i < M; i++){
		Answer += std::llabs(C[B[i + 1]] - C[B[i]]);
	}


  cout << Answer << endl;
  return 0;
}
