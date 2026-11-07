#include <bits/stdc++.h>
using namespace std;

void print13(int n) {
// pattern
int num = 0  ;
for(int i = 1 ; i <= n ; i++){
  for(int j = 0 ; j < i  ; j++){
num = num + 1 ;

    cout << num ; 
  }

  cout << endl ;
}


}


int main() {
  int n ; 
  cin >> n ;
  print13(n) ;
}
