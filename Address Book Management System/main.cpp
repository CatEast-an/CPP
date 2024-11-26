#include <iostream>
#include <vector>
#include "addAddress.h"

using namespace std;

void showMenu();
void showAddress(vector<Address> v);
void deleteAddress(string name,vector<Address> v);
void findAddress(string name,vector<Address> v);
void updateAddress(string name,vector<Address> v);

int main(){

    vector<Address> peopleArray;

    for(int i=1;;i++){
        showMenu();
        int select;
        cin>>select;
        switch(select){
            case 1:{
                Address person;
                person.setName();
                person.setGender();
                person.setAge();
                person.setNumber();
                person.setHome();
                peopleArray.push_back(person);
                break;
            }
            case 2:{
                showAddress(peopleArray);
                break;
            }
            case 3:{
                cout<<"请输入删除的对象姓名：";
                string deleteName;
                cin>>deleteName;
                deleteAddress(deleteName,peopleArray);
                break;
            }
            case 4:{
                cout<<"请输入查找的对象姓名：";
                string findName;
                cin>>findName;
                findAddress(findName,peopleArray);
                break;
            }
            case 5:{
                cout<<"请输入修改的对象姓名：";
                string updateName;
                cin>>updateName;
                updateAddress(updateName,peopleArray);
                break;
            }
            case 6:{
                cout<<"确定清空联系人？ 确认请输入true 否则请输入false"<<endl;
                bool deleteAll;
                cin>>deleteAll;
                if(deleteAll)
                    peopleArray.clear();
                break;
            }
            case 0:{
                cout<<"通讯录系统已退出"<<endl;
                system("pause");
                return 0;
            }
            default:
                break;
        }
        cout<<"1.返回上一级  2.退出"<<endl;
        int slct;
        cin>>slct;
        if(slct==1)
            continue;
        else{
            cout<<"通讯录系统已退出"<<endl;
            system("pause");
            return 0;
        }
    }
}