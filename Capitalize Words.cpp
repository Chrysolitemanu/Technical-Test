/*Question 4: Capitalize Words
Write a program that accepts a string as input, capitalizes the first letter of each word in the
string, and then returns the result string.
Examples:
"hi"=> returns "Hi"
"i love programming"=> returns "I Love Programming"*/

#include <iostream>
#include <string>
#include <cctype> // For toupper


using namespace std;

string capitalizeFirstLetters(string str) {
  // Check if string is empty
  if (str.empty()) {
    return str;
  }

  // Capitalize the first character
  str[0] = toupper(str[0]);

  // Loop through the string, capitalizing after spaces
  for (int i = 1; i < str.length(); ++i) {
    if (isspace(str[i - 1]) && !isspace(str[i])) {
      str[i] = toupper(str[i]);
    }
  }

  return str;
}

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  string result = capitalizeFirstLetters(input);
  cout << "Result: " << result << endl;


}
