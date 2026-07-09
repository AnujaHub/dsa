#include <iostream> 
using namespace std; 

// T.C O(log N)

int main() {

    int n = 123, reverseNum=0 , num;

    while(n!=0){

        num = n%10;
        reverseNum = ( reverseNum * 10 ) + num;
        n = n/10;
    }

    cout<<reverseNum;

   return 0; 

}