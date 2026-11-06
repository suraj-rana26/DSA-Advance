#include <bits/stdc++.h>
using namespace std;

int main() {

  int n ; 
    cin >> n ;
    // this is the combination of pattern 7 and 8 
    for(int i = 0 ; i < n ; i++){
// space 
for( int j = 0 ; j < n - i - 1 ; j++){
    cout << " " ;
}
// stars 
for( int j = 0 ; j < 2 * i + 1 ; j++){
    cout << "*" ;
}
// space 
for( int j = 0 ; j < n - i - 1 ; j++){
cout << " " ;
}
cout << endl ;

    }
// now the downside pyramid ;
for( int i = 0 ; i < n ; i++){

for( int j = 0 ; j < i ; j++){
    cout << " " ;
    
}
//stars
for( int j = 0 ; j < 2 * n - (2 * i + 1) ; j++) {
    cout << "*" ;
}
for( int j = 0 ; j <= i ; j++){
    cout << " " ;
} 
cout << endl ;
}









    return 0 ; 

}

   