int Solution::solve(vector<int> &A) {
    
    vector<int> prefix_sum_odd, prefix_sum_even;
    int odd_or_even;
    int odd_value, even_value;
    int sum_right, sum_left;
    int count = 0;

    // prefix_sum formation
    for(unsigned int index = 0; index < A.size(); index++)
    {
        odd_or_even = index%2;

        if (odd_or_even == 0)
        {//even
            if (index == 0)
            {
                even_value = A[index];
                odd_value = 0;
            }
            else
            {
                even_value = prefix_sum_even[index - 1] + A[index];
                odd_value = prefix_sum_odd[index-1];
            }
        }
        else if (odd_or_even)
        {//odd
            if (index == 1)
            {
                odd_value = A[index];
                even_value = prefix_sum_even[0];
            }
            else
            {
                odd_value = prefix_sum_odd[index - 1] + A[index];
                even_value = prefix_sum_even[index-1];
            }
        }

        // add values in prefix sum array of odd and even
        prefix_sum_odd.push_back(odd_value);
        prefix_sum_even.push_back(even_value);
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (i == 0)
        {
            sum_left = prefix_sum_odd[0] + prefix_sum_even[A.size()-1] - prefix_sum_even[i];
            sum_right = prefix_sum_even[0] + prefix_sum_odd[A.size()-1] - prefix_sum_odd[i];
        }
        else
        {
            sum_left = prefix_sum_odd[i-1] + prefix_sum_even[A.size()-1] - prefix_sum_even[i];
            sum_right = prefix_sum_even[i-1] + prefix_sum_odd[A.size()-1] - prefix_sum_odd[i];
        }

        if(sum_left == sum_right)
        {
            count++;
        }

    }

    return count;

}
