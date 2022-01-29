int Solution::maxSubArray(const vector<int> &A) {
    int max_sum = A[0], curr_max = A[0];

    vector<int> prefix_sum;

    for (unsigned int index = 1; index < A.size(); index++)
    {
        curr_max = max(A[index], curr_max + A[index]);

        if (max_sum < curr_max)
        {
            max_sum = curr_max;
        }
    }

    return max_sum;

}