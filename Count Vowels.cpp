/*Count Vowels
Write a program that counts the number of vowels in a sentence.
eg " Hello World " => returns 2*/

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> // Includes transform function

using namespace std;

int countVowels(const string& sentence) {
  // Initialize vowel count
  int vowelCount = 0;

  // Convert sentence to lowercase for case-insensitive counting
  string lowercaseSentence = sentence;
  transform(lowercaseSentence.begin(), lowercaseSentence.end(), lowercaseSentence.begin(), ::tolower);

  // Iterate through each character in the sentence
  for (char c : lowercaseSentence) {
    // Check if character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vowelCount++;
    }
  }

  return vowelCount;
}

int main() {
  string inputSentence;

  // Get sentence input from user
  cout << "Enter a sentence: ";
  getline(cin, inputSentence);

  // Call countVowels function and print result
  int vowelCount = countVowels(inputSentence);
  cout << "The sentence '" << inputSentence << "' has " << vowelCount << " vowels." << endl;

  return 0;
}


