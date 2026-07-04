#include <iostream> 
using namespace std; 

// T.C O(√n)
 
int main() {
    int n ;
    cout<<"enter a number";
    cin>>n;


    if(n<=1) cout<<"Not Prime";

    else{
        bool isPrime = true;
        for(int i=2 ; i*i<=n ; i++){
            if(n%i==0) {
                isPrime = false;
                break;
        }
    }

    if(!isPrime) cout<<"Non Prime";
    else cout<<"Prime";
    }

   return 0; 
}