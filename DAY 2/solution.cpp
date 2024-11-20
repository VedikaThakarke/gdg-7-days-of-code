#include <iostream>
using namespace std;

void printPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        int numStars = 2 * i - 1;
        int numSpaces = N - i;
        
        for (int j = 0; j < numSpaces; j++) {
            cout << " ";
        }
        for (int k = 0; k < numStars; k++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;    
    printPyramid(N);
    return 0;
}
