#include <iostream>

using namespace std;

void test01(){

    // ����ָ��
    int* p;
    int a = 10;
    p = &a;
    cout << "a�ĵ�ַ:::" << &a << endl;
    cout << "pΪ:::" << p << endl;

    // ʹ��ָ��
    cout << *p << endl;
    *p = 11;
    cout << a << endl;

}

void test02(){
    // ָ������������ռ���ڴ��С
    int* p;
    cout << "int* ��ռ�ڴ��С :::" << sizeof(p) << endl;
    cout << "long* ��ռ�ڴ��С :::" << sizeof(long*) << endl;
    cout << "char* ��ռ�ڴ��С :::" << sizeof(char*) << endl;
    cout << "float* ��ռ�ڴ��С :::" << sizeof(float*) << endl;
    cout << "double* ��ռ�ڴ��С :::" << sizeof(double*) << endl;
}

void test03(){

    // ��ָ��
    int* p = NULL;

//    // Ұָ��
//    int* p_ = (int*)0x1100;
//    cout << *p_ << endl;
}

void test04(){
    // ����ָ��
    const int* p;

    // ָ�����
    int* const p_ = nullptr;

    // const ������
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