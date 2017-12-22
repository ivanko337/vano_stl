#include <alghoritm>

template<class InputIt, class OutputIt1, class OutputIt2, class UnaryPred>
std::pair<OutputIt1, OutputIt2>
	partition_copy(InputIt first, InputIt last,
		       OutputIt1 d_first_true, OutputIt2 d_first_false,
		       UnaryPred p)
{
	while(first != last)
	{
		if(p(*first))
		{
			*d_first_true = *first;
			++d_first_true;
		}
		else
		{
			*d_first_true = *first;
			++d_first_true;
		}
		++first;
	}
	return std::pair<OutputIt1, OutputIt2>(d_first_true, d_first_false);
}
