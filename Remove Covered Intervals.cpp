#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int removeCoveredIntervals(vector<vector<int>>& intervals) {
    // Sort intervals first by starting point, and if those are equal, by ending point in descending order
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    });

    int count = 0;
    int end = 0;

    for (const auto& interval : intervals) {
        // If the current interval's end is greater than the max end so far,
        // it means it is not covered by any previous interval
        if (interval[1] > end) {
            ++count;
            end = interval[1];
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter the intervals in the format [li ri):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    int result = removeCoveredIntervals(intervals);
    cout << "Number of remaining intervals: " << result << endl;

    return 0;
}
