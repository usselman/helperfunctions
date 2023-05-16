/*
    C++ implementation of a stack
*/

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <stack>
using namespace std;

// function prototypes
void printStack(stack<string> stack);
// void printPopped(stack<string> stack);

// seek four elements
int numElements = 4;

int main()
{
    cout << "-------------------------------------" << endl;
    cout << "This program will take 4 strings and push them onto the stack." << endl;
    cout << "Then it will pop each element off the stack. " << endl;
    cout << "-------------------------------------" << endl;

    // take user input to fill array
    vector<string> userList(numElements);
    stack<string> stack;
    for (int i = 0; i < numElements; i++)
    {
        cin >> userList[i];
        stack.push(userList[i]);
    }
    while (!stack.empty())
    {
        printStack(stack);
        stack.pop();
        cout << "Stack after first item popped: " << endl;
        printStack(stack);
        stack.pop();
        cout << "Stack after second item popped: " << endl;
        printStack(stack);
    }

    return 0;
}

void printStack(stack<string> stack)
{
    // print stack by popping top element then pushing it back onto stack
    string topElement = stack.top();
    stack.pop();
    cout << topElement << endl;
    printStack(stack);
    stack.push(topElement);
}