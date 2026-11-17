
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

// Remove spaces, punctuation and convert to lowercase
string cleanString(string s) {
    string result = "";

    for (char c : s) {
        if (isalnum(c))
            result += tolower(c);
    }

    return result;
}

// Check palindrome using stack
bool checkPalindrome(string s) {
    stack<char> st;

    for (char c : s)
        st.push(c);

    for (char c : s) {
        if (c != st.top())
            return false;

        st.pop();
    }

    return true;
}

// Print string in reverse using stack  
void reverseString(string s) {
    stack<char> st;

    for (char c : s)
        st.push(c);

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    cout << endl;
}

int main() {
    string s, cleaned;

    cout << "Enter a string: ";
    getline(cin, s);

    cleaned = cleanString(s);

    cout << "\nCleaned string: " << cleaned;

    if (checkPalindrome(cleaned))
        cout << "\nString is Palindrome";
    else
        cout << "\nString is Not Palindrome";

    cout << "\nReverse string: ";
    reverseString(s);

    return 0;
}
