int Solution::solve(vector<int> &A) {
    int rep_ele = -1, curr_ele;
    map<unsigned int, int> ele_freq_map;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        curr_ele = A[index];

        if ( ele_freq_map.find(curr_ele) == ele_freq_map.end() )
        {// add the element to map if it is not found
            ele_freq_map[curr_ele] = 1;
        }
        else
        {// increment the frequency if the element exists
            ele_freq_map[curr_ele]++;
        }
    }

    for (unsigned int index = 0; index < A.size(); index++)
    {
        curr_ele = A[index];

        if (ele_freq_map[curr_ele] != 1)
        {
            rep_ele = curr_ele;
            break;
        }
    }

    return rep_ele;

}
