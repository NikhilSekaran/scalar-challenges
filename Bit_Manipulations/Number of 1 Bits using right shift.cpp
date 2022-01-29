int Solution::numSetBits(int A) {

    unsigned int no_of_bits = sizeof(A) * 8;
    int count = 0;

    for (unsigned int index = 0; index < no_of_bits; index++)
    {
        // Right shit logic
        if ( (A >> index) & 1)
        {
            count++;
        }
    }

    return count;
}
