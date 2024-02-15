/*Write a program that takes an integer as input and returns an integer with reversed digit
ordering.
Examples:
For input 500, the program should return 5.
For input -56, the program should return -65.
For input -90, the program should return -9.
For input 91, the program should return 19.*/

#include <iostream>
using namespace std;
int reverseInteger(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    int reversed = reverseInteger(input);
    cout << "Reversed integer: " << reversed << endl;

}
