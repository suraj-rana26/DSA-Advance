#include <bits/stdc++.h> 
using namespace std ;
int main() {
    // Count of Odd number in Array
    int n ; 
    cin >> n ; 
    int arr[n] ; 
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
        if( arr[i] % 2 != 0 ){
            count++ ;
        }
    }
    cout << count ;

    return 0;
}









