#include<iostream>
using namespace std;

// T.C O(n²)

// spaces = n-i-1
//  star = n-(n-i-1)-i = 2i +1 
int main(){

    int n = 5;
   for ( int i=0 ; i<=n-1 ; i++){  //n times
    for ( int j = 0 ; j<n-i-1  ; j++ ) // O(n) in the worst case
        cout<<" ";
    for ( int k = 0  ; k<2*i+1 ; k++)  // O(n) in the worst case
        cout<<"*";
     cout<<endl;
   }
  
}



