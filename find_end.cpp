#include <iostream>

using namespace std;

template<class ForwardIt1, class ForwardIt2>
ForwardIt1 find_end(ForwardIt1 first, ForwardIt1 last,
		    ForwardIt2 s_first, ForwardIt2 s_last)
{
	if(s_first == s_last)
		return last;
	ForwardIt1 result = last;
	while(1)
	{
		ForwardIt1 new_result = std::search(first, last, s_first, s_last);
		if(new_result == last)
			return result;
		else
		{
			result = new_result;
			first = result;
			++first;
		}
	}
	return result;
}
