vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    vector<int> row_res;
    vector< vector<int> > result;
    int add_res;

    unsigned int row_count = A.size(), col_count = A[0].size();

    for (unsigned int row_index = 0; row_index < row_count; row_index++)
    {
        row_res.clear();

        for (unsigned int col_index = 0; col_index < col_count; col_index++)
        {
            add_res = A[row_index][col_index] + B[row_index][col_index];
              
            row_res.push_back(add_res);
        }

        result.push_back(row_res);
    }

    return result;


}
