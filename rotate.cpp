#include "swap.cpp"

template<class InputType>
void rotate(InputType first, InputType n_first, InputType last)
{
	InputType next = n_first;
	while(first != next)
	{
		swap(first++, next++);
		if(next == last)
		{
			next = n_first;
		}
		else if(first == n_first)
		{
			n_first = next;
		}
	}
}
