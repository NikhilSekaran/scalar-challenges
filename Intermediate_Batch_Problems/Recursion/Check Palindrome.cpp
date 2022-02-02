bool isPalindrome(string &input, int start, int end)
{
    // base condition
    if (start >= end)
    {
        return true;
    }

    //main logic
    if (input[start] == input[end])
    {
        return isPalindrome(input, start+1, end-1);
    }

    return false;
}

int Solution::solve(string A) {

    return isPalindrome(A, 0, A.size()-1);
}
