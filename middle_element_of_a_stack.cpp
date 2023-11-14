//Code to print out the middle element of our stack

#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int> &st, int &mid, int &ans)
{
    if(mid == 1)
    {
        ans = st.top();
        return;
    }

    mid--;
    int temp = st.top();
    st.pop();
    solve(st, mid, ans);
    st.push(temp);
}


int middle_element(stack<int> &st)
{
    int mid = 0;
    if(st.empty())
    {
        cout<<"Stack is empty."<<endl;
        return -1;
    }
        
    int size = st.size();
    if(size & 1)
    {
        mid = (size/2) + 1;
    }
    else
    {
        mid = (size/2);
    }

    int ans = -1;
    solve(st, mid, ans);
    return ans;
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
    st.push(70);

    cout<<middle_element(st);
    return 0;
}
