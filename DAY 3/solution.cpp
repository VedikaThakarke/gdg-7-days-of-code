#include <iostream>
using namespace std;

void printWord(int num) {
    if (num % 5 == 0 && num % 7 == 0) {
        cout << "FooBar" << endl;
    } else if (num % 5 == 0) {
        cout << "Foo" << endl;
    } else if (num % 7 == 0) {
        cout << "Bar" << endl;
    } else {
        cout << "Baz" << endl;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        printWord(i);
    }
    return 0;
}
