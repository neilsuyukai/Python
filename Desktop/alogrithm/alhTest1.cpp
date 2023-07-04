#include <iostream>
using namespace std;
int main()
{
    int n;
    int x = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i * i; j++)
            if (j % i == 0)
                for (int z = 0; z < j; z++)
                    x = x + 1;
}