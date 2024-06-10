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
    
    int number = nums[0]; // Assigning the value of nums[0] to the variable number
    for (int i = 0; i < n; i++) {
        int k = 0; // Initializing the counter k
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                k++;
            }
        }
        if (k > n / 2) {
            number = nums[i]; // Updating number if the condition is met
            break; // Exiting the loop once the condition is met
        }
    }

    cout << number; // Outputting the final result

    return 0; // Explicitly returning 0 to indicate successful completion of the program
}
