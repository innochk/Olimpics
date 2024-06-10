#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    vector<int> nums1;
    cout << "Enter the numbers for vector nums1: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums1.push_back(num);
    }
    
    // Mark the presence of numbers
    for (int i = 0; i < n; i++) {
        int index = abs(nums1[i]) - 1; // Get the index corresponding to the number
        if (nums1[index] > 0) { // Only negate if it's positive
            nums1[index] = -nums1[index];
        }
    }
    
    // Collect missing numbers
    vector<int> missingNumbers;
    for (int i = 0; i < n; i++) {
        if (nums1[i] > 0) {
            missingNumbers.push_back(i + 1); // Index i corresponds to the number i+1
        }
    }
    
    // Output the missing numbers
    cout << "Missing numbers: ";
    for (int num : missingNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
