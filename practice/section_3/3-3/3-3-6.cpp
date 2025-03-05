#include <iostream>
#include <vector>
using namespace std;

const int MAX_A = 100000;

int main() {
    long long N;
    cin >> N;

    vector<int> A(N);
    vector<long long> count(MAX_A, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i]]++;
    }

    long long answer = 0;

    for (int i = 0; i < N; i++) {
        int target = 100000 - A[i];
        count[A[i]]--;
        if (target >= 1 && target <= 99999) {
            answer += count[target];
        }
    }

    cout << answer << endl;
    return 0;
}
