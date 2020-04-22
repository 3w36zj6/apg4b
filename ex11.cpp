#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans, B;
    string op;
    cin >> ans;
    for (int i = 0; i < N; i++) {
        cin >> op >> B;
        if (op == "+") {
            ans += B;
        }
        else if (op == "-") {
            ans -= B;
        }
        else if (op == "*") {
            ans *= B;
        }
        else if (op == "/") {
            if (B != 0){
                ans /= B;
            }
            else {
                cout << "error" << endl;
                break;
            }
        }
        cout << i + 1 << ":" << ans << endl;
    }
}