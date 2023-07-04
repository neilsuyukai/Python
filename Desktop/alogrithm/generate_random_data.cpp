#include <vector>
#include <algorithm>

void generate_random_data(std::vector<int>& v, size_t n)
{
	static bool init_srand = false;
	v.resize(n);

	// Generate Random values 
	if (init_srand == false) {
		srand(3);
		init_srand = true;
	}
	auto f = [n]() -> int { return rand() % n; };

	// Fill up the vector 
	generate(v.begin(), v.end(), f);
}
