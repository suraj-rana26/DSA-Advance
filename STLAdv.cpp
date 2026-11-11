#include<bits/stdc++.h>
using namespace std;

void ExplainPQ() {
   // priority 
   priority_queue<int>pq;
   pq.push(5) ; 
   pq.push(2) ; 
   pq.emplace(10) ; 
   
   cout << pq.top() << endl ;

   pq.pop() ; 

   cout << pq.top() << endl ;

   priority_queue<int , vector<int> ,greater<int>>poq ;
poq.push(5); 
poq.push(2); 
poq.push(8); 
poq.emplace(10); 
cout << poq.top() << endl ;

}

int main() {
ExplainPQ();
    return 0;
}

