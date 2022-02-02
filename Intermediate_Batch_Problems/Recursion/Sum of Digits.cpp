int sumDigits(int N)
{
    // base condition
    if (N < 10)
    {
        return N;
    }

    // main logic
    return (N % 10) + sumDigits(N/10);
}

int Solution::solve(int A) {
    
    return sumDigits(A);
}
