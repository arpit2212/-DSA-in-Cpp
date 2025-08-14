#include <iostream>
#include <string>
using namespace std;

void solution_function() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool found = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '8') {
                if (n - i >= 11) {
                    found = true;
                    break;
                }
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }
}

int main() {
    solution_function();
    return 0;
}
