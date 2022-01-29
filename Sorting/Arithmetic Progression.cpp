int Solution::solve(vector<int> &A) {

    sort(A.begin(), A.end());
    int diff = A[1] - A[0], ret_val = 1, curr_diff;

    for(unsigned int index = 2; index < A.size(); index++)
    {
        curr_diff = A[index] - A[index-1];
        
        if (diff != curr_diff)
        {
            ret_val = 0;
        }
    }

    return ret_val;
}
