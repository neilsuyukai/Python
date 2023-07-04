#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
// priority_queue
using namespace std;

void std_priority_queue_sort(vector<int> &nums)
{
    priority_queue<int> pq;
    for (int num : nums)
    {
        pq.push(num);
    }
    vector<int> sorted_nums;
    while (!pq.empty())
    {
        sorted_nums.push_back(pq.top());
        pq.pop();
    }
    reverse(sorted_nums.begin(), sorted_nums.end());
    nums = sorted_nums;
}
