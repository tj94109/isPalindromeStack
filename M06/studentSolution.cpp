#ifndef STUDENT_SOLUTION_CPP
#define STUDENT_SOLUTION_CPP
#include <stack>
#include <iostream>
#include "studentSolution.hpp"
using namespace std;

bool isPalindromeStack(char* word){
    bool returnValue = true;

    int wordLength = 0;
    stack<char> st;
    int n = 0;
    int j =0;
    while(word[n] != '\0')
        n++;
//    cout << " size " << n << " ";

    for(int i = 0; i < n; i++)
        st.push(word[i]);

//    cout << " st size " << st.size() << " \n";
//    cout << " st top " << st.top() << " \n";

    while(!st.empty()){
        if (word[j] != st.top())
           returnValue = false;
           st.pop();
           j++;
    }
    //cout << "\n";


    return returnValue;
}
#endif /* STUDENT_SOLUTION_CPP */
