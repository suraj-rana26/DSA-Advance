#include <bits/stdc++.h> 
using namespace std ;

int main() {
 // reverse the number 
 int n ; 
 cin >> n ; 
 int rev = 0 ; 
while( n > 0){
  int lastd = n % 10 ; 
  rev = rev * 10  + lastd ; 
  n /= 10 ; 
}

cout << rev << endl ;




    return 0;
}









