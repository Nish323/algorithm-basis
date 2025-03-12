#include <iostream>

using namespace std;

int endBusinessHour, number, L[500009], R[500009];
long long differenceNumbers[500009], sumNumbers[500009];

int main(){
	//入力
	cin >> endBusinessHour >> number;

	//入力と階差の計算
	for(int i = 1; i <= number; i++){
		cin >> L[i] >> R[i];
		differenceNumbers[L[i]] += 1;
		differenceNumbers[R[i]] -= 1;
	}

	//答えの出力
	sumNumbers[0] = differenceNumbers[0];
	cout << sumNumbers[0] << endl;
	for(int i = 1; i < endBusinessHour; i++){
		sumNumbers[i] = sumNumbers[i - 1] + differenceNumbers[i];
		cout << sumNumbers[i] << endl;
	} 

  return 0;
}
