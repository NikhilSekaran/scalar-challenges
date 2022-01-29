int Solution::bulbs(vector<int> &A) {
    int switch_pressed = 0, current_value;

    for(unsigned int index = 0; index < A.size(); index++)
    {
        // switch pressed count is even, then the input state is same as original else it should be toggled and compared
        if (switch_pressed%2 == 0)
        {
            current_value = A[index];
        }
        else
        {
            current_value = 1 - A[index];
        }

        // increase the switch press count if the current value is 0
        if (current_value == 0)
        {
            switch_pressed++;
        }
    }

    return switch_pressed;
}
