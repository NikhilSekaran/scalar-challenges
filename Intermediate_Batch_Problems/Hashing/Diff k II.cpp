int Solution::diffPossible(const vector<int> &A, int B) {
    set<int> distinct_ele;
    int curr_ele, no_to_find_1, no_to_find_2, ret_val = 0;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        curr_ele = A[index];

        no_to_find_1 = curr_ele - B;
        no_to_find_2 = curr_ele + B;
        
        if ( (distinct_ele.find(no_to_find_1) != distinct_ele.end()) || (distinct_ele.find(no_to_find_2) != distinct_ele.end()))
        {
            ret_val = 1;
            break;
        }

        distinct_ele.insert(curr_ele);
    }

    return ret_val;
}
