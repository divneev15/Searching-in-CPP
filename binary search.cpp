// Divneev Singh
// 24070123043
// EnTC A2

#include <iostream>
#include <algorithm>   // for sort()
using namespace std;

class ArraySearch {
private:
    int arr[7] = {9, 8, 5, 1, 0, 3, 2};  // Initial unsorted array
    int size = 7;

public:
    // Function to perform Binary Search
    void binarySearch(int target) {
        // Step 1: Sort the array
        sort(arr, arr + size);

        // Display sorted array
        cout << "Sorted array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Step 2: Initialize search boundaries
        int low = 0, high = size - 1;
        bool found = false;
        int index = -1;

        // Step 3: Binary search loop
        while (low <= high) {
            int mid = (low + high) / 2;   // middle element
            if (arr[mid] == target) {     // Element found
                found = true;
                index = mid;
                break;
            } 
            else if (arr[mid] < target) { // Search right half
                low = mid + 1;
            } 
            else {                        // Search left half
                high = mid - 1;
            }
        }

        // Step 4: Display result
        if (found) {
            cout << "Element " << target << " found at sorted index " << index << "." << endl;
        } else {
            cout << "Element " << target << " not found in the array." << endl;
        }
    }
};

int main() {
    ArraySearch obj;
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    obj.binarySearch(target);

    return 0;
}

/*
Sample Output 1:
Enter the element to search: 5
Sorted array: 0 1 2 3 5 8 9 
Element 5 found at sorted index 4.

Sample Output 2:
Enter the element to search: 7
Sorted array: 0 1 2 3 5 8 9 
Element 7 not found in the array.
*/
