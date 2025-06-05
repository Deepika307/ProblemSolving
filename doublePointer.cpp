#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter a value: ";
    cin >> value;
    int* ptr = &value;
    int** doublePtr = &ptr;
    cout << "Value using double pointer = " << **doublePtr << endl;
    return 0;
}
