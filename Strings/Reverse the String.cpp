void reverse_the_string(string &data, int start, int end)
{
    char temp;

    while(start < end)
    {
        temp = data[start];
        data[start] = data[end];
        data[end] = temp;

        start++;
        end--;
    }
}

string Solution::solve(string A) {
    string final_res = "", trimmed_str;
    int left = 0;
    int right = A.size()-1;
    int start = 0, end = right, no_of_spaces;

    // reverse the complete sentence
    reverse_the_string(A, left, right);

    size_t leading_space_check = A.find_first_not_of(' ');
    size_t trailing_space_check = A.find_last_not_of(' ');

    if (leading_space_check != string::npos)
    {
        start = leading_space_check;
    }

    no_of_spaces = start - 0;

    A.erase(0, no_of_spaces);
    start = start - no_of_spaces;

    if (trailing_space_check != string::npos)
    {
        end = trailing_space_check;
    }

    no_of_spaces = right - end;

    A.erase(end, no_of_spaces);

    left = right = start;
    for (int index = start; index < end+1; index++)
    {
        if (A[index] == ' ')
        {
            right = index - 1;
            // reverse each word
            reverse_the_string(A, left, right);

            trimmed_str = A.substr(index, (end - index));

            // cout << "trimmed_str:\n" << trimmed_str << endl;

            leading_space_check = trimmed_str.find_first_not_of(' ');

            if (leading_space_check != string::npos)
            {
                left = index + leading_space_check;
            }
            else
            {
                left = index;
            }

            // to retain one space between word -1 is done
            no_of_spaces = left - index - 1;

            // erase extra spaces (more than one) in the string
            A.erase(index, no_of_spaces);

            index = left-1;
            right = left;
        }
        else if (index == end)
        {
            right = index - 1;
            // reverse each word
            reverse_the_string(A, left, right);
        }
    }

    return A;
}
