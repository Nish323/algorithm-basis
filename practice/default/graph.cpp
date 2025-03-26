#include <iostream>

using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];

int main(){
	cin >> N >> M;
	for(int i = 1; i <= M; i++){
		cin >> A[i] >> B[i];
		G[A[i]].push_back(B[i]);
		G[B[i]].push_back(A[i]);
	}

  return 0;
}
