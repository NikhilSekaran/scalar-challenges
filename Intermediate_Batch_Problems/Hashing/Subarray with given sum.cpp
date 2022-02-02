vector<int> Solution::solve(vector<int> &A, int B) {
    long long curr_sum = 0, index, sub_arr_index;
    vector<int> sub_array;
    unordered_map<long long, int> sum_map;

    // prefix sum are stored in map with index
    for(index = 0; index < A.size(); index++)
    {
        curr_sum += A[index];

        sum_map[curr_sum] = index;
    }
    
    curr_sum = 0;

    for(index = 0; index < A.size(); index++)
    {
        curr_sum += A[index];

        if (curr_sum == B)
        {
            for (sub_arr_index = 0; sub_arr_index <= index; sub_arr_index++)
            {
                sub_array.push_back(A[sub_arr_index]);
            }

            return sub_array;
        }
        
        if (sum_map.find(curr_sum - B) != sum_map.end())
        {
            for (sub_arr_index = sum_map[curr_sum - B]+1; sub_arr_index <= index; sub_arr_index++)
            {
                sub_array.push_back(A[sub_arr_index]);
            }

            return sub_array;            
        }
    }

    // no sub array found with sum equal to B so returning with -1
    sub_array.push_back(-1);

    return sub_array;

}
