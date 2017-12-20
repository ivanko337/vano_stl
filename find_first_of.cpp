#include <iostream>

template<class InputIt, class ForwardIt>
InputIt find_first_of(InputIt first, InputIt last,
			ForwardIt s_first, ForwardIt s_last)
{
	for(; first != last; ++first)
	{
		for(ForwardIt it = s_first; it != s_last; ++it)
		{
			if(*first == *it)
				return first;
		}
	}
	return last;
}
