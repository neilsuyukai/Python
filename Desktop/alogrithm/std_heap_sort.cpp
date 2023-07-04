#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void std_heap_sort(vector<int> &nums)
{
    make_heap(nums.begin(), nums.end());
    sort_heap(nums.begin(), nums.end());
    // [TODO]
} // end of std_heap_sort
