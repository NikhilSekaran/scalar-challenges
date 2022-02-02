vector<long long> Solution::rangeSum(vector<int> &A, vector<vector<int> > &B) {

    vector<long> prefix_sum;
    vector<int> ip;
    vector<long long> op;

    long value;
    long start, end;
    long long sum;

    // prefix sum is formed
    for (unsigned int index = 0; index < A.size(); index++)
    {
        if (index == 0)
        {
            value = A[index];
        }
        else
        {
            value = prefix_sum[index - 1] + A[index];
        }

        prefix_sum.push_back(value);
    }

    for(unsigned int i = 0; i < B.size(); i++)
    {
        // minus 1 is done so that index mapping with prefix_sum array is handled
        start = B[i][0] - 1;
        end = B[i][1] - 1;

        if (start == 0)
        {
            sum = prefix_sum[end];
        }
        else
        {
            sum = prefix_sum[end] - prefix_sum[start-1];
        }

        op.push_back(sum);

    }

    return op;
}
