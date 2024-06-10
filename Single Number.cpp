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
    
    int k = 0; // Variable to store the element without a pair
    for (int i = 0; i < n; i++) {
        bool foundPair = false; // Flag to indicate whether a pair for the current element is found
        for (int j = 0; j < n; j++) {
            if (i != j && nums[i] == nums[j]) { // Check if nums[i] has a pair
                foundPair = true;
                break; // If a pair is found, no need to continue checking
            }
        }
        if (!foundPair) { // If no pair is found for nums[i], assign it to k and exit the loop
            k = nums[i];
            break;
        }
    }
    
    cout << "The element without a pair is: " << k << endl;

    return 0;
}
