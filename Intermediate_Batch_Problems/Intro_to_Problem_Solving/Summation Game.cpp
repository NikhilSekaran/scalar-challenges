#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned int number, result;

    cin >> number;
    result = (number * (number + 1))/2;
    cout << result;

    
    return 0;
}