#include <iostream>
#include "addAddress.h"
#include <vector>
using namespace std;
void deleteAddress(string name,vector<Address> v){
    for(int i=0;i<v.size();i++){
        if(v[i].getName()==name)
            v.erase(v.begin()+i);
    }
    cout<<"输入的姓名不在通讯录中！"<<endl;
}