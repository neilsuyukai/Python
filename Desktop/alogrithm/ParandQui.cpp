#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

// PARTITION算法
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quicksort算法
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main() {
    int n = 10000; // 數組大小
    vector<int> arr(n);

    // 隨機生成數組
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }

    // 複製數組用於比較不同排序算法的執行時間
    vector<int> arr1 = arr;
    vector<int> arr2 = arr;
    vector<int> arr3 = arr;

    // 比值審斂法繪圖
    for (int i = 100; i <= n; i += 100) {
        auto start = high_resolution_clock::now();
        quicksort(arr1, 0, i - 1);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);

        cout << "Quicksort (n=" << i << "): " << duration.count() << " microseconds" << endl;
    }

    for (int i = 100; i <= n; i += 100) {
        auto start = high_resolution_clock::now();
        make_heap(arr2.begin(), arr2.begin() + i);
        sort_heap(arr2.begin(), arr2.begin() + i);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);

        cout << "Heapsort (n=" << i << "): " << duration.count() << " microseconds" << endl;
    }

    for (int i = 100; i <= n; i += 100) {
        auto start = high_resolution_clock::now();
        sort(arr3.begin(), arr3.begin() + i);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);

        cout << "std::sort (n=" << i << "): " << duration.count() << " microseconds" << endl;
    }

    return 0;
}
