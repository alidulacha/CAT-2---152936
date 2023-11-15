#include <iostream>
using namespace std;

bool prime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    cout << "Prime numbers reach until " << limit << ": ";
    for (int i = 2; i <= limit; ++i) {
        if (prime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
