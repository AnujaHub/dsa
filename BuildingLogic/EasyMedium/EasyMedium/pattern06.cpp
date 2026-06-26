#include<iostream>
using namespace std;
int main(){

    int n=1;
    for(int i=5; i>0 ; i--){
        for(int j=i ; j<=i ; j++){
            for(int n=1;n<=j;n++)
            cout<<n<<" ";
        }
        cout << endl;
    }
}