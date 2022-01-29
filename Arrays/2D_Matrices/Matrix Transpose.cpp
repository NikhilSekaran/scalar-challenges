vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    unsigned int row_count = A.size(), col_count = A[0].size();
    vector<vector<int> > res;
    vector<int> row_res;

    for (unsigned int col_index = 0; col_index < col_count; col_index++)
    {
        row_res.clear();

        for (unsigned int row_index = 0; row_index < row_count; row_index++)
        {
            row_res.push_back(A[row_index][col_index]);
        }

        res.push_back(row_res);
    }

    return res;
}
