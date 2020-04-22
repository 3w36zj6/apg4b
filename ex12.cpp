#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();
    int plus = 0, minus = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 1) {
            //cout << S.at(i) << endl;
            if (S.at(i) == '+') {
                plus++;
            }
            else {
                minus++;
            }
        }
        
    }
    cout << plus - minus + 1 << endl;
}
