#include <iostream>
#include "studentSolution.hpp"
using namespace std;

int isPlaindromIterative(char* word) {
    int wordLength = 0;
    while(word[wordLength] != '\0')
        wordLength++;

    for(int i=0, j=wordLength-1; i<j; i++, j--)
        if(word[i] != word[j])
            return false;

    return true;
}

int main() {
    char palindrome[] = "racecar";
    char nonPalindrome[] = "bananaSlug";

  cout << palindrome << " correct answer: " << isPlaindromIterative(palindrome) << endl;
  cout << palindrome << " student answer: " << isPalindromeStack(palindrome) << endl;

  cout << nonPalindrome << " correct answer: " << isPlaindromIterative(nonPalindrome) << endl;
  cout << nonPalindrome << " student answer: " << isPalindromeStack(nonPalindrome) << endl;
}
