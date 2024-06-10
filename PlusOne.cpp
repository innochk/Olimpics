#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            digits[i] += 1;
            if (digits[i] < 10) {
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    int k;
    cin >> k;

    vector<int> digits(k);

    for (int i = 0; i < k; ++i) {
        cin >> digits[i];
    }

    Solution solution;
    vector<int> result = solution.plusOne(digits);

    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
