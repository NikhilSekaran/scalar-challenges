vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    unsigned int mat_A_row_count = A.size();
    unsigned int mat_B_row_count = B.size();
    unsigned int mat_A_col_count = A[0].size();
    unsigned int mat_B_col_count = B[0].size();

    vector <int> row_data;
    vector < vector<int> > res;
    int sum;

    if (mat_A_col_count == mat_B_row_count)
    {
        for (unsigned int i = 0; i < mat_A_row_count; i++)
        {
            row_data.clear();

            for (unsigned int j = 0; j < mat_B_col_count; j++)
            {
                sum = 0;
                for (unsigned int k = 0; k < mat_A_col_count; k++)
                {
                    sum += A[i][k] * B[k][j];
                }

                row_data.push_back(sum);
            }

            res.push_back(row_data);
        }
    }

    return res;
}
