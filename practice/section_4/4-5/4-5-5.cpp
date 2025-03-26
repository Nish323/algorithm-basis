#include <iostream>

using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];

int main(){
	//入力
	cin >> N >> M;
	for(int i = 1; i <= M; i++){
		cin >> A[i] >> B[i];
		G[A[i]].push_back(B[i]);
		G[B[i]].push_back(A[i]);
	}

	//答え
	int Answer = 0;

	for(int i = 1; i <= N; i++){
		int cnt = 0;
		for(int j = 0; j < G[i].size(); j++){
			if(G[i][j] < i) cnt++;
		}
		if(cnt == 1) Answer++;
	}

	cout << Answer << endl;
  return 0;
}
