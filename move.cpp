#include <iostream>

template<class InputType, class OutputType>
OutputType move(InputType first, InputType last, OutputType result)
{
	for(; first != last; ++first, ++result)
	{
		*result = std::move(*first);
	}
	return result;
}
