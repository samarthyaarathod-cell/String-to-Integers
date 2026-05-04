#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int i = 0, n = s.length();

    // 1. Skip leading spaces
    while (i < n && s[i] == ' ') i++;

    // 2. Check sign
    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') sign = -1;
        i++;
    }

    // 3. Convert digits
    long result = 0;  // use long to detect overflow

    while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';

        // 4. Handle overflow
        if (result > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    // 5. Return final result
    return (int)(sign * result);
}

int main() {
    cout << myAtoi("   -042") << endl;     // -42
    cout << myAtoi("1337c0d3") << endl;   // 1337
    cout << myAtoi("words 987") << endl;  // 0
    return 0;
}