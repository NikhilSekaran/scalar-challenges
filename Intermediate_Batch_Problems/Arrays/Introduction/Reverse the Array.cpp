vector<int> Solution::solve(const vector<int> &A) {
    vector<int> reversed_ip;

    for (int i = (A.size() - 1); i >= 0 ; i--)
    {
        reversed_ip.push_back(A[i]);
    }

    return reversed_ip;
}
