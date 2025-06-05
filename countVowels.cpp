#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count = 0;
    const char* ptr = str.c_str();
    while (*ptr != '\0') {
        char ch = tolower(*ptr);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        ptr++;
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}
