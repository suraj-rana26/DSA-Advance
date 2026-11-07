#include <bits/stdc++.h>
using namespace std;

void print13(int n) {
// pattern 14 ; Letter triangle Inverted 
for( int i = n ; i > 0; i--){
  for( char ch = 'A' ; ch <= 'A'+ i ; ch++){
    cout << ch ; 

  }
  cout << endl ;
}





}


int main() {
  int n ; 
  cin >> n ;
  print13(n) ;
}
