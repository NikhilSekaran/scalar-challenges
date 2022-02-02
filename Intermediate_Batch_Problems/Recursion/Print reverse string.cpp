#include<iostream>

using namespace std;

void printReverse(string &str, int index)
{
    if (index == str.length())
    {
        return;
    }
    else
    {
        printReverse(str, index+1);
        cout << str[index];
    }
}

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    string input_str;
    
    cin >> input_str;

    printReverse(input_str, 0);

    return 0;
}