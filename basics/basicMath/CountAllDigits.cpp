#include <iostream> 
using namespace std; 

// T.C O(log N)

int main() {

int n , count = 0;
cout<<"Enter a number:";
cin>>n;

if (n==0) {
    count=1;
    cout<<count;
}
else {
while(n>0){
    n=n/10;
    count++;
}

  cout<<count;
  return 0;
}
}