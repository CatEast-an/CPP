#include <iostream>
#include "addAddress.h"
using namespace std;


void Address::setName(){
    cout<<"请输入姓名：";
    cin>>name;
    cout<<endl;
}

void Address::setGender(){
    cout<<"请输入性别：(男或女)";
    cin>>gender;
    cout<<endl;
}

void Address::setAge(){
    cout<<"请输入年龄：";
    cin>>age;
    cout<<endl;
}

void Address::setNumber(){
    cout<<"请输入电话：";
    cin>>number;
    cout<<endl;
}

void Address::setHome(){
    cout<<"请输入家庭住址：";
    cin>>home;
    cout<<endl;
}

string Address::getName(){
    return name;
}

string Address::getGender(){
    return gender;
}

int Address::getAge(){
    return age;
}

string Address::getNumber(){
    return number;
}

string Address::getHome(){
    return home;
}