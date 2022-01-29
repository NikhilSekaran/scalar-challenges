int Solution::majorityElement(const vector<int> &A) {
    int majority = -1;
    int count = 0;
    unsigned int freq, freq_check = A.size() / 2;

    // traverse and find the majority
    for (unsigned int index = 0; index < A.size(); index++)
    {
        if (majority == A[index])
        {
            count++;
        }
        else if (count == 0)
        {
            count++;
            majority = A[index];
        }
        else
        {
            count--;
        }
    }

    // confirm whether the fetched majority element is really a majority in the array
    for (unsigned int index = 0; index < A.size(); index++)
    {
        if (A[index] == majority)
        {
            freq++;
        }
    }

    if (freq <= freq_check)
    {
        majority = -1;
    }

    return majority;
}
