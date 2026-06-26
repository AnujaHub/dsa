#include<iostream>
using namespace std;

// catch was to avoid printing middle row twice


int main(){

    int n = 5;
   for ( int i=0 ; i<=n-1 ; i++){
    for ( int j = 0 ; j<n-i-1  ; j++ )
        cout<<" ";
    for ( int k = 0  ; k<2*i+1 ; k++)
        cout<<"*";
     cout<<endl;
   }
    for ( int i=n-2 ; i>=0 ; i--){
    for ( int j = 0 ; j<n-i-1  ; j++ )
        cout<<" ";
    for ( int k = 0  ; k<2*i+1 ; k++)
        cout<<"*";
     cout<<endl;
   }
  
}



