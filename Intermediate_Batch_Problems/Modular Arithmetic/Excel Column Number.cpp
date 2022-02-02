int Solution::titleToNumber(string A) {
    char each_letter;
    int value;
    int res = 0, base = 1;

    for (int index = A.length() - 1; index >= 0; index--)
    {
        each_letter = A[index];

        value = each_letter - 'A' + 1;

        res += value * base;

        base = base * 26;
    }

    return res;
}
