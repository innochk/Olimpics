#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generatePascalsTriangle(int numRows) {
    vector<vector<int>> pascalsTriangle;
    if (numRows <= 0) return pascalsTriangle;

    // Initialize the first row
    pascalsTriangle.push_back({1});

    for (int i = 1; i < numRows; i++) {
        vector<int> row(i + 1, 1); // Create a row with i+1 elements, all initialized to 1
        for (int j = 1; j < i; j++) {
            // Each element is the sum of the two elements above it
            row[j] = pascalsTriangle[i - 1][j - 1] + pascalsTriangle[i - 1][j];
        }
        pascalsTriangle.push_back(row);
    }

    return pascalsTriangle;
}

int main() {
    int numRows;
    cout << "Enter numRows: ";
    cin >> numRows;

    vector<vector<int>> result = generatePascalsTriangle(numRows);

    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
