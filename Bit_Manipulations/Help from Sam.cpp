int Solution::solve(int A) {
    int count = 0;

    while (A > 0)
    {
        // if LSB is set increment the count
        if ( (A & 1) == 1)
        {
            count++;
        }

        // right shift by 1 every iteration
        A = A >> 1;
    }

    return count;
}
