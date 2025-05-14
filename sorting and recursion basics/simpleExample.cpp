#include<iostream>
using namespace std;

void print1();
void print2();
void print3();
void print4();
void print5();

void print2(){
    cout<<"hello 1"<<endl;
    print3();
}
void print3(){
    cout<<"hello 1"<<endl;
    print4();
}
void print4(){
    cout<<"hello 4"<<endl;
    print5();
}
void print5(){
    cout<<"hello 1"<<endl;
}
void print1(){
    cout<<"hello 1"<<endl;
    print2();
}

int main(){
    cout<<"hello pankaj"<<endl;
    print1();
    return 0;
}
