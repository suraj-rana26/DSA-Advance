#include <bits/stdc++.h>
using namespace std;

void print20(int n) {

    int breakpoint = n;

    for (int i = 1; i <= 2 * n - 1; i++) {

        int stars = i;
        int spaces = 2 * (n - i);

        if (i > breakpoint) {
            stars = 2 * n - i;
            spaces = 2 * (i - n);
        }

        // Left stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    print20(n);

    return 0;
}