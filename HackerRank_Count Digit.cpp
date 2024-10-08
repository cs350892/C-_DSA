#include <iostream>
#include <string>

using namespace std;

int findDigits(int n) {
    int count = 0;
    int original = n;

    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        if (digit != 0 && original % digit == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        cout << findDigits(n) << endl;
    }

    return 0;
}

