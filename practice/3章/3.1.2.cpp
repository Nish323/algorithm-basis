#include <iostream>
using namespace std;

void prime_factorization(long long N){
	if(N == 1) return;
	
	for(long long i = 2; i * i <= N; i++){
		if(N % i == 0){
			cout << i << endl;
			prime_factorization(N / i);
			return;
		}
	}
	cout << N << endl;
	}
	
int main(){
 long long N;
 cin >> N;
 prime_factorization(N);
 return 0;
}