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
    s1.name = "����";
    s1.core = 666;
    s3.name = "С��";
    struct Student s2 = {19, "����", 551};
    // �ṹ������
    struct Student students[] = {s1, s2, s3};

    //�ṹ��ָ��
    struct Student *p = &s1;
    cout << p->name << p->core << p->age << endl;

}
