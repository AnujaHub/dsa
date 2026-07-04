#include<iostream>
using namespace std;

// T.C O(n²)

int main(){

    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<"*";
        }
        cout << endl;
    }
}