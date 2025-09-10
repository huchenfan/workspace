#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& a, int l, int mid, int r, vector<int>& tmp) {
    int i = l;          // 左半起点
    int j = mid + 1;    // 右半起点
    int k = 0;          // tmp 下标

    while (i <= mid && j <= r) {
        tmp[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];
    }
    while (i <= mid)  tmp[k++] = a[i++];
    while (j <= r)    tmp[k++] = a[j++];

    for (i = 0; i < k; ++i) a[l + i] = tmp[i];
}

void mergeSort(vector<int>& a, int l, int r, vector<int>& tmp) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    mergeSort(a, l, mid, tmp);
    mergeSort(a, mid + 1, r, tmp);
    merge(a, l, mid, r, tmp);
}

void mergeSort_(vector<int>& a) {
    if (a.empty()) return;
    vector<int> tmp(a.size());
    mergeSort(a, 0, (int)a.size() - 1, tmp);
}

int main() {
    vector<int> vector1 = {4, 9, 8, 6, 8, 54, 32, 65, 12};
    mergeSort_(vector1);
    for (int i: vector1) {
        cout << i << " ";
    }
    cout << endl;
}