vector<int> Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> final_amount;
    // create a array with default value zero for the beggars initially for size A
    int arr[A] = {0};

    int start_index, end_index, value, curr_sum;
    unsigned int index;

    for (index = 0; index < B.size(); index++)
    {
        start_index = B[index][0];
        end_index = B[index][1];
        value = B[index][2];

        // as the indexing is from 1, (start_index - 1) is done here
        // keep adding the donated value for beggar every time
        arr[start_index - 1] += value;
        
        // after end_index subtract the donated value, so that prefix sum calculated later is correct
        // as indexing is from 1, here directly the end_index is checked for within range of beggar size A
        if ( (end_index) < A)
        {
            // as the value should be subtracted, its multiplied with -1 here and saved in arr
            arr[end_index] += (value * -1);
        }
    }

    // compute the prefix sum from the values available after devotee donation
    for (index = 0; index < A; index++)
    {
        if (index == 0)
        {
            curr_sum = arr[index];
        }
        else
        {
            curr_sum = arr[index] + final_amount[index-1];
        }

        final_amount.push_back(curr_sum);
    }

    return final_amount;
}
