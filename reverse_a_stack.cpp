//Code to reverse a stack

#include<iostream>
#include<stack>
using namespace std;


void insert_at_bottom(stack<int> &st, int data)
{
    //If stack is empty, we'll push the data to be inserted at bottom and return back
    if(st.empty())
    {
        st.push(data);
        return;
    }
    //Store the top element
    int temp = st.top();
    //Pop from stack
    st.pop();
    //Recursive function
    insert_at_bottom(st, data);

    //Push back the temp element which was earlier popped
    st.push(temp);
}


void reverse_stack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();
    //Recursive call
    reverse_stack(st);
    //Since we want to reverse, we'll insert item from bottom
    insert_at_bottom(st, temp);
}


void print_stack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int temp = st.top();
    cout<<temp<<" ";
    st.pop();
    print_stack(st);
    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    print_stack(st);
    cout<<endl;
    reverse_stack(st);
    print_stack(st);
    return 0;
}
