string Solution::solve(string A) {
    string conv_res = "";

    for (unsigned int index = 0; index < A.size(); index++)
    {
        conv_res += A[index] ^ ('a' - 'A');
    }

    return conv_res;
}
