#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string s) {
    // Use the reverse function from the algorithm library
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s; // Take input from the user
    cout << "Reversed string: " << reverseString(s) << endl;
    return 0;
}
