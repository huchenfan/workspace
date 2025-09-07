#include <iostream>

using namespace std;

void test01(){

    // 定义指针
    int* p;
    int a = 10;
    p = &a;
    cout << "a的地址:::" << &a << endl;
    cout << "p为:::" << p << endl;

    // 使用指针
    cout << *p << endl;
    *p = 11;
    cout << a << endl;

}

void test02(){
    // 指针数据类型所占的内存大小
    int* p;
    cout << "int* 所占内存大小 :::" << sizeof(p) << endl;
    cout << "long* 所占内存大小 :::" << sizeof(long*) << endl;
    cout << "char* 所占内存大小 :::" << sizeof(char*) << endl;
    cout << "float* 所占内存大小 :::" << sizeof(float*) << endl;
    cout << "double* 所占内存大小 :::" << sizeof(double*) << endl;
}

void test03(){

    // 空指针
    int* p = NULL;

//    // 野指针
//    int* p_ = (int*)0x1100;
//    cout << *p_ << endl;
}

void test04(){
    // 常量指针
    const int* p;

    // 指针变量
    int* const p_ = nullptr;

    // const 都修饰
    const int* const _p_ = nullptr;

}

void test05(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* p = arr;
    for(int i = 0; i < 10; i++){
        cout <<  *(p++) << endl;
    }
}

int main(){
    test05();
    return 0;
}