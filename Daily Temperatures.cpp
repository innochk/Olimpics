#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int *temperature = new int[n];
    cout << "Enter the temperatures for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> temperature[i];
    }

    int *answer = new int[n];

    for (int i = 0; i < n; i++) {
        int a = 0;
        for (int j = i + 1; j < n; j++) {
            if (temperature[i] > temperature[j]) {
                a++;
            }
        }
        answer[i] = a;
        cout << answer[i] << " ";
    }
    cout << endl;



    return 0;
}
