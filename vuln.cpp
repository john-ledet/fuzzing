#include <iostream>
#include <cstring>
using namespace std;

void mission() {
    cout << "Yay you did it" << endl;
}

void overflow() {
    char buffer[64];
    string input;

    cout << "Please enter your input: ";
    cin >> input;
    cout << "\n" << endl;

    strcpy(buffer, input.c_str());  // Vulnerable to buffer overflow
}

int main() {
    overflow();
    return 0;
}