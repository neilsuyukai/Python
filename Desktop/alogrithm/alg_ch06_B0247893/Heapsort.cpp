#include <vector>
void Max_Heapify(std::vector<int> &A, int i, int heap_size);
void Build_Max_Heap(std::vector<int> &A);
void Heapsort(std::vector<int> &A)
{
	int heap_size = A.size();
	Build_Max_Heap(A);
	for (auto i = (A.size() - 1); i >= 1; --i)
	{
		std::swap(A[0], A[i]);
		--heap_size;
		Max_Heapify(A, 0, heap_size);
	}
	// [TODO]
} // end of Heapsort
