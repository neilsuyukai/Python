#include <iostream>
#include <vector>

using namespace std;

class PriorityQueue {
private:
    vector<int> heap;   // The heap is stored in a vector

    // Helper functions for maintaining the heap property
    void heapify_up(int i) {
        if (i == 0) return;  // We have reached the root
        int parent = (i-1) / 2;
        if (heap[i] > heap[parent]) {
            swap(heap[i], heap[parent]);
            heapify_up(parent);
        }
    }

    void heapify_down(int i) {
        int left_child = 2*i + 1;
        int right_child = 2*i + 2;
        int largest = i;
        if (left_child < heap.size() && heap[left_child] > heap[largest]) {
            largest = left_child;
        }
        if (right_child < heap.size() && heap[right_child] > heap[largest]) {
            largest = right_child;
        }
        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapify_down(largest);
        }
    }

public:
    void insert(int x) {
        heap.push_back(x);  // Add the new element to the end of the vector
        heapify_up(heap.size()-1);  // Maintain the heap property by moving the new element up
    }

    int maximum() {
        if (heap.empty()) {
            cerr << "Error: The heap is empty.\n";
            return -1;  // We can return any arbitrary value in case of an error
        }
        return heap[0];  // The maximum element is the root of the heap
    }

    int extract_max() {
        if (heap.empty()) {
            cerr << "Error: The heap is empty.\n";
            return -1;  // We can return any arbitrary value in case of an error
        }
        int max_elem = heap[0];
        heap[0] = heap.back();  // Replace the root with the last element
        heap.pop_back();  // Remove the last element from the vector
        heapify_down(0);  // Maintain the heap property by moving the new root down
        return max_elem;
    }

    void increase_key(int i, int k) {
        if (k < heap[i]) {
            cerr << "Error: The new key is smaller than the current key.\n";
            return;
        }
        heap[i] = k;
        heapify_up(i);
    }
};

int main() {
    PriorityQueue pq;
    pq.insert(3);
    pq.insert(2);
    pq.insert(1);
    cout << pq.maximum() << '\n';  // Should print 3
    cout << pq.extract_max() << '\n';  // Should print 3
    pq.increase_key(1, 4);
    cout << pq.maximum() << '\n';  // Should print 4
    return 0;
}
