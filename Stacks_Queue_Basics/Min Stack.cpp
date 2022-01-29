stack <int> ip_stack, min_stack;

MinStack::MinStack() {

    // as the ip stack and min stack are global, popping the old values to start with size 0
    while (!ip_stack.empty())
    {
        ip_stack.pop();
        min_stack.pop();
    }
}

void MinStack::push(int x) {
    int curr_min;
    
    // push the element to the input stack
    ip_stack.push(x);

    // push the min element to min stack

    if (min_stack.empty())
    {// if the min stack is empty then the current element pushed is min value
        curr_min = x;
    }
    else
    {// if the min stack is not empty then the top element and current element is compared to find min element
        curr_min = min_stack.top();

        curr_min = min(curr_min, x);
    }

    // push the min element each time to the stack when new element is pushed to the stack
    min_stack.push(curr_min);
}

void MinStack::pop() {
    if (!ip_stack.empty())
    {// pop the top element from ip and min stack if its not empty
        ip_stack.pop();

        min_stack.pop();
    }
}

int MinStack::top() {
    int curr_top = -1;

    if (!ip_stack.empty())
    {// fetch the top element from ip stack if its not empty
        curr_top = ip_stack.top();
    }

    return curr_top;
}

int MinStack::getMin() {
    int curr_min = -1;

    if (!min_stack.empty())
    {// fetch the top element from ip stack if its not empty
        curr_min = min_stack.top();
    }

    return curr_min;
}

