#include <iostream>
#include <iomanip>
#include <vector>
#include <chrono>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;
using namespace std;

void time_count(void(*fun)(vector<int>&), const vector<double> data_size, vector<double>& running_time);
void time_count(void(*fun)(vector<int>&, size_t, size_t), const vector<double> data_size, vector<double>& running_time);
void time_log(const string name, const vector<double>& x, const vector<double>& y);

void std_heap_sort(std::vector<int>& A);
void Heapsort(std::vector<int>& A);
void merge_sort(std::vector<int>& A, size_t p, size_t r);
void std_priority_queue(std::vector<int>& A);


int main() {
	vector<double> data_size;
	vector<double> n_lg_n;
	vector<double> result1, result2, result3, result4;

	for (int i = 1; i <= 100; i++) {
		data_size.push_back(i * 10000);
		n_lg_n.push_back(i * log(i)*0.0005);
	}

	time_count(std_heap_sort, data_size, result1);
	time_log("std_heap_sort", data_size, result1);

	time_count(Heapsort, data_size, result2);
	time_log("Heapsort", data_size, result2);

	time_count(merge_sort, data_size, result3);
	time_log("merge_sort", data_size, result3);

	time_count(std_priority_queue, data_size, result4);
	time_log("std_priority_queue", data_size, result4);

	plt::figure_size(600, 400);
	plt::named_plot("std_heap_sort", data_size, result1, "b-");
	plt::named_plot("Heapsort_CLRS", data_size, result2, "r--");
	plt::named_plot("merge_sort_CLRS", data_size, result3, "k-");
	plt::named_plot("std_priority_queue", data_size, result4, "m-.");
	plt::named_plot("$\\Theta(n*lg(n))$", data_size, n_lg_n, "g:");
	plt::title("Sorting Algorithm Time Complexity");
	plt::ylabel("Running Time");
	plt::xlabel("Input Size");
	plt::legend();
	plt::pause(1);
	plt::show();
}
