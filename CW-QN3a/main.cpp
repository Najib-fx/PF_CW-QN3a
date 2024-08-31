#include <iostream>
using namespace std;

int main() {
    int first, last;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the last number: ";
    cin >> last;

    int sum = 0;

    //Calculate the sum of integers
    for (int i = first; i <= last; i++) {
        sum += i;
    }

    //Result
    cout << "Sum from " << first << " to " << last << " is: " << sum << endl;

    return 0;
}
