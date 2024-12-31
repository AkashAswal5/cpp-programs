/*
1 
1 1 
1 1 1 
1 1 1 1 
*/

#include <iostream>
using namespace std;

void generatePattern(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "1 ";
        }
        cout << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    generatePattern(num);
    return 0;
}
