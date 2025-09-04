#include <iostream>

using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 4};

    cout << "数组大小:::" << sizeof(arr) << endl;

    cout << "数组首地址:::" << arr << endl;

    cout << "数组元素个数:::" << sizeof(arr) / sizeof(arr[0]) << endl;

    system("pause");

    return 0;
}
