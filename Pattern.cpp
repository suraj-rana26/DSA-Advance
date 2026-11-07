#include <bits/stdc++.h>
using namespace std;

void print19(int n) {
// Pattern 19 inverted decreasing ;
// outer loop 
for(int i = 0 ; i <= n ; i++){
  // inner loop [stars]
for(int j = 0 ; j <= n - i ; j++){
  cout << "*" ;
}
// space 
for( int j = 0 ; j < 2 * i ; j++){
  cout << " " ;
}
 // Space 
for(int j = 0 ; j <= n - i ; j++){
  cout << "*" ;
}
cout << endl ;

}
for( int i = 0 ; i <= n  ; i++){
 // stars 
for( int j = 0 ;  j <= i  ; j++){
  cout << "*" ;
}
//space 
for(int j = 0 ; j <= 2 * n - 2 *( i + 1) ; j++ ){
  cout << " " ;

}
// stars 
for( int j = 0 ;  j <= i  ; j++){
  cout << "*" ;
}
cout << endl ; 
}

}
int main() {
  int n ; 
  cin >> n ;
  print19(n) ;
}
