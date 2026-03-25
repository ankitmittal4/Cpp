#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    long long n = number < 0 ? -number : number;
    int sum = 0;

    while (n > 0) {
        sum += static_cast<int>(n % 10);
        n /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
