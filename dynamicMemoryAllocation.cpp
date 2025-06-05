#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == nullptr) {
        cout << "Memory allocation failed\n";
        return 1;
    }
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    free(arr);
    return 0;
}
