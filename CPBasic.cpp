// nice problem 1 ;
 /* #include <iostream> 
using namespace std ;

// check for Prime 

bool isPrime(int n){
    if( n <= 1 ) return false ;



for( int i = 2 ; i * i <= n ; i++){
    if( n % i == 0) {
        return false ; 
    }
}




return true ;

} 



int main() { 

    int n ; 
    cin >> n  ;

    if(isPrime(n-2)){ 
        cout <<"2" << " " << n - 2 << endl ;
    }
    else{
        cout << " -1" << endl ;

    }

    return 0 ; 
} */

// Problem 2 : Prefix Sum Problem
 /* #include <iostream>
using namespace std ;

int main() { 
int n ; 
cin >> n ;

int ones = 0 , twos = 0 ; 
for(int i = 0 ; i < n ; i++){
    int x; 
    cin >> x ;
    if(x==1)ones++ ; 
    else twos++ ;

}
if(twos==0){  // no 2 present
    for( int i = 0 ; i < ones ; i++) cout<<"1 " ;

}
else if(ones == 0){  // no1 present
    for( int i = 0 ; i < twos ; i++) cout<< "2 " ;

}
else { 
    cout << "2 1 " ; 
    for( int i = 0 ; i < twos - 1 ;i++) cout << "2 " ; 
    for(int i = 0 ; i < ones - 1 ; i++) cout << "1 " ;

    
}

   return 0 ;
} */

// PROblem 3 ; 
   // prime deletion 
   #include <iostream>
   using namespace std ; 

   void solve() { 
    string s ; 
    cin >> s ; 

    for( int i = 0 ; i < s.size() ; i++){
        if(s[i]== '1'){
            cout << "13\n" ; 
            break ;

        }
        else if(s[i] == '3'){
            cout << "31\n" ;
            break ;
        }
    }
   }







   int main() { 
    int t ;
    cin >> t ;
    while(t--){
        solve() ; 

    } 
    return 0 ;
   }
