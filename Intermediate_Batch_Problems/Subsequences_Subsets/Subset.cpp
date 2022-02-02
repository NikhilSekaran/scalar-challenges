vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> op;
    vector<int> value;

    int N = A.size();
    
    // sort the inout in ascending order, so that the subsets created are in ascending order
    sort(A.begin(), A.end());

    // first sub set with empty value
    op.push_back(value);

    // from 1 to 2^N -1 iterate and get all possible sub sets
    for (unsigned int index = 1; index < (1 << N); index++)
    {
        value.clear();

        // based on all the bits set for the index combination, add the elements to the sub set array
        for (unsigned int check_set_bit = 0; check_set_bit < N; check_set_bit++)
        {
            if ((index >> (check_set_bit)) & 1)
            {
                value.push_back(A[check_set_bit]);
            }
        }

        op.push_back(value);
    }

    // sort the output result, so that all subsets are in ascending order 
    sort(op.begin(), op.end());

    return op;
}
