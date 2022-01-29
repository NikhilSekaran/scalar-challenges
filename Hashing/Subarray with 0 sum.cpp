int Solution::solve(vector<int> &A) {
    int curr_ele, ret_val = 0;
    long curr_sum = 0;
    set<long> array_sum_set;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        curr_ele = A[index];

        curr_sum += curr_ele;

        if ( array_sum_set.find(curr_sum) != array_sum_set.end() || curr_sum == 0)
        {// current sum already exists, then we have sub array with sum = 0
            ret_val = 1;
            break;
        }
        else
        {
            array_sum_set.insert(curr_sum);
        }
    }

    return ret_val;
}
