#include <iostream>

using namespace std;

void test01(){
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int &test02(){
    static int a = 10;
    return a;
}


int main(){
    int &b = test02();
    cout << "b = " << b << endl;
    test02() = 100;
    cout << "b = " << b << endl;
    return 0;
}
