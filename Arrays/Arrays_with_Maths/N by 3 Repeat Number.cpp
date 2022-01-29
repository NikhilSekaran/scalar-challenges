int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int majority_1 = -1, majority_2 = -1, majority;
    int count_1 = 0, count_2 = 0;
    unsigned int freq_check = A.size() / 3, freq_1 = 0, freq_2 = 0;

    // find the majority_1 and majority_2 element as 2 elements can be of majority for N/3 range
    for (unsigned int index = 0; index < A.size(); index++)
    {
        // matches first element
        if (majority_1 == A[index])
        {         
            count_1++;
        }
        else if (majority_2 == A[index])
        {
            count_2++;
        }
        else if (count_1 == 0)
        {
            count_1++;
            majority_1 = A[index];
        }
        else if (count_2 == 0)
        {
            count_2++;
            majority_2 = A[index];
        }
        else
        {
            count_1--;
            count_2--;
        }
    }

    // confirm whether the fetched majority_1 or majority_2 element is really a majority in the array
    for (unsigned int index = 0; index < A.size(); index++)
    {
        if (A[index] == majority_1)
        {
            freq_1++;
        }
        else if (A[index] == majority_2)
        {
            freq_2++;
        }
    }

    // based on the fetched frequency, update the majority
    if (freq_1 > freq_check)
    {
        majority = majority_1;
    }
    else if (freq_2 > freq_check)
    {
        majority = majority_2;
    }
    else
    {
        majority = -1;
    }

    return majority;

}
