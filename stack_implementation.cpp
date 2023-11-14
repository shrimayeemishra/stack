//Code to implement stack and it's functions using class
//No stl used

#include<iostream>
using namespace std;


class Stack{
    int *arr;
    int top;
    int size;

    public:
    Stack(int size1)
    {
        arr = new int[size1];
        this-> size = size1;
        this -> top = -1;
    }

    void push(int data)
    {
        if(top == size-1)
        {
            cout<<"Stack is full, cannot insert more item."<<endl;
            return;
        }

        top++;
        arr[top] = data;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is empty, cannot delete item."<<endl;
            return;
        }

        top--;
    }

    void elementAtTop()
    {
        cout<<arr[top]<<endl;
    }

    void TopIndex()
    {
        cout<<top<<endl;
    }

    bool empty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int sizeOfStack()
    {
        return size;
    }
};


int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.empty()<<endl;

    cout<<st.sizeOfStack()<<endl;
    st.TopIndex();
    st.elementAtTop();

    st.push(40);
    st.push(50);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<<st.empty()<<endl;
    return 0;
}
