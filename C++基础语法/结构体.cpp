#include <iostream>
#include <string>
using namespace std;


struct Person{
    int id;
};

struct Student{
    int age;
    string name;
    int core;
    struct Person person;
}s3;


int main() {
    struct Student s1;
    s1.age = 18;
    s1.name = "李明";
    s1.core = 666;
    s3.name = "小红";
    struct Student s2 = {19, "乔云", 551};
    // 结构体数组
    struct Student students[] = {s1, s2, s3};

    //结构体指针
    struct Student *p = &s1;
    cout << p->name << p->core << p->age << endl;

}
