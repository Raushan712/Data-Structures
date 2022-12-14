void sortedInsert(stack<int> &stack, int num)
{
    // base class
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }

    int a = stack.top();
    stack.pop();
    sortedInsert(stack, num);
    stack.push(a);
}
void sortStack(stack<int> &stack)
{
    // base class
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack, num);
}
