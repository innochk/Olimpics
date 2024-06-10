#include <iostream>
#include <vector>
using namespace std;

bool isValidMountainArray(vector<int>& arr) {
    int n = arr.size();
    
    if (n < 3) return false;
    
    int i = 0;

    // Walk up
    while (i + 1 < n && arr[i] < arr[i + 1]) {
        i++;
    }

    // Peak can't be the first or last element
    if (i == 0 || i == n - 1) {
        return false;
    }

    // Walk down
    while (i + 1 < n && arr[i] > arr[i + 1]) {
        i++;
    }

    return i == n - 1;
}

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

    if (isValidMountainArray(nums1)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
