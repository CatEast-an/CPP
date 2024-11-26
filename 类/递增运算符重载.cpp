#include <iostream>

using namespace std;

class test{
private:
    int m;
public:
    test(){
        m=0;
    }

    int getM(){
        return m;
    }


    //前置递增运算符重载
    test operator++(){
        m++;
        return *this;
    }

    //后置递增运算符重载
    test operator++(int){
        test t=*this;
        
        m++;

        return t;
    }

};

ostream & operator<<(ostream& cout,test t){     //左移运算符重载

    cout<<t.getM();

    return cout;
}

int main(){

    test t;

    cout<<++t<<endl;

    cout<<t++<<endl;

    cout<<t<<endl;

    return 0;
}