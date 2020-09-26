#ifndef STUDENT_SOLUTION_CPP
#define STUDENT_SOLUTION_CPP
#include <stack>
#include <iostream>
#include "studentSolution.hpp"
using namespace std;

bool isPalindromeStack(char* word){
    bool returnValue = true;
    int wordLength = 0;
    int n = 0;
    int j =0;
    stack<char> st;

    while(word[n] != '\0')
        n++;

    for(int i = 0; i < n; i++)
        st.push(word[i]);

    while(!st.empty()){
        if (word[j] != st.top())
           returnValue = false;
           st.pop();
           j++;
    }

    return returnValue;
}
#endif /* STUDENT_SOLUTION_CPP */
