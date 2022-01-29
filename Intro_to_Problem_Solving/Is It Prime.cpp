#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned int number;
    unsigned int factors = 0;

    std::cin >> number;

    if (number == 1)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }


    for (int index = 1; index * index <= number; index++)
    {
        if (number % index == 0)
        {
            if(index * index == number)
            {
                factors++;
            }
            else
            {
                factors += 2;
            }
        }
    }

    if (factors == 2)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}