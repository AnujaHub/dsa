#include<iostream>
using namespace std;

// T.C O(n²)

int main(){

    int n=1;
    for(int i=5; i>0 ; i--){    //runs 5 times
        for(int j=i ; j<=i ; j++){   //once 
            for(int n=1;n<=j;n++)    //n times
            cout<<n<<" ";
        }
        cout << endl;
    }
}