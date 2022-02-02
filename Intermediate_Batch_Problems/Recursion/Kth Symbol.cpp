int kthSymbol(int row, int index)
{
    //base condition
    if (row == 1)
    {// first row
        return 0;
    }

    if (index % 2 == 0)
    {
        return kthSymbol(row - 1, index / 2);
    }
    else
    {
        return 1 - kthSymbol(row - 1, index / 2);
    }
}

int Solution::solve(int A, int B) {

    return kthSymbol(A, B);
}
