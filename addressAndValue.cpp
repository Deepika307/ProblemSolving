#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int* ptr = &num;
    cout << "Value of num = " << *ptr << endl;
    cout << "Address of num = " << ptr << endl;
    return 0;
}
