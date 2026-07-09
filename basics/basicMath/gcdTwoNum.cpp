#include <iostream>
using namespace std; 
 
// T.C O(n)

void name(int n){
    // base case
    if(n==0){
        return;
    }

   else{
        cout<<"hello"<<endl;
        name(n-1);
   }
       
}


int main() {
int num = 5;
name(num);
   return 0; 
}