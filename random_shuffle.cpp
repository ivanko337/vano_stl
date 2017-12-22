#include <iostream>

template<class RandomIt, class RandomFunc>
void random_shuffle(RandomIt first, RandomIt last, RandomFunc&& r)
{
	typename std::iterator_traits<RandomIt>::difference_type i, n;
	n = last - first;
	for(i = n - 1; i > 0; --i)
	{
		using std::swap;
		swap(first[i], first[r(i + 1)]);
	}
}
