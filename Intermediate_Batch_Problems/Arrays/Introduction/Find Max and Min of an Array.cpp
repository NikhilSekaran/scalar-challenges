#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned int integer_count, min_val, max_val;
    cin >> integer_count;

    unsigned int arr[integer_count];

    for (int i = 0; i < integer_count; i++)
    {
        cin >> arr[i];

        if (i == 0)
        {
            min_val = max_val = arr[i];
        }
        else if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
        else if (arr[i] < min_val)
        {
            min_val = arr[i];
        }
        
    }

    cout << max_val << " " << min_val;

    
    return 0;
}