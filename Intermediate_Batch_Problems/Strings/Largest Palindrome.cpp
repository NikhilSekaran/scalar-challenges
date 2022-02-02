int getPalindromeLength(string data, int left, int right)
{
    int string_len = data.length();
    int length;
    while (left >= 0 && right < (string_len) && data[left] == data[right])
    {
        left--;
        right++;
    }

    length = right - left - 1;

    return length;
}

int Solution::solve(string A) {
    int max_length_palindrome = 1;

    for (int index = 0; index < A.length(); index++)
    {
        // for odd length Palindrome
        max_length_palindrome = max (max_length_palindrome, getPalindromeLength(A, index, index));

        // for even length Palindrome
        max_length_palindrome = max (max_length_palindrome, getPalindromeLength(A, index, index+1));
    }

    return max_length_palindrome;
}
