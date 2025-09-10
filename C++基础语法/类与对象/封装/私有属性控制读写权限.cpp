#include <iostream>
#include <string>
#include <utility>
using namespace std;


class Student{

private:
    string name;
    int id = 0;

public:
    void setName(string name_){
        name = name_;
    }

    string getName(){
        return name;
    }

    void setId(int id_){
        id = id_;
    }

    int getId(){
        return id;
    }

};



int main(){

    Student s1;
    s1.setName("ÀîÃ÷");
    cout << s1.getName() << endl;

    return 0;
}