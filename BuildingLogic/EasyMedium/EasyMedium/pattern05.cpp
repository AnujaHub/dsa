#include<iostream>
using namespace std;

// T.C O(n²)

int main(){

    for(int i=5 ; i>0 ; i--){
        for(int j=i ; j>0; j--){
            cout<<"*";
        }
        cout << endl;
    }
}