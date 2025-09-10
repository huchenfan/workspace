#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v){

    for(vector<int>::iterator it  = v.begin(); it != v.end(); it++){
        cout << *it << " ";

    }

    cout << endl;
}

void test01()
{
    vector<int> vector1;  // 默认构造
    for (int i = 0; i < 10; i++){
        vector1.push_back(i);
    }
    printVector(vector1);

    vector<int> vector2(vector1.begin(), vector1.end());  // 通过区间方式间接构造
    printVector(vector2);

    vector<int> vector3(10, 100);// n个element构造
    printVector(vector3);

    vector<int> vector4(vector3); // 拷贝构造
    printVector(vector4);
}

void test02(){
    vector<int> vector1;
    for(int i = 0; i < 10; i++){
        vector1.push_back(i);
    }
    printVector(vector1);


    vector<int> vector2;
    vector2 = vector1;  // 直接赋值
    printVector(vector2);

    vector<int> vector3;
    vector3.assign(vector2.begin(), vector2.end());  // 区间赋值
    printVector(vector3);

    vector<int> vector4;
    vector4.assign(10, 100);  // n个element赋值
    printVector(vector4);
}

void test03(){
    vector<int> vector1;
    for(int i = 0; i < 10; i++){
        vector1.push_back(i);
    }

    cout << "vector1是否为空？" << vector1.empty() << endl;
    cout << "vector1的容量？" << vector1.capacity() << endl;
    cout << "vector1的元素个数?" << vector1.size() << endl;
    printVector(vector1);
    vector1.resize(5);
    printVector(vector1);
    vector1.resize(12, 8);
    printVector(vector1);
}

void test04(){
    vector<int> vector1;
    for(int i = 0; i < 10; i++){
        vector1.push_back(i);
    }
    printVector(vector1);
    vector1.push_back(100); // 尾插
    printVector(vector1);
    vector1.pop_back(); // 尾删
    printVector(vector1);
    vector1.insert(vector1.begin(), 4, 100); // 插入
    printVector(vector1);
    vector1.erase(vector1.begin()); // 删除
    printVector(vector1);
    vector1.clear();
    printVector(vector1);
}

void test05(){
    vector<int> vector1;
    for(int i = 0; i < 10; i++){
        vector1.push_back(i);
    }
    printVector(vector1);
    cout << vector1.at(1)<< endl; // 访问索引为1的元素
    cout << vector1[2] << endl; // 访问索引为2的元素
    cout << vector1.front()<< endl; // 访问第一个元素
    cout << vector1.back() << endl; // 访问最后一个元素
}

void test06(){
    vector<int> vector1, vector2;
    for(int i = 0; i < 10; i++){
        vector1.push_back(i);
    }
    vector2.push_back(1);
    printVector(vector1);
    printVector(vector2);

    vector1.swap(vector2);  // 两个容器进行互换
    printVector(vector1);
    printVector(vector2);

    //swap()的实际用途， 回收内存
    vector<int> vector3;
    for(int i = 0; i < 100000; i++){
        vector3.push_back(i);
    }
    vector3.resize(10);
    cout << "容器的大小::: " << vector3.size() << endl;
    cout << "容器的容量::: " << vector3.capacity() << endl;
    vector<int> (vector3).swap(vector3);  //初始化一个容量和大小为10的匿名容器， 再进行互换
    cout << "容器的大小::: " << vector3.size() << endl;
    cout << "容器的容量::: " << vector3.capacity() << endl;
    printVector(vector3);

}

void test07(){
    vector<int> vector1;
    int* p = NULL;
    int num = 0;
    for(int i = 0; i < 100000; i++){
        vector1.push_back(i);
        if(p != &vector1[0]){
            p = &vector1[0];
            num++;
        }
    }
    cout << "容器1动态拓展次数::: " << num << endl;

    vector<int> vector2;
    vector2.reserve(100000);
    int* p_ = NULL;
    int num_ = 0;
    for(int i = 0; i < 100000; i++){
        vector2.push_back(i);
        if(p_ != &vector2[0]){
            p_ = &vector2[0];
            num_++;
        }
    }
    cout << "容器2动态拓展次数::: " << num_ << endl;

}

void MyPrint(int n){
    cout << n << " ";
}

void test08(){

    vector<int> vector1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // 第一种遍历方式
    vector<int>::iterator it = vector1.begin();
    while(it != vector1.end()){
        cout << *it<< " ";
        it ++;
    }
    cout << endl;

    // 第二种遍历方式
    for(vector<int>::iterator it_ = vector1.begin(); it_ != vector1.end(); it_++){
        cout << *it_<< " ";
    }
    cout << endl;

    // 第三种遍历方式
    for(int i = 0; i < vector1.size(); i++){
        cout << vector1[i] << " ";
    }
    cout << endl;

    //第四种遍历方式
    for_each(vector1.begin(), vector1.end(), MyPrint);
    cout << endl;
}

void test09(){

    // 容器嵌套
    vector<vector<int>> v;
    vector<int>vector1, vector2, vector3, vector4;
    for(int i = 0; i < 4; i++){
        vector1.push_back(i + 1);
        vector2.push_back(i + 2);
        vector3.push_back(i + 3);
        vector4.push_back(i + 4);
    }
    v.push_back(vector1);
    v.push_back(vector2);
    v.push_back(vector3);
    v.push_back(vector4);

    for(vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++){
        for(vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++){
            cout << *vit << " ";
        }
        cout << endl;
    }
}

int main()
{
    test09();
    return 0;
}





