int Solution::singleNumber(const vector<int> &A) {
    int ans = 0;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        ans ^= A[index];
    }

    return ans;
}
