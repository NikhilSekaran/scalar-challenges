int sumDigits(int N)
{
    // base condition
    if (N < 10)
    {
        return N;
    }

    // main logic
    int sum = (N % 10) + sumDigits(N/10);

    if (sum >= 10)
    {
        sum = (sum % 10) + sumDigits(sum/10);
    }

    return sum;
}

int Solution::solve(int A) {

    int is_magic = 0;

    if ( sumDigits(A) == 1 )
    {
        is_magic = 1;
    }

    return is_magic;
}
