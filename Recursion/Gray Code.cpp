vector<int> Solution::grayCode(int A) {
    vector<int> op;

    if (A == 0)
    {
        op = {0};
    }
    else if (A == 1)
    {
        op = {0, 1};
    }
    else
    {
        op = {0, 1};
        int curr_val;
        
        for(unsigned int i = 2; i <= A; i++)
        {
            int j = op.size()-1;
            for( ; j >= 0; j--)
            {
                curr_val = op[j] + ( 1 << i-1 );

                op.push_back(curr_val);
            }
        }
    }

    return op;
}
