/*
Deque --> Data structure designed to operate in fifo(first in first out) context.
--> Double-ended queue 
--> Fast random access
--> Insertion and delection operation only at front and back of a queue.*/


#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    
    cout <<endl;
    
    cout<<"print first index Element->" << d.at(1) << endl;
    cout<<"Front:" << d.front() <<endl;
    cout <<"back:" << d.back() <<endl;
    cout << "Empty or not" << d.empty() << endl;
    cout << "Before erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase" << d.size() << endl;
    for(int i:d){
        cout << i <<endl;
    }
    
    
    
}


