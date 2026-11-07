#include <bits/stdc++.h>
using namespace std;

void print16(int n) {

  // Pattern 16 ; letter triangle style 1 ; 
  for(int i = 0 ; i < n ; i++){
   char ch = 'A' + i ;
   for(int j = 0 ; j <= i ; j++){
    
      cout << ch ; 
    }
    cout << endl ;
  }










}


int main() {
  int n ; 
  cin >> n ;
  print16(n) ;
}
