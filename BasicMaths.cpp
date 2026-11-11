#include <bits/stdc++.h> 
using namespace std ;

int main() {
    // Count odd digits in the number
    int n;
    cin >> n;

    int oddNum = 0, evenNum = 0;

    while (n > 0) {
        int lastd = n % 10;
        if (lastd % 2 == 0) {
            evenNum++;
        } else {
            oddNum++;
        }
        n /= 10;
    }

    cout << oddNum;
    return 0;
}









