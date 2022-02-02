int findFactorial(int number)
{
    // base condition
    if (number == 0 || number == 1)
    {
        return 1;
    }

    // main logic
    return number * findFactorial(number - 1);
}

int Solution::solve(int A) {
    
    return findFactorial(A);
}
