#include <iostream> 
using namespace std; 

// T.C O(log N)

int main() {

    int orgNum = 1441, reverseNum=0 , num , n = orgNum;

    while(n!=0){
        num = n%10;
        reverseNum = ( reverseNum * 10 ) + num;
        n = n/10;
    }

    if(reverseNum==orgNum) cout<<"Palindrome";

    else cout<<"Not a Palindrome";

   return 0; 

}