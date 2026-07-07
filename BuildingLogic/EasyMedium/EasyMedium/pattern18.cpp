#include <iostream> 
using namespace std; 

// T.C O(n²)

int main() {
int n = 5;


for(int i=0 ; i<n ; i++){
    char ch ='A'+(n-i-1);
    for(int j=0 ; j<=i ; j++){
        cout<<char(ch++);
    }
  
    cout<<endl;
}

   return 0; 
}