vector<int> Solution::flip(string A) {
    vector<int> converted_ip, final_pair;
    unsigned int index;

    // convert all '0' to 1 and '1' to -1, so that the converted input can be used to find max sum using kadane's algorith
    for (index = 0; index < A.size(); index++)
    {
        if (A[index] == '1')
        {
            converted_ip.push_back(-1);
        }
        else
        {
            converted_ip.push_back(1);
        }
    }

    // initialize the current sum and max sum to 0th index value
    int curr_sum = 0, max_sum = converted_ip[0], start_index = 0, end_index = 0, curr_st = 0, curr_end = 0;

    // iterate the array from 0 to N to get max_sum
    for (index = 0; index < converted_ip.size(); index++)
    {
        // this is Kadane's algorith approach
        curr_sum += converted_ip[index];
        
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;

            curr_end = index;

            start_index = curr_st;
            end_index = curr_end;
        }

        // if the curr_sum is negative we reset it to zero
        if (curr_sum < 0)
        {
            curr_sum = 0;
            curr_st = index + 1;
            curr_end = index + 1;
        }
    }

    // if max_sum is -1, then all elements in the string is 1 so return empty array
    if (max_sum != -1)
    {
        final_pair.push_back(start_index + 1);
        final_pair.push_back(end_index + 1);
    }

    return final_pair;
}
