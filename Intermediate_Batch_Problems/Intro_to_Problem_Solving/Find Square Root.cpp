int Solution::solve(int A) {

    int ret_val = -1;

    for (long int no = 1; no * no <= A; no++)
    {
        if (no * no == A)
        {
            ret_val = no;
            break;
        }
    }

    return ret_val;

}
