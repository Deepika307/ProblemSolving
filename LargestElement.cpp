#include <iostream>
using namespace std;
int* findLargest(int* arr, int size) {
    int* largest = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *largest) {
            largest = arr + i;
        }
    }
    return largest;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int* largest = findLargest(arr, n);
    cout << "Largest element: " << *largest << endl;
    return 0;
}
