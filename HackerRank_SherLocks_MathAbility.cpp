#include <iostream>
#include <cmath>

using namespace std;

int squares(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i > 0) {
            int root = static_cast<int>(sqrt(i));
            if (root * root == i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int q, a, b;
    cout << "Enter number of queries: ";
    cin >> q;

    for (int i = 0; i < q; i++) {
        cout << "Enter range (a b): ";
        cin >> a >> b;
        int result = squares(a, b);
        cout << "Number of perfect squares: " << result << endl;
    }

    return 0;
}

