int Solution::solve(string A) {
    unsigned int ans = 0, count_a = 0;
    string char_A = "A", char_G = "G", temp;

    for(unsigned int index = 0; index < A.length(); index++)
    {
        temp = A[index];

        if( temp.compare(char_A) == 0)
        {
            count_a++;
        }
        else if( temp.compare(char_G) == 0)
        {
            ans = ans + count_a;
        }
    }

    ans = ans % (1000000000 + 7);

    return ans;
}
