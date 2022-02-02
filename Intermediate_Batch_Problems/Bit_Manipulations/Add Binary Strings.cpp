string Solution::addBinary(string A, string B) {
    int str_A_len = A.length();
    int str_B_len = B.length();
    int A_index = (str_A_len - 1), B_index = (str_B_len - 1);

    uint8_t sum, carry = 0, base = 2, dig_1, dig_2;
    char temp_sum;
    string result = "";

    while ( (A_index >= 0) || (B_index >= 0) || (carry == 1) )
    {
        sum = 0;

        if (A_index >= 0)
        {
            dig_1 = (A[A_index] == '1') ? 1 : 0;
        }
        else
        {
            dig_1 = 0;
        }

        sum += dig_1;

        if (B_index >= 0)
        {
            dig_2 = (B[B_index] == '1') ? 1 : 0;
        }
        else
        {
            dig_2 = 0;
        }

        sum += dig_2;
        sum += carry;

        carry = sum / base;

        temp_sum = ( (sum % base) == 1) ? '1' : '0';

        result = temp_sum + result;

        A_index--;
        B_index--;
    }

    return result;
}
