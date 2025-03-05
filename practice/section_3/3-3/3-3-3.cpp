#include <iostream>

using namespace std;

int main(){
  long long r, n;
  cin >> n >> r;
  long long n_sum, r_sum;
  n_sum = 1;
  r_sum = 1;

  while(r > 0){
    n_sum *= n;
    r_sum *= r;
    n--;
    r--;
  }

  cout << n_sum / r_sum << endl;
  return 0;
}