#include <vector>
#include <sys/utime.h>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

using iter = std::vector<int>::iterator;
using namespace std;

// [TODO: Declare external functions here.]

void log_function(std::vector<double>& data_size, vector<double>& result)
{
	for (int i = 0; i < data_size.size(); i++) {
		result.push_back(log2(data_size[i]) * 0.35e-7);
	}
}

int main() {
	vector<double> data_size;
	for (long i = 1; i <= 100; i++) {
		data_size.push_back(i * 100000);
	}
	vector<double> result1, result2, result3;

	time_count(linear_search, data_size, result1);
	time_log("linear_search", data_size, result1);
	time_count(binary_search, data_size, result2);
	time_log("binary_search", data_size, result2);
	log_function(data_size, result3);
	time_log("log_function", data_size, result3);

	//plt::figure_size(1200, 780);
	plt::xscale("log");
	plt::yscale("log");
	plt::named_plot("linear_search", data_size, result1, "r--");
	plt::named_plot("binary_search", data_size, result2, "g-");
	plt::named_plot("log_function", data_size, result3, "b:");
	plt::title("Searching Algorithms Comparison");
	plt::legend();
	plt::pause(1);
	plt::show();
	return 0;
}
