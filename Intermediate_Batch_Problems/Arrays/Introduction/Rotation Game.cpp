#include<iostream>

using namespace std;

void reverse_array(unsigned int arr[], unsigned int arr_size, unsigned int start_index, unsigned int end_index)
{
    unsigned int i = start_index, j = end_index, temp;

    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

}

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    unsigned int arrary_size, rotate_count, count_to_rotate;
    cin >> arrary_size;

    unsigned int array_values[arrary_size];

    for (unsigned int index = 0; index < arrary_size; index++)
    {
        cin >> array_values[index];
    }

    cin >> rotate_count;

    if (rotate_count > arrary_size)
    {
        count_to_rotate = rotate_count % arrary_size;
    }
    else
    {
        count_to_rotate = rotate_count;
    }
   
    // reverse complete array
    reverse_array(array_values, arrary_size, 0, arrary_size - 1);

    // reverse count_to_rotate elements in the array
    reverse_array(array_values, arrary_size, 0, count_to_rotate - 1);

    // reverse arrary_size-count_to_rotate elements in the array
    reverse_array(array_values, arrary_size, count_to_rotate, arrary_size - 1);

    for (unsigned int index = 0; index < arrary_size; index++)
    {
        cout << array_values[index] << " ";
    }

    return 0;
}
