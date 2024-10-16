#include <iostream>
#include <string>
using namespace std;

void reverse(string &s, int i) {
    int j = s.length() - 1 - i;  // Derive j from i
    if (i >= j) {
        return; // Base case to stop recursion when pointers meet or cross
    }
    swap(s[i], s[j]);
    reverse(s, i + 1);
}

int main() {
    string name = "ChandraShekhar";
    reverse(name, 0);
    cout << name << endl; // Print the reversed string

    return 0;
}

