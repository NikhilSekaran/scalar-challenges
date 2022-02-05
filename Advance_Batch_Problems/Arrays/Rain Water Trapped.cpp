int Solution::trap(const vector<int> &A) {
    int water_log_height = 0, curr_val, index, arr_size = A.size(), curr_max;
    vector<int> left_max(arr_size), right_max(arr_size);

    // as iteration is done from index 1, curr_max is set to value from index 0
    curr_max = A[0];

    // compute the left max for each building
    for (index = 1; index < arr_size; index++)
    {
        curr_val = A[index];
        curr_max = max(curr_val, curr_max);

        left_max[index] = curr_max;
    }

    // as iteration is done from index arr_size-2, curr_max is set to value from index arr_size-1
    curr_max = A[arr_size - 1];

    // compute the right max for each building
    for (index = arr_size - 2; index >= 0; index--)
    {
        curr_val = A[index];
        curr_max = max(curr_val, curr_max);

        right_max[index] = curr_max;
    }

    //compute the water log height for each building
    for (index = 0; index < arr_size; index++)
    {
        curr_val = min(left_max[index], right_max[index]) - A[index];

        if (curr_val < 0)
        {
            curr_val = 0;
        }

        water_log_height += curr_val;
    }

    return water_log_height;
}
