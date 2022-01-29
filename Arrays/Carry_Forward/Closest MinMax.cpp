int Solution::solve(vector<int> &A) {
    int min_index = -1, max_index = -1, min_sub_array_len = INT_MAX, length;
    int min_val = A[0], max_val = A[0];

    for (unsigned int index = 0; index < A.size(); index++)
    {
        if(A[index] < min_val)
        {
            min_val = A[index];
        }
        
        if (A[index] > max_val)
        {
            max_val = A[index];
        }
    }

    for (unsigned int index = 0; index < A.size(); index++)
    {
        if ( A[index] == min_val)
        {
            min_index = index;
        }
        
        if (A[index] == max_val)
        {
            max_index = index;
        }

        if (min_index != -1 && max_index != -1)
        {
            length = abs(max_index - min_index) + 1;

            if (length < min_sub_array_len)
            {
                min_sub_array_len = length;
            }
        }
    }

    return min_sub_array_len;    
}
