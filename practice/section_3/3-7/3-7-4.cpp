#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<bool> dp(S + 1, false);
    dp[0] = true;
    
    for (int i = 0; i < N; i++) {
        for (int j = S; j >= A[i]; j--) {
            if (dp[j - A[i]]) {
                dp[j] = true;
            }
        }
    }
    
    if (dp[S]) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
