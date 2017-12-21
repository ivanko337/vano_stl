template<class InputType, class OutputType, class ValueType>
void remove_copy_if(InputType first, InputType last, ValueType value, OutputType result)
{
	for(; first != last; ++first)
	{
		if(*first == result && *first != value)
			*result++ = *first;
	}
}
