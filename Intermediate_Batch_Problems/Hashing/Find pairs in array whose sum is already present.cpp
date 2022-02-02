int Solution::solve(vector<int> &A) {
    set<int> elements;
    int ele_1, ele_2;
    long sum;
    int count = 0;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        elements.insert(A[index]);
    }

    for (unsigned int i = 0; i < A.size(); i++)
    {
        ele_1 = A[i];

        for (unsigned int j = i + 1; j < A.size(); j++)
        {
            ele_2 = A[j];
            
            sum = ele_1 + ele_2;

            if (elements.find(sum) != elements.end())
            {
                count++;
            }
        }
    }    

    return count;
}
