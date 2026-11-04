#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> nums = {10, 10, 10};

    int Flargest = INT_MIN;
    int Slargest = INT_MIN;

    int n = nums.size();

    for (int i = 0; i < n; i++) {

        if (nums[i] > Flargest) {
            Slargest = Flargest;
            Flargest = nums[i];
        }

        else if (nums[i] > Slargest && nums[i] < Flargest) {
            Slargest = nums[i];
        }
    }

    if (Slargest == INT_MIN)
        cout << -1;
    else
        cout << Slargest;

    return 0;
}


    // my mistake was that i was not updating the second largest value when the first largest value is updated. I was only checking for the second largest value in the second loop.
    //  int Flargest = nums[0];
//  int Slargest = -1;

//  for(int i =0 ; i<n ; i++){
//     if(arr[i] > Flargest){
//         Flargest = arr[i];
//     }
//  }

//  for(int i =0 ; i<n ; i++){
//     if(arr[i] > Slargest && arr[i] < Flargest && arr[i] != Flargest){
//         Slargest = arr[i];
//     }
// }
 
//     cout<<"Second Largest Element is : " << Slargest << endl;