int Solution::solve(int A) {
    int magic_no = 0, value, index = 1;

    while (A > 0)
    {
        // if LSB is set compute the value
        if ( (A & 1) == 1)
        {
            value = pow(5, index);

            magic_no += value;
        }

        // right shift by 1 every iteration
        A = A >> 1;
        index++;
    }

    return magic_no;

}
