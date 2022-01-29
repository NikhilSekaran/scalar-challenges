int Solution::solve(vector<int> &A, int B) {

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            if (A[i] + A[j] == B)
            {
                return 1;
            }
        }
    }

    return 0;
}
