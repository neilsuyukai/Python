#include <vector>
#include <iostream>
#include <cmath>

void merge(std::vector<int> &A, unsigned p, unsigned q, unsigned r)
{
	unsigned n1, n2, i, j, k;
	n1 = q - p + 1;
	n2 = r - q;
	// create arrarys L[1..n1+1] and R[1..n2+1]
	vector<int> L(n1 + 1), R(n2 + 1);
	for (i = 0; i < n1; ++i)
		L[i] = A[p + i];
	for (j = 0; j < n2; ++j)
		R[j] = A[q + 1 + j];
	L[i] = INT_MAX;
	R[j] = INT_MAX;
	i = 0;
	j = 0;
	for (k = p; k <= r; ++k)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			++i;
		}
		else
		{
			A[k] = R[j];
			++j;
		}
	} // end of for
	  // [TODO]
} // end of merge

void merge_sort(std::vector<int> &A, size_t p, size_t r)
{
	if (p < r)
	{
		unsigned q = static_cast<unsigned>(floor((p + r) / 2.0)) + 1;
		merge_sort(A, p, q - 1);
		merge_sort(A, q, r);
		merge(A, p, q - 1, r);
	}
	// [TODO]
} // end of merge_sort

int main()
{
	std::vector<int> A = {5, 2, 4, 7, 1, 3, 2, 6};

	std::cout << "Before: ";
	for (int i = 0; i < A.size(); ++i)
		std::cout << A[i] << " ";
	std::cout << std::endl;

	merge_sort(A, 0, A.size() - 1);

	std::cout << "After: ";
	for (int i = 0; i < A.size(); ++i)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}