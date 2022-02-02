int Solution::solve(vector<int> &A, int B) {
    
    int max_sum, curr_sum = 0;
    for (int index = 0; index < B; index++)
    {
        curr_sum += A[index];
    }

    max_sum = curr_sum;
    
    int include_index = A.size() - 1;
    int exclude_index = B - 1;

    for (int index = 0; index < B; index++)
    {
       curr_sum += A[include_index--];
       curr_sum -= A[exclude_index--];

       max_sum = max(max_sum, curr_sum);
    }

    return max_sum;

}
