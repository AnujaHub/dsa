#include <iostream> 
using namespace std; 

// T.C O(n²)

// miskate i made : tried to print all A-Z 
// new thing i learnt : 'A' + any num = 'A' , A being a  char
int main() {
int n = 5;

for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<=i ; j++){
        cout<<char('A'+j);
    }
    cout<<endl;
}

   return 0; 
}