void Solution::solve(vector<vector<int> > &A) {
    unsigned int row_count = A.size(), col_count = A[0].size();
    int temp;

    // Transpose using swap elements with upper triangle iteration
    for (unsigned int row_index = 0; row_index < row_count; row_index++)
    {
        for (unsigned int col_index = row_index + 1; col_index < col_count; col_index++)
        {
            temp = A[row_index][col_index];
            A[row_index][col_index] = A[col_index][row_index];
            A[col_index][row_index] = temp;
        }
    }

    unsigned int start, end;

    // iterate all rows in matrix
    for (unsigned int row_index = 0; row_index < row_count; row_index++)
    {
        start = 0, end = col_count - 1;
        // reverse the row elements in the matrix
        while (start < end)
            {
                temp = A[row_index][start];
                A[row_index][start] = A[row_index][end];
                A[row_index][end] = temp;
                start++;
                end--;
            }
    }

}
