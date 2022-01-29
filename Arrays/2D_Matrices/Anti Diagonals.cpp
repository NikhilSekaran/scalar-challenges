vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > diagonals;
    vector<int> row_diag, col_diag;

    int value;
    unsigned int row_count = A.size(), col_count = A[0].size();
    int row_start_index, col_start_index;

    // fetch all diagonals from 0th row
    for (unsigned int col_index = 0; col_index < col_count; col_index++)
    {
        row_start_index = 0;
        col_start_index = col_index;
        row_diag.clear();

        while(row_start_index < row_count)
        {
            value = 0;

            if (col_start_index >= 0)
            {
                value = A[row_start_index][col_start_index];
            }

            row_diag.push_back(value);

            row_start_index++;
            col_start_index--;
            
        }

        diagonals.push_back(row_diag);
    }  
    
    
    // fetch all diagonals from N-1th column
    for (unsigned int row_index = 1; row_index < row_count; row_index++)
    {
        row_start_index = row_index;
        col_start_index = col_count - 1;
        col_diag.clear();

        while(col_start_index >= 0)
        {
            value = 0;

            if (row_start_index < row_count)
            {
                value = A[row_start_index][col_start_index];
            }

            col_diag.push_back(value);

            row_start_index++;
            col_start_index--;
            
        }

        diagonals.push_back(col_diag);
    }

    return diagonals;
}
