#include <iostream>
using namespace std;

int main () {
    // Declare variables to store the sizes of arrays
    int m;
    cout << "Enter m=";
    cin >> m;
    int n;
    cout << "Enter n=";
    cin >> n;
    
    // Declare dynamic array num1 with size m+n
    int *num1 = new int[m + n];
    cout << "Enter the numbers of array num1: ";
    // Input values for the first m elements of num1
    for(int i = 0; i < m; i++){
        cin >> num1[i];
    }
    // Initialize the remaining elements of num1 to 0
    for(int i = m; i < m + n; i++){
        num1[i] = 0;
    }
    
    // Declare dynamic array num2 with size n
    cout << "Enter the numbers of array num2: ";
    int *num2 = new int[n];
    // Input values for num2
    for(int i = 0; i < n; i++){
        cin >> num2[i];
    }
    
    // Concatenate num2 to num1
    for(int i = 0; i < n; i++){
        num1[m + i] = num2[i];
    }
    
    // Output the concatenated array
    cout << "Concatenated array: ";
    for (int i = 0; i < m + n; i++){
        cout << num1[i] << " ";
    }
    
    
    return 0;
}
