#include <iostream>
#include <string>

using namespace std;


class Person{

public:
    // 构造函数
    Person(){
        cout << "执行构造函数" << endl;
    }

    ~Person(){
        cout << "执行析构函数" << endl;
    }
};

void test01(){
    Person p;
}

int main(){
    test01();
    Person p;
    return 0;
}