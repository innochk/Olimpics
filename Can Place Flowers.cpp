#include <iostream>
#include <vector>

using namespace std;

// Function to check if n new flowers can be planted in the flowerbed
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;  // Counter for the number of new flowers that can be planted
    int size = flowerbed.size();  // Size of the flowerbed

    for (int i = 0; i < size; i++) {
        if (flowerbed[i] == 0) {  // Check if the current plot is empty
            // Check if the left and right plots are empty or if it's at the boundary
            bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
            bool rightEmpty = (i == size - 1) || (flowerbed[i + 1] == 0);

            if (leftEmpty && rightEmpty) {
                flowerbed[i] = 1;  // Plant a flower here
                count++;  // Increment the flower counter

                if (count >= n) {
                    return true;  // Early exit if the required number of flowers is planted
                }
            }
        }
    }

    return count >= n;  // Check if the total number of new flowers is at least n
}

int main() {
    int n;
    cout << "Enter the number of new flowers to plant (n): ";
    cin >> n;
    
    int size;
    cout << "Enter the size of the flowerbed array: ";
    cin >> size;

    vector<int> flowerbed(size);
    cout << "Enter the elements of the flowerbed array (0 for empty, 1 for planted): ";
    for (int i = 0; i < size; i++) {
        cin >> flowerbed[i];
    }

    if (canPlaceFlowers(flowerbed, n)) {
        cout << "Yes, " << n << " new flowers can be planted." << endl;
    } else {
        cout << "No, " << n << " new flowers cannot be planted." << endl;
    }

    return 0;
}
