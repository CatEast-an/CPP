#include <iostream>
#include "addAddress.h"
#include <vector>
using namespace std;

void findAddress(string name,vector<Address> v){
    for(Address ad:v){
        if(ad.getName()==name){
            cout<<ad.getName()<<" "<<ad.getGender()<<" "<<ad.getAge()<<" "<<ad.getNumber()<<" "<<ad.getHome()<<endl;
            break;
        }
    }
    cout<<"输入的姓名不在通讯录中！"<<endl;
}