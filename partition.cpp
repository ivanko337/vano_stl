#include <algoritm>

template<class InputType, class UnaryPred>
InputType partoition(InputType first, InputType last, UnaryPred p)
{
	first = std::find(first, last, p);
	if(first == last) return first;

	for(InputType i = std::next(first); i != last; ++i)
	{
		if(p(*i))
		{
			std::iter_swap(i, first);
			++first
		}
	}
	return first;
}
