#include <iostream>
#include <vector>
#include <algorithm>
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
        nums.push_back(num);
    }
    
    // Initialize the three maximum values
    long firstMax = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;

    for (int num : nums) {
        if (num == firstMax || num == secondMax || num == thirdMax) continue; // Skip duplicates

        if (num > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = num;
        } else if (num > secondMax) {
            thirdMax = secondMax;
            secondMax = num;
        } else if (num > thirdMax) {
            thirdMax = num;
        }
    }
    
    if (thirdMax == LONG_MIN) {
        cout << "The maximum number is: " << firstMax << endl;
    } else {
        cout << "The third distinct maximum number is: " << thirdMax << endl;
    }

    return 0;
}
