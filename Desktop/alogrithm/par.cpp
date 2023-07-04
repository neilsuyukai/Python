#include <fstream>
#include <iostream>
#include "ParandQui.cpp"
using namespace std;
int main()
{
    int n = 10000; // 数组大小
    vector<int> arr(n);

    // 随机生成数组
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    // 複製数组用于比较不同排序算法的执行时间
    vector<int> arr1 = arr;
    vector<int> arr2 = arr;
    vector<int> arr3 = arr;

    ofstream file("sort_time.csv"); // 创建保存时间数据的文件

    // 比值审敛法绘图
    for (int i = 100; i <= n; i += 100)
    {
        auto start = high_resolution_clock::now();
        quicksort(arr1, 0, i - 1);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);

        file << "Quicksort," << i << "," << duration.count() << endl; // 将数据写入文件
    }

    for (int i = 100; i <= n; i += 100)
    {
        auto start = high_resolution_clock::now();
        make_heap(arr2.begin(), arr2.begin() + i);
        sort_heap(arr2.begin(), arr2.begin() + i);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);

        file << "Heapsort," << i << "," << duration.count() << endl; // 将数据写入文件
    }

    for (int i = 100; i <= n; i += 100)
    {
        auto start = high_resolution_clock::now();
        sort(arr3.begin(), arr3.begin() + i);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);

        file << "std::sort," << i << "," << duration.count() << endl; // 将数据写入文件
    }

    file.close(); // 关闭文件

    return 0;
}
