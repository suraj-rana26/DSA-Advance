#include <bits/stdc++.h> 
using namespace std ;

int main() {
int n ; 
cin >> n  ;
int max = 0 ;

while( n > 0 ){
  int lastD = n % 10 ;

if( lastD >  max ){
  max = lastD ; 

} 
    n /= 10 ;
  
}
cout << max ;

    return 0;
}









