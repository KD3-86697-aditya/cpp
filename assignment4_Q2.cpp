// Q3. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using 
// Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not 
// given, allocate stack of size 5. 
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include<iostream>
using namespace std;

class stack
{   
    int size;
    int top;
    int *ptr;

    public:

    stack():stack(5){}                // constructor delegation

    stack(int size)
    {
        this->size=size;
        top=-1;
        ptr=new int [size];
    }

    void push(int element)
    { 
        if(!isFull())                // if stack is not full then push
        {
            ++top;
            ptr[top]=element;
        }
        else 
        {
            cout<<"stack is full \n";
        }
    }

    void pop()                          
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"no element present in stack\n";
        }
    }

    int peak()
    {
        return ptr[top];
    }

    bool isFull()
    {
        if(size-top==1)
        {
            return 1;
        }

        return 0;
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return 1;
        }

        return 0;
    }

    void print()
    {
        while(!isEmpty())
        {
            cout<<ptr[top]<<" ";
            top--;
        }
    }


    ~stack()
    {
        delete[] ptr;
        ptr=NULL;
    }

};

int main()
{

    stack s1(4);
    s1.push(3);
    s1.push(2);

    s1.pop();
    cout<<"current peak element of s1  is :"<<s1.peak()<<"\n";
    s1.push(5);
    s1.push(4);
    cout<<"current peak element of s1  is :"<<s1.peak()<<"\n";
    cout<<"s1 stack elements \n";
    s1.print();

    cout<<"\n";

    stack s2(5);
    s2.push(9);
    s2.push(7);
    s2.push(5);
    s2.push(3);
    s2.push(1);
    s2.pop();
    cout<<" current peak element of s2 is :"<<s2.peak()<<"\n";
    cout<<"stack elements \n";

    s2.print();



return 0 ;
}