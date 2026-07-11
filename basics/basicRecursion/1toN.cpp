#include <iostream>
using namespace std; 
 
// T.C O(n)

void print(int n , int current){
    
    // base case
    if(current>n){
        return;
    }

    cout<<current<<endl;
    print(n,++current);   
}


int main() {
int num = 5;
print(num,1);
   return 0; 
}