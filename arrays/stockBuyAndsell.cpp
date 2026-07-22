#include <iostream> 
using namespace std; 
 
// T.C : O(n)
// just make a table of price , minPrice , profit = price - minPrice , maxProfit and compare ouputs , you will understand the code.
// initial mistake : got unnessarily stuck innto managing indexes which wasn't needed
// you cannot sell before you buy 
// make sure to compare prices daily and don't fix a min value at start..

int main() {

    int n = 6;
    int arr[n] = {7,1,5,3,6,4};

    int min_price = arr[0];
    int max_profit = 0 , profit=0;
    

    for(int i=0 ; i<n ; i++){
        if(arr[i]<min_price){
             min_price=arr[i];
             }
        profit = arr[i] - min_price;  
        if(profit>max_profit){
            max_profit = profit;
        }
    }

    cout<<max_profit;
    return 0;

    }

    