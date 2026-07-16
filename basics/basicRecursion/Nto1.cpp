#include <iostream>
using namespace std; 
 

void print(int current){
    
    // base case
    if(current<1){
        return;
    }

    cout<<current<<endl;
    print(--current);   
}


int main() {
int num = 5;
print(num);
   return 0; 
}