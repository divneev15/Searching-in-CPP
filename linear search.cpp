// Divneev Singh
// 24070123043
// EnTC A2

#include <iostream>
using namespace std;

class ArraySearch {
private:
    int arr[7] = {9, 8, 5, 1, 0, 3, 2};  // Fixed array
    int size = 7;  // Array size

public:
    // Function to search for an element in the array
    void searchElement(int target) {
        int index = -1;

        // Linear search algorithm
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                index = i;
                break;
            }
        }

        // Display result
        if (index != -1) {
            cout << "Element " << target << " found at index " << index << "." << endl;
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

    obj.searchElement(target);

    return 0;
}

/*
Sample Output 1:
Enter the element to search: 5
Element 5 found at index 2.

Sample Output 2:
Enter the element to search: 7
Element 7 not found in the array.
*/
