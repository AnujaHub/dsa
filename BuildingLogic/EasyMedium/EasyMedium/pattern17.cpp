#include<iostream>
using namespace std;

// T.C O(n²)

int main(){
int i = 0 , j = 0 , k = 0 ; 
    int n = 5;
   for ( i=0 ; i<=n-1 ; i++){  
    char ch = 'A';
    for ( j = 0 ; j<n-i-1  ; j++ ) 
        cout<<" ";
        
    for ( k = 0  ; k<2*i+1 ; k++)  {
        if(k <= i){
            cout<<(ch++);
        }
         
        else{
            ch = ch - 2;
            cout<<(ch++);
        }
    }
     cout<<endl;
   }
}



