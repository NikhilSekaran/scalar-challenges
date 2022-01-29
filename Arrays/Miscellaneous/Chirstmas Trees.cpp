int Solution::solve(vector<int> &A, vector<int> &B) {
    unsigned int cost = -1, min_sum = INT_MAX, curr_sum;
    int min_p = INT_MAX, min_r = INT_MAX;
    for (unsigned int q = 1; q < (A.size() - 1); q++)
    {
        min_p = INT_MAX, min_r = INT_MAX;

        // find the min p value for the current q value
        for (unsigned int p = 0; p < q; p++)
        {
            if (A[q] > A[p])
            {
                min_p = min(min_p, B[p]);
            }
        }
    
        // find the min r value for the current q value
        for (unsigned int r = q+1; r < A.size(); r++)
        {
            if (A[r] > A[q])
            {
                min_r = min(min_r, B[r]);
            }
        }

        curr_sum = min_p + B[q] + min_r;
        
        min_sum = min(min_sum, curr_sum);
    }

    if (min_sum != INT_MAX)
    {
        cost = min_sum;
    }

    return cost;

}
