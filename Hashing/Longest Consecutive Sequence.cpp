int Solution::longestConsecutive(const vector<int> &A) {

    set<int> unique_elements;
    set<int>::iterator iter;
    
    int curr_ele, length, longest_length = 0;
    unsigned int index;

    for (index = 0; index < A.size(); index++)
    {
        curr_ele = A[index];

        unique_elements.insert(curr_ele);
    }

    for (iter = unique_elements.begin(); iter != unique_elements.end(); iter++)
    {
        curr_ele = *iter;

        length = 1;
        index = 1;

        if (unique_elements.find(curr_ele - 1) == unique_elements.end())
        {
            while( unique_elements.find(curr_ele + index) != unique_elements.end() )
            {
                length++;
                index++;
            }

            longest_length = max(longest_length, length);
        }
    }

    return longest_length;
    
}