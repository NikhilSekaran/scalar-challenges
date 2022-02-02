int Solution::numSetBits(int A) {

    unsigned int no_of_bits = sizeof(A) * 8;
    int count = 0;

    for (unsigned int index = 0; index < no_of_bits; index++)
    {
        // Left shift logic
        if ( (A & (1 << index)) != 0)
        {
            count++;
        }
    }

    return count;
}
