long Solution::subarraySum(vector<int> &A) {

    long final_sum = 0;
    unsigned int start, end;
    long freq;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        start = index + 1;
        end = A.size() - index;

        freq = start * end;

        final_sum += freq * A[index];
    }

    return final_sum;
}