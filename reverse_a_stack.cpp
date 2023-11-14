#include<iostream>
#include<stack>
using namespace std;


void insert_at_bottom(stack<int> &st, int data)
{
    if(st.empty())
    {
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();
    insert_at_bottom(st, data);

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
    reverse_stack(st);
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