int Solution::solve(string A) {
    unsigned int left = 0, right = A.size() - 1;
    int is_palindrome = 1;

    while (left <= right)
    {
        if (A[left] != A[right])
        {
            is_palindrome = 0;
        }

        left++;
        right--;
    }    

    return is_palindrome;
}
