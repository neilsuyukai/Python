#include <vector>
#include <algorithm>
void generate_sequential_data(std::vector<int>& v, size_t n)
{
	int i = 0;
	v.resize(n);

	// Fill up the vector 
	for (auto it = v.begin(); it != v.end(); ++it)
		*it = (++i);
}
