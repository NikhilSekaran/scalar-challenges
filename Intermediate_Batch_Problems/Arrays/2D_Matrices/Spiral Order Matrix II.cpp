vector<vector<int> > Solution::generateMatrix(int A) {
    vector< vector<int> > spiral_mat (A, vector<int> (A) );
    int value = 1;
    int row_index = 0, col_index = 0;
    int N = A;
    
    while ( N > 1 )
    {
        for (unsigned int index = 1; index < N; index++)
        {
            spiral_mat[row_index][col_index] = value++;
            col_index++;
        }

        for (unsigned int index = 1; index < N; index++)
        {
            spiral_mat[row_index][col_index] = value++;
            row_index++;
        }

        for (unsigned int index = 1; index < N; index++)
        {
            spiral_mat[row_index][col_index] = value++;
            col_index--;
        }

        for (unsigned int index = 1; index < N; index++)
        {
            spiral_mat[row_index][col_index] = value++;
            row_index--;
        }

        row_index++;
        col_index++;
        N = N - 2;
    }

    if (N % 2 == 1)
    {
        spiral_mat[row_index][col_index] = value;
    }

    return spiral_mat;
}
