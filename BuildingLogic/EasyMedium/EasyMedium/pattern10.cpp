#include<iostream>
using namespace std;

// T.C O(n²)

int main(){

    int n = 5;
   for ( int i=0 ; i<=n-1 ; i++){
    for ( int k = 0  ; k<i+1 ; k++)
        cout<<"*";
     cout<<endl;
   }
    for ( int j=n-2 ; j>=0 ; j--){
    for ( int l = 0  ; l<j+1 ; l++)
        cout<<"*";
     cout<<endl;
   }


}