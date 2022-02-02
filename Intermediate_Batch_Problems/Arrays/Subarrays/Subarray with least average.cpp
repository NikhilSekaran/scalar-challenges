int Solution::solve(vector<int> &A, int B) {
    int sum = 0, curr_sum;
    int min_avg_start_index = 0;

    for (unsigned int index = 0; index < B; index++)
    {
        sum += A[index];
    }

    curr_sum = sum;

    for(unsigned int index = B; index < A.size(); index++)
    {
        curr_sum += A[index];
        curr_sum -= A[index-B];
        
        if (curr_sum < sum)
        {
            min_avg_start_index = index - B + 1;
        }

        sum = min(sum, curr_sum);
    }

    return min_avg_start_index;

}
