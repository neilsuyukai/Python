#include <vector>
#include <cmath>
void merge(std::vector<int> &A, unsigned p, unsigned q, unsigned r);

void merge_sort(std::vector<int> &A, unsigned p, unsigned r)
{
    if (p < r)
    {
        unsigned q = static_cast<unsigned>(floor((p + r) / 2.0)) + 1;
        merge_sort(A, p, q - 1);
        merge_sort(A, q, r);
        merge(A, p, q - 1, r);
    }
}
