#include <iostream>

using namespace std;

class test{
private:
    string name;
    int age;

public:
    test(string name,int age){
        this->name=name;        //利用构造函数赋值        
        this->age=age;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }
};

ostream & operator<<(ostream &cout,test t){//左移运算符重载

    cout<<t.getName()<<" "<<t.getAge();

    return cout;
}


int main(){

    test t("张三",18);

    cout<<t<<endl;

    return 0;
}