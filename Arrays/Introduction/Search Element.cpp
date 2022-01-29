#include<bits/stdc++.h>
using namespace std;

int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned short int no_of_test_cases;
    cin >> no_of_test_cases;

    vector<unsigned int> input_array;
    unsigned int input_data, length_of_ip;
    bool found = false;

    long no_to_search;

    for (unsigned int index = 0; index < no_of_test_cases; index++)
    {
        cin >> length_of_ip;

        for (unsigned int pos = 0; pos < length_of_ip; pos++)
        {
            cin >> input_data;

            input_array.push_back(input_data);
        }

        cin >> no_to_search;

        found = false;

        for (unsigned int pos = 0; pos < input_array.size(); pos++)
        {
            if ( input_array[pos] == no_to_search )
            {
                found = true;
                break;
            }
        }

        if (found == true)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }

        input_array.clear();
    }

    return 0;
}