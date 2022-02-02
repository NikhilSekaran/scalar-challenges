#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned int no_count, sum, number;
    
    cin >> no_count;

    unsigned int no_array[no_count] = {};

    for(int index = 0; index < no_count; index++)
    {
        cin >> no_array[index];

        sum = 0;
        number = no_array[index];

        for(int loop = 1; loop<number; loop++)
        {
            if(number%loop == 0)
            {
                // sum all the factors of the numbers
                sum += loop;
            }
        }

        if(number == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    
    return 0;
}