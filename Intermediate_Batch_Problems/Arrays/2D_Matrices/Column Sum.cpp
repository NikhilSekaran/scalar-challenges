vector<int> Solution::solve(vector<vector<int> > &A) {
    vector<int> row_data, sum_data;
    long sum;
    unsigned int col_count = A[0].size();
    unsigned int row_count = A.size();

    for (unsigned int col_index = 0; col_index < col_count; col_index++)
    {
        sum = 0;
        
        for (unsigned int row_index = 0; row_index < row_count; row_index++)
        {
            sum += A[row_index][col_index];
        }

        sum_data.push_back(sum);
    }

    return sum_data;
}
