int Solution::solve(string A) {
    unsigned int count_of_ones = 0, left_ones_count, right_ones_count;
    
    int consecutive_ones_count = 0, curr_count;

    for (unsigned int index = 0; index < A.length(); index++)
    {
        if (A[index] == '1')
        {
            count_of_ones++;
        }
    }

    for (unsigned int index = 0; index < A.length(); index++)
    {
        if (A[index] == '0')
        {
            left_ones_count = right_ones_count = 0;
            
            // fethch the left ones couht
            for (int left = index - 1; left >= 0; left--)
            {
                if (A[left] == '1')
                {
                    left_ones_count++;
                }
                else
                {
                    break;
                }
            }

            // fethch the right ones couht
            for (unsigned int right = index + 1; right < A.length(); right++)
            {
                if (A[right] == '1')
                {
                    right_ones_count++;
                }
                else
                {
                    break;
                }
            }

            if ( count_of_ones > (left_ones_count + right_ones_count) )
            {
                curr_count = left_ones_count + right_ones_count + 1;
            }
            else
            {
                curr_count = left_ones_count + right_ones_count;
            }

            consecutive_ones_count = max (consecutive_ones_count, curr_count);
        }
    }

    if (consecutive_ones_count == 0)
    {
        consecutive_ones_count = A.length();
    }

    return consecutive_ones_count;

}
