vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    int arr1_size = A.size();
    int arr2_size = B.size();
    int curr_ele, freq_count;

    vector<int> short_len_arr = (arr1_size <= arr2_size) ? A : B;

    map<unsigned int, int> arr_1_ele_freq_map;
    map<unsigned int, int> arr_2_ele_freq_map;

    set<int> A_set, B_set, intersect_set;
    set<int>::iterator common_ele_iter;
    vector<int> common_elements;

    for (unsigned int index = 0; index < arr1_size; index++)
    {
        curr_ele = A[index];

        if ( arr_1_ele_freq_map.find(curr_ele) == arr_1_ele_freq_map.end() )
        {// add the element to map if it is not found
            arr_1_ele_freq_map[curr_ele] = 1;

            A_set.insert(curr_ele);
        }
        else
        {// increment the frequency if the element exists
            arr_1_ele_freq_map[curr_ele]++;
        }
    }

    for (unsigned int index = 0; index < arr2_size; index++)
    {
        curr_ele = B[index];

        if ( arr_2_ele_freq_map.find(curr_ele) == arr_2_ele_freq_map.end() )
        {// add the element to map if it is not found
            arr_2_ele_freq_map[curr_ele] = 1;

            B_set.insert(curr_ele);
        }
        else
        {// increment the frequency if the element exists
            arr_2_ele_freq_map[curr_ele]++;
        }
    }
    
    // find intersection of two input sets
    set_intersection(A_set.begin(), A_set.end(), B_set.begin(), B_set.end(), inserter(intersect_set, intersect_set.begin()) );
    
    common_ele_iter = intersect_set.begin();

    //iterate over common elements and create the output based on the frequency of the element's occurrence
    while(common_ele_iter != intersect_set.end())
    {
        curr_ele = *common_ele_iter;

        if (arr_1_ele_freq_map.find(curr_ele) != arr_1_ele_freq_map.end() && arr_2_ele_freq_map.find(curr_ele) != arr_2_ele_freq_map.end())
        {
            freq_count = (arr_1_ele_freq_map[curr_ele] <= arr_2_ele_freq_map[curr_ele]) ? arr_1_ele_freq_map[curr_ele] : arr_2_ele_freq_map[curr_ele];

            for (unsigned int i = 0; i < freq_count; i++)
            {
                common_elements.push_back(curr_ele);
            }
        }

        common_ele_iter++;
    }

    return common_elements;
}
