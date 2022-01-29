#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned int number;
    cin >> number;

    for (int index = 1; index <= 10; index++)
    {
        cout << number << " * " << index << " = " << number * index << endl;
    }
    
    return 0;
}