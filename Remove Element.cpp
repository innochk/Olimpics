#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ArrayProcessor {
public:
    // Function to remove all occurrences of a specific value from the vector
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0; // Variable to track the new length of the vector

        // Iterate through each element in the vector
        for (int i = 0; i < nums.size(); ++i) {
            // If the current element is not equal to the value to be removed
            if (nums[i] != val) {
                // Move the element to the position 'k'
                nums[k] = nums[i];
                ++k; // Increment 'k' to reflect the new size
            }
        }

        // Resize the vector to the new length, 'k'
        nums.resize(k);

        // Return the new length of the vector
        return k;
    }
};

int main() {
    int n; // Variable to store the length of the vector
    cout << "Enter the length of vector: ";
    cin >> n;
    
    vector<int> nums(n); // Create a vector of size 'n'
    
    // Prompt user to enter each element of the vector
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int val; // Variable to store the value to be removed
    cout << "Enter the value to remove: ";
    cin >> val;
    
    ArrayProcessor processor; // Create an instance of the ArrayProcessor class
    int k = processor.removeElement(nums, val); // Call the removeElement function and store the result in 'k'
    
    // Print the result
    cout << "Output: " << k << ", nums = ";
    
    // Sort the modified vector up to the new length 'k'
    sort(nums.begin(), nums.begin() + k);
    
    // Print the sorted vector up to 'k'
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    
    return 0;
}
