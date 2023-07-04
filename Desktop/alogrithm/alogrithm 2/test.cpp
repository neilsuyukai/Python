#include <iostream>
#include <vector>

void merge_sort(std::vector<int> &A, unsigned p, unsigned r);

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