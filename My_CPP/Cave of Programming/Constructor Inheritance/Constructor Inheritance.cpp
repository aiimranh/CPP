#include <iostream>
using namespace std;

class Machine
{
private:
    int id;
public:
    Machine():id(0){ cout<<"Machine no-argument constructor."<<endl;}
    Machine(int id):id(id){ cout<<"Machine argument constructor."<<endl;}
    void info(){ cout<<"ID: "<<id<<endl; }
};

class Vehicle:public Machine
{
public:
    Vehicle(){ cout<<"Vehicle no-argument constructor."<<endl; }
    Vehicle(int id):Machine(id){ cout<<"Vehicle argument constructor."<<endl; }
};

class Car:public Vehicle
{
public:
    Car():Vehicle(444){ cout<<"Car no-argument constructor."<<endl; }
};

int main()
{
    Machine mo;
    cout<<endl;
    Vehicle vo;
    vo.info();
    cout<<endl;
    Car co;
    co.info();
    cout<<endl;
    Machine mq(123);
    mq.info();
    cout<<endl;
    Vehicle vq(123);
    vq.info();
    cout<<endl;
    Car cq;
    cq.info();
    return 0;
}
