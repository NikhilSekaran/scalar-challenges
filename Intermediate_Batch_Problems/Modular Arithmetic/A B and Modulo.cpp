int Solution::solve(int A, int B) {
    int res;

    if (A < B)
    {
        res = B - A;
    }
    else
    {
        res = A - B;
    }

    return res;

}
