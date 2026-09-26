#include<iostream>
using namespace std;

class Queue{
    int* arr;

    int capacity;
    int currCapacity;
    int f,r;

    public:

    Queue(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];

        //front and rear
        f=0;
        r=-1;

    }

    //push
    void push(int data){
        if(currCapacity==capacity){
            cout<<"Queue is Full\n";
            return;
        }
        r=(r+1)%capacity;
        arr[r]=data;
        currCapacity++;


    }

        //pop
    void pop(){
        if(currCapacity==capacity){
            cout<<"Queue is Full\n";
            return;
        }
        f=(f+1)%capacity;
        currCapacity--;
        


    }

         //front
    int front(){
        if(currCapacity==capacity){
            cout<<"Queue is Full\n";
            return -1;
        }
        return arr[f];


    }

    bool isEmpty(){
        return currCapacity==0;

    } 
};

int main (){
    Queue q(4);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;
    q.pop();
     cout<<q.front()<<endl;
    q.push(8);
     cout<<q.front()<<endl;


    




    return 0;
}