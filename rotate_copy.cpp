#include "copy"

template<class InputType, class OutputType>
OutputType rotate_copy(InputType first, InputType n_first,
				InputType last, OutputType d_first)
{
	d_first = copy(n_first, last, d_first);
	return copy(first, n_first, d_first);
}
