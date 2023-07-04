#include <vector>
#include <cmath>
#include <iostream>
//using namespace std;
int Parent(int i)
{
	return floor((i + 1) / 2) - 1;
}
int Left(int i)
{
	return 2 * (i + 1) - 1;
}

int Right(int i)
{
	return 2 * (i + 1);
}

void Max_Heapify(std::vector<int>& A, int i, int heap_size)
{
	auto largest = i;
	auto l = Left(i);
	auto r = Right(i);
	if (l<heap_size && A[l]>A[i])
		largest = l;
	if (r<heap_size && A[r]>A[largest])
		largest = r;
	if (largest != i) {
		std::swap(A[i], A[largest]);
		Max_Heapify(A, largest, heap_size);
	}

}
void Build_Max_Heap(std::vector<int>& A)
{
	for (auto i = Parent(A.size() - 1); i >= 0; --i)
		Max_Heapify(A, i, A.size());
}
