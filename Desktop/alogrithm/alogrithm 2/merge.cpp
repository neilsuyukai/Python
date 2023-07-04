#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &A, unsigned p, unsigned q, unsigned r)
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
} // end of merge