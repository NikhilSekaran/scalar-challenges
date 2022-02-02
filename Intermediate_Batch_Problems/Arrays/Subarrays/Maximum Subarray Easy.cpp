int Solution::maxSubarray(int A, int B, vector<int> &C) {

    int max_sum = 0, curr_sum = 0;

    for (unsigned int index = 0; index < A; index++)
    {
        curr_sum = 0;
        for (unsigned int next_index = index; next_index < A; next_index++)
        {
            curr_sum += C[next_index];

            if (curr_sum > max_sum && curr_sum <= B)
            {
                max_sum = curr_sum;
            }
        }
    }

    return max_sum;
}
