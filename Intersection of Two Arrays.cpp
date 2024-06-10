#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the intersection of two vectors
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    
    // Sort both vectors
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    int i = 0, j = 0;
    // Find intersection of elements in the sorted vectors
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else { // Found a match
            // Ensure the result vector contains unique elements
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    
    return result;
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
        nums1.push_back(num); // Add each input number to the nums1 vector
    }

    int m;
    cout << "Enter m: ";
    cin >> m;

    vector<int> nums2;
    cout << "Enter the numbers for vector nums2: ";
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        nums2.push_back(num); // Add each input number to the nums2 vector
    }

    // Find intersection and print the result
    vector<int> result = intersection(nums1, nums2);
    
    cout << "Intersection: [";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}
