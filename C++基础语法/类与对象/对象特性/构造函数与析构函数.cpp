#include <iostream>
#include <string>

using namespace std;


class Person{

public:
    // ���캯��
    Person(){
        cout << "ִ�й��캯��" << endl;
    }

    ~Person(){
        cout << "ִ����������" << endl;
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