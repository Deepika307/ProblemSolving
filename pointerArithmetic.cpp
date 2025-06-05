#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* ptr = arr;
    cout << "Array elements using pointer arithmetic:\n";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
