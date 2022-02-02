int Solution::solve(string A) {
    long carry_fwd = 1;
    char each_digit;
    int digit_in_int, last_3_digits = 0;
    int last_index;
    int length = A.length();

    if ( (length == 1) || (length == 2) || (length == 3) )
    {
        last_index = 0;
    }
    else
    {
        last_index = A.length() - 3;
    }

    for (int index = A.length() - 1; index >= last_index; index--)
    {
        // here 0 is equal to 48 in char format
        each_digit = A[index];

        // convert char to int here by subtracting 48 here
        digit_in_int = each_digit - 48;

        last_3_digits += digit_in_int * carry_fwd;

        carry_fwd = carry_fwd * 10;

    }

    if ( (last_3_digits % 8) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
