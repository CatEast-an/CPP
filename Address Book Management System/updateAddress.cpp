#include <iostream>
#include "addAddress.h"
#include <vector>
using namespace std;

void updateAddress(string name,vector<Address> v){
    for(Address ad:v){
        if(ad.getName()==name){
            ad.setName();
            ad.setGender();
            ad.setAge();
            ad.setNumber();
            ad.setHome();
            break;
        }
    }
    cout<<"输入的姓名不在通讯录中！"<<endl;
}