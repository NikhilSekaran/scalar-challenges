#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned int number;
    long int once_value, tens_value, hundreds_value, sum;

    cin >> number;

    for(int value = 1; value <= number; value++)
    {
        once_value = tens_value = hundreds_value = sum = 0;
        if (value >= 100)
        {
            hundreds_value = value / 100;
            tens_value = (value % 100) / 10;
            once_value = (value % 10);
        }
        else if (value >= 10)
        {
            tens_value = value / 10;
            once_value = (value % 10);
        }
        else
        {
            once_value = value;
        }

        sum = (once_value * once_value * once_value);
        sum += (tens_value * tens_value * tens_value);
        sum += (hundreds_value * hundreds_value * hundreds_value);

        if (value == sum)
        {
            cout << value << endl;
        }
    }


    
    return 0;
}