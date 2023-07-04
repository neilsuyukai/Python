#include <vector>
#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

void generate_random_data(std::vector<int> &v, size_t n);

void time_count(void (*fun)(vector<int> &), const vector<double> data_size, vector<double> &running_time)
{
    chrono::high_resolution_clock::time_point start, end;
    vector<int> A;
    size_t low, high;

    for (int i = 0; i < data_size.size(); i++)
    {
        // ≤£•Õ∏ÍÆ∆
        generate_random_data(A, data_size[i]);
        low = 0;
        high = A.size() - 1;
        // ∂}©l≠pÆ…
        start = chrono::high_resolution_clock::now();
        fun(A);
        end = chrono::high_resolution_clock::now();
        // µ≤ßÙ≠pÆ…
        chrono::duration<double> diff = end - start;
        running_time.push_back(diff.count());
    }
}

void time_count(void (*fun)(vector<int> &, size_t, size_t), const vector<double> data_size, vector<double> &running_time)
{
    chrono::high_resolution_clock::time_point start, end;
    vector<int> A;
    size_t low, high;

    for (int i = 0; i < data_size.size(); i++)
    {
        // ≤£•Õ∏ÍÆ∆
        generate_random_data(A, data_size[i]);
        low = 0;
        high = A.size() - 1;
        // ∂}©l≠pÆ…
        start = chrono::high_resolution_clock::now();
        fun(A, 0, A.size() - 1);
        end = chrono::high_resolution_clock::now();
        // µ≤ßÙ≠pÆ…
        chrono::duration<double> diff = end - start;
        running_time.push_back(diff.count());
    }
}

void time_log(const string name, const vector<double> &x, const vector<double> &y)
{
    cout << name << ":" << endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << "Size:" << setw(7) << (int)x[i] << " Time:" << fixed << setprecision(7) << y[i] << endl;
    }
    cout << endl;
}
