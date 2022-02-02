int Solution::findMod(string A, int B) {
    long carry_fwd = 1;
    char each_digit;
    int digit_in_int;
    long ans = 0;

    for (int index = A.length() - 1; index >=0; index--)
    {
        // here 0 is equal to 48 in char format
        each_digit = A[index];

        // convert char to int here by subtracting 48 here
        digit_in_int = each_digit - 48;

        ans = (ans + ((digit_in_int % B) * carry_fwd) ) % B;

        carry_fwd = (carry_fwd * 10) % B;
    }

    return ans;
}
