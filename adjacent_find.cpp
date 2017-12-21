template<class InputType, class BinarePred>
InputType adjacent_find(InputType first, InputType last, BinarePred func)
{
	for(; first != last; ++first)
	{
		if(func(*first, *(first + 1)))
			return first;
	}
	return NULL;
}
