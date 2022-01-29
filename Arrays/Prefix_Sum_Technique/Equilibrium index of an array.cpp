int Solution::solve(vector<int> &A) {

    int equil_index = -1, value, sum_lower = 0, sum_higher = 0;
    vector<int> prefix_sum;

    // prefix_sum formation
    for(unsigned int index = 0; index < A.size(); index++)
    {
        if (index == 0)
        {
            value = A[index];
        }
        else
        {
            value = prefix_sum[index - 1] + A[index];
        }

        prefix_sum.push_back(value);
    }

    // iterate each index to search for equilibrium index
    for(unsigned int index = 0; index < A.size(); index++)
    {
        if (index == 0)
        {
            sum_lower = 0;
            sum_higher = prefix_sum[A.size() - 1] - prefix_sum[index];
        }
        else if (index == A.size() - 1)
        {
            sum_higher = 0;
            sum_lower = prefix_sum[index - 1];
        }
        else
        {
            sum_lower = prefix_sum[index - 1];
            sum_higher = prefix_sum[A.size() - 1] - prefix_sum[index];
        }

        if (sum_lower == sum_higher)
        {
            equil_index = index;
            break;
        }
    }

    return equil_index;
}
