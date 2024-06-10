#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    vector<int> nums;
    cout << "Enter the numbers for vector nums: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num); // Add each input number to the nums vector
    }

    bool flag=false;
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n ; j++){ // Start j from i+1 to avoid self-comparison and redundant checks
            if(nums[i]==nums[j]){
                flag=true;
                break; // Once duplicate found, no need to continue checking
            }
        }
        if (flag) // Check for duplicate flag and exit outer loop if found
            break;
    }

    if (flag){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0; // Add a return statement at the end of the main function
}
