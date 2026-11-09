 /* #include <bits/stdc++.h>
using namespace std ;
// TO NOTEDOWN IN THE COPY BABY DSA COPY 

int main() {
int n ; 
cin >> n ; 
int arr[n] ;
for(int i = 0 ; i < n ; i++){
    cin >> arr[i] ;
}
// Precomputate 
int hash[13] = {0} ;
for(int i = 0 ; i < n ; i++){
    hash[arr[i]] += 1 ;

}
// SO YO CAN GO UPTO ARR[10^6] INSIDE THE MAIN ONLY 
// BUT YOU CAN GO UPTO ARR[10^7] IF YOU ALSO DECLARE IT AS GLOBALLY MEANING OUTSIDE THE TOP OF MAIN FUNCTION ALSO BOTH PLACE 

int q ;
cin >> q ; 
while(q--) {
    int number ;
    cin >> number ;
    // fetch
    cout << hash[number] << endl ; 
}




return 0 ; 


} */
// Character hashing 

#include <bits/stdc++.h>
using namespace std ; 

int main() {
string s ; 
cin >> s ;
// precomputate
int hash[256] = {0} ;
for(int i = 0 ; i < s.size() ; i++) {
    hash[s[i]]++ ;
}
int q ; // q means for mine is query ki kitne ka check krna hain 
cin >> q ; 
 while(q--){ 
  char c ; 
  cin >> c ; 
    // fetch 
    cout << hash[c] << endl ;
 }




    return 0 ;

}