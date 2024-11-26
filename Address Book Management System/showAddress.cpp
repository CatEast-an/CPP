#include <iostream>
#include "addAddress.h"
#include <vector>
using namespace std;

void showAddress(vector<Address> v){    
    for(Address ad:v){
        cout<<ad.getName()<<" "<<ad.getGender()<<" "<<ad.getAge()<<" "<<ad.getNumber()<<" "<<ad.getHome()<<endl;
    }
}