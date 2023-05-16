/*
    C++ implementation of Selection Sort
*/

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

// function prototypes
void selectionSort(vector<int> input);

const int numElements = 8;

int main()
{
    cout << "-------------------------------------" << endl;
    cout << "This program will take a list of 8 numbers and sort them." << endl;
    cout << "Please enter a list of numbers, separated by a space " << endl;
    cout << "-------------------------------------" << endl;

    // take user input to fill array
    vector<int> userList(numElements);
    for (int i = 0; i < numElements; i++)
    {
        cin >> userList[i];
        cout << userList[i] << ", ";
    }
    selectionSort(userList);

    return 0;
}

void selectionSort(vector<int> input)
{
    int minIndex, minValue;
    for (int i = 0; i < numElements - 1; i++)
    {
        minIndex = i;
        minValue = input[i];
        for (int j = i + 1; j < numElements; j++)
        {
            if (input[j] < minValue)
            {
                minValue = input[j];
                minIndex = j;
            }
        }
        input[minIndex] = input[i];
        input[i] = minValue;
    }
    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "Sorted, that's: " << endl;
    cout << "-------------------------------------" << endl;
    for (int i = 0; i < numElements; i++)
    {
        cout << input[i] << ", ";
    }
}