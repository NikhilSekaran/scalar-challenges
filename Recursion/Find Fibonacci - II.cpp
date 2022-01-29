int findFibonacci(int number)
{
    // base condition   
    if (number == 0)
    {
        return 0;
    }
    
    if (number == 1 || number == 2)
    {
        return 1;
    }

    //main logic
    return findFibonacci(number-1) + findFibonacci(number-2);
}

int Solution::findAthFibonacci(int A) {

    return findFibonacci(A);
}
