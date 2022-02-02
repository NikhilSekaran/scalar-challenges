string Solution::solve(string A) {
    // set the min char by default to 'z'
    char first_min = 'z', second_min = 'z', curr_char;
    string output;
    unsigned int first_min_index, second_min_index, index;

    // iterate first n - 1 characters to find the first min char
    for (index = 0; index < A.size() - 1; index++)
    {
        curr_char = A[index];

        if (curr_char < first_min)
        {
            first_min = curr_char;
            first_min_index = index;
        }
    }

    // iterate from index next to first min char to end of string to find second min char
    for (index = first_min_index + 1; index < A.size(); index++)
    {
        curr_char = A[index];

        if (curr_char < second_min)
        {
            second_min = curr_char;
            second_min_index = index;
        }
    }

   output = first_min;
   output += second_min;

    return output;
}
