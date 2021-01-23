#include <iostream>
using namespace std;

int main() {
    int i, num;
    bool flag = true;

    cout << "Enter a number integer: ";
    cin >> num;

    
    if (num == 0 || num == 1) {
        flag = false;
    }
    else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << num << " is a prime number";
    else
        cout << num << " is not a prime number";

    return 0;
}
