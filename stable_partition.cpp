#include <iostream>

template<class InputType, class BinaryPred>
void stable_partition(InputType first, InputType last, UnaryPred p)
{
	for(int i = 0; i < (last - first); ++i)
	{
		for(int j = 0; j < (last - first) - i; ++j)
		{
			if(p(*(first + j), *(first + j + 1))
			{
				std::swap((first + j), (first + j + 1));
			}
		}
	}
}
