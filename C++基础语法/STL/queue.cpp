#include <iostream>
#include <queue>


using namespace std;

int main(){
    // 构造函数
    queue<int> queue1;

    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    queue1.push(4);
    queue1.push(5);

    while(!queue1.empty()){
        cout << queue1.front() << " ";
        queue1.pop();
    }
    return 0;
}