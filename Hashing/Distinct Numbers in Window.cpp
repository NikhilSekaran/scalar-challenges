vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int> distinct_arr;

    if (B > A.size())
    {
        return distinct_arr;
    }

    map<int, int> ele_freq_map;
    unsigned int index;
    int ele;

    // build the freq map
    for (index = 0; index < B; index++)
    {
        ele = A[index];

        if (ele_freq_map.find(ele) != ele_freq_map.end())
        {
            ele_freq_map[ele]++;
        }
        else
        {
            ele_freq_map[ele] = 1;
        }
    }

    // add count of 1st distinct_elements of length B
    distinct_arr.push_back(ele_freq_map.size());

    // sliding window and adding distinct elements of length B
    for (index = 0; index < (A.size() - B); index++)
    {
        // remove A[i]
        ele = A[index];
        ele_freq_map[ele]--;

        if (ele_freq_map[ele] == 0)
        {
            ele_freq_map.erase(ele);
        }

        ele = A[index + B];
        // add A[i+B]
        if (ele_freq_map.find(ele) != ele_freq_map.end())
        {
            ele_freq_map[ele]++;
        }
        else
        {
            ele_freq_map[ele] = 1;
        }

        distinct_arr.push_back(ele_freq_map.size());
    }

    return distinct_arr;
}
