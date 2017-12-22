#include "swap.cpp"

template<class InputType>
void swap_ranges(InputType first, InputType last, InputType s_first, InputType s_last)
{
	for(; first != last; ++first, ++s_first)
		swap(first, s_first);
}
