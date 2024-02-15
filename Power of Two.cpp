/*Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two.
Examples:
8=> returns true
6=> returns false*/

#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
  if (n <= 0) {
    return false;
  }
  while (n > 1) {
    if (n % 2 != 0) {
      return false;
    }
    n /= 2;
  }
  return true;
}

int main() {
  int n;
  cout << "Enter an integer: ";
  cin >> n;

  if (isPowerOfTwo(n)) {
    cout << n << " is a power of two." << endl;
  } else {
    cout << n << " is not a power of two." << endl;
  }

  return 0;
}
