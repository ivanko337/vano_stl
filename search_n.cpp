template<class InputType, class ValueType, class BinarePred>
InputType search_n(InputType first, InputType last, ValueType value, BinarePred func)
{
	for(; first != last; ++first)
	{
		if(func(first, value) && func((first + 1), value))
			return first;
	}
	return NULL;
}
