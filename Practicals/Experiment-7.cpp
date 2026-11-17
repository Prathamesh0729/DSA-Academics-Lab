
#include <iostream>
#include <list>
using namespace std;

// 1's Complement
void ones(list<int> &A) {
    for (int &x : A)
        x = 1 - x;
}

// 2's Complement
void twos(list<int> &A) {
    ones(A);

    auto i = A.rbegin();

    while (i != A.rend() && *i == 1) {
        *i = 0;
        i++;
    }

    if (i != A.rend())
        *i = 1;
}

// Binary Addition
list<int> add(list<int> A, list<int> B) {
    list<int> result;

    auto i = A.rbegin();
    auto j = B.rbegin();
    int carry = 0;

    while (i != A.rend() || j != B.rend() || carry) {
        int sum = carry;

        if (i != A.rend()) sum += *i++;
        if (j != B.rend()) sum += *j++;

        result.push_front(sum % 2);
        carry = sum / 2;
    }

    return result;
}

// Display
void display(list<int> A) {
    for (int x : A)
        cout << x;
    cout << endl;
}

int main() {
    list<int> A, B;
    string s1, s2;

    cout << "Enter first binary number: ";
    cin >> s1;

    cout << "Enter second binary number: ";
    cin >> s2;

    for (char c : s1) A.push_back(c - '0');
    for (char c : s2) B.push_back(c - '0');

    list<int> one = A;
    ones(one);
    cout << "1's Complement: ";
    display(one);

    list<int> two = A;
    twos(two);
    cout << "2's Complement: ";
    display(two);

    cout << "Addition: ";
    list<int> sum = add(A, B);
    display(sum);

    return 0;
}
