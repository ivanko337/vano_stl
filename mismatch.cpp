#include <iostream>

template<class InputType1, class InputType2>
std::pair<InputType1, InputType2> mismatch(InputType1 first1, InputType1 last1,
						InputType2 first2, InputType2 last2)
{
	while(first1 != last1 && *first1 == *first2)
	{
		++first1, ++first2;
	}
	std::make_pair(first1, first2);
}
