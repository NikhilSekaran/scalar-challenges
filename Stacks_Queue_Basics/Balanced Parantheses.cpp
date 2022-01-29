int Solution::solve(string A) {

    stack<char> parantheses;
    char curr_char;
    int ret_val;

    for (unsigned int index = 0; index < A.size(); index++)
    {
        curr_char = A[index];

        if (curr_char == '(')
        {
            parantheses.push(curr_char);
        }

        // if first occurence is ')' then its not balanced hence return 0
        if (parantheses.empty())
        {
            return 0;
        }

        // if stack has elements and 
        if (curr_char == ')')
        {
            parantheses.pop();
        }
    }

    ret_val = parantheses.empty();

    return ret_val;
}
