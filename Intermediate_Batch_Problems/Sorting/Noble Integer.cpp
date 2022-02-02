int Solution::solve(vector<int> &A) {

    sort(A.begin(), A.end(), greater<int>());

    int res = 0;
    unsigned int less_count = 0;

    if (A[0] == 0)
    {
        res++;
    }

    for (unsigned int index = 1; index < A.size(); index++)
    {
        if (A[index] != A[index-1])
        {
            less_count = index;
        }

        if (less_count == A[index])
        {
            res++;
        }
    }

    if (res != 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
