#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == target) {
            cout << "Target found at index: " << i << endl;
            found = true;
            break; // No need to continue searching if target is found
        }
    }

    if (!found) {
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] < target && target < nums[i + 1]) {
                cout << "Target should be inserted at index: " << i + 1 << endl;
                found = true;
                break; // No need to continue searching if insertion point is found
            }
        }
    }

    if (!found) {
        // If the target is not found and not inserted yet, it should be inserted at the end
        cout << "Target should be inserted at index: " << n << endl;
    }

    return 0;
}
