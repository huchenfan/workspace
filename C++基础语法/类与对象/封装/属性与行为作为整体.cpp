#include <iostream>

using namespace std;

class Circle {
    // 访问权限
public:

    // 属性
    int m_r; // 半径

    // 行为
    double calculateZC(){
        /*计算圆的周长*/
        return 2 * 3.14 * m_r;
    }
};




int main(){
    // 通过类，实例化一个对象
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长是" << c1.calculateZC() << endl;

    return 0;
}

