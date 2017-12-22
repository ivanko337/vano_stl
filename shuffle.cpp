#include <iostream>

template<class RandomIt, class UniformRandomNumberGenerator>
void shuffle(RandomIt first, RandomIt last,
		UniformRandomNumberGenerator&& g)
{
	typedef typename std::iterator_traits<RandomIt>::difference_type diff_t;
	typedef typename std::make_usigned<diff_t>::type udiff_t;
	typedef typename std::uniform_int_distribution<udiff_t> distr_t;
	typedef typename distr_t::param_type param_t;

	distr_t D;
	diff_t n = last - first;
	for(diff_t i = n - 1; i > 0; --i)
	{
		using std::swap;
		swap(first[i], first[D(g, param_t(o, i))]);
	}
}
