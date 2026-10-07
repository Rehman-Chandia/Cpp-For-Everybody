#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    char S, E;

    cin >> A >> S >> B >> E >> C;

    if (S == '+' && A + B == C) {
        cout << "Yes";
    }
    else if (S == '-' && A - B == C) {
        cout << "Yes";
    }
    else if (S == '*' && A * B == C) {
        cout << "Yes";
    }
    else if (S == '+') {
        cout << A + B;
    }
    else if (S == '-') {
        cout << A - B;
    }
    else if (S == '*') {
        cout << A * B;
    }

    return 0;
}
