#include <iostream>
#include <iomanip>
#include <vector>
#include <chrono>

using iter = std::vector<int>::iterator;
using namespace std;

void generate_sequential_data(std::vector<int>& v, size_t n);

// for linear_search
void time_count(iter(*fun)(vector<int>&, int), const vector<double> data_size, vector<double>& running_time)
{
	chrono::high_resolution_clock::time_point start, end;
	vector<int> A;
	int desired;

	for (int i = 0; i < data_size.size(); i++) {
		// ≤£•Õ∏ÍÆ∆
		generate_sequential_data(A, data_size[i]);
		desired = A.size();
		// ∂}©l≠pÆ…
		start = chrono::high_resolution_clock::now();
		// unsync the I/O of C and C++.
		ios_base::sync_with_stdio(false);
		fun(A, desired);
		end = chrono::high_resolution_clock::now();
		// µ≤ßÙ≠pÆ…
		chrono::duration<double> diff = end - start;
		running_time.push_back(diff.count());
	}
}

// for binary search
void time_count(iter(*fun)(vector<int>&, iter, iter, int), const vector<double> data_size, vector<double>& running_time)
{
	chrono::high_resolution_clock::time_point start, end;
	vector<int> A;
	int desired;

	for (int i = 0; i < data_size.size(); i++) {
		// ≤£•Õ∏ÍÆ∆
		generate_sequential_data(A, data_size[i]);
		desired = A.size();
		// ∂}©l≠pÆ…
		start = chrono::high_resolution_clock::now();
		// unsync the I/O of C and C++.
		ios_base::sync_with_stdio(false);
		fun(A, A.begin(), A.end() - 1, desired);
		end = chrono::high_resolution_clock::now();
		// µ≤ßÙ≠pÆ…
		chrono::duration<double> diff = end - start;
		running_time.push_back(diff.count());
	}
}


void time_log(const string name, const vector<double>& x, const vector<double>& y)
{
	cout << name << ":" << endl;
	for (int i = 0; i < x.size(); i++) {
		cout << "Size:" << setw(9) << (int)x[i] << " Time:" << fixed << setprecision(9) << y[i] << endl;
	}
	cout << endl;
}
