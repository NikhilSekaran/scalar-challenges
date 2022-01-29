int powWithModulus(int X, int N, int D)
{
    if (X == 0)
    {
        return 0;
    }

    if (N == 0)
    {
        return 1;
    }

    long long half_pow = ( powWithModulus(X, N/2, D) % D);
    long long res;

    if (N %2 == 0)
    {// N is even
        res = (half_pow % D);
        res = (res * (half_pow % D) % D);
    }
    else
    {// N is odd
        res = X % D;
        res = ( res * (half_pow % D) % D);
        res = ( res * (half_pow % D) % D);
    }

    if (res < 0)
    {
        res = res + D;
    }

    return res;
}

int Solution::pow(int A, int B, int C) {

    return powWithModulus(A, B, C);
}
