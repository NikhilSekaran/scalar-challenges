int Solution::maxSubArray(const vector<int> &A) {
    // initialize the current sum and max sum to 0th index value
    int curr_sum = 0, max_sum = A[0];

    // iterate the array from 1 to N to get max_sum
    for (unsigned int index = 0; index < A.size(); index++)
    {
        // this is Kadane's algorith approach
        curr_sum += A[index];
        max_sum = max(curr_sum, max_sum);

        // if the curr_sum is negative we reset it to zero
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    return max_sum;
}
