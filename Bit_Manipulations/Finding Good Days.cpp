int Solution::solve(int A) {
    int count = 0;

    while (A > 0)
    {
        // A & (A-1) gives clears the right most set bit
        A = A & (A - 1);

        count++;
    }

    return count;
}
