vector<int> Solution::sortColors(vector<int> &A) {
    vector<int> red_op, white_op, blue_op, final_op;
    int curr_ele;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        curr_ele = A[index];

        if (curr_ele == 0)
        {
            red_op.push_back(curr_ele);
        }
        else if (curr_ele == 1)
        {
            white_op.push_back(curr_ele);
        }
        else if (curr_ele == 2)
        {
            blue_op.push_back(curr_ele);
        }
    }

    final_op.insert(final_op.end(), red_op.begin(), red_op.end());
    final_op.insert(final_op.end(), white_op.begin(), white_op.end());
    final_op.insert(final_op.end(), blue_op.begin(), blue_op.end());

    return final_op;
    
}
