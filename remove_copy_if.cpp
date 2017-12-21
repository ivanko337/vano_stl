template<class InputType, class OutputType, class UnarePred>
void remove_copy_if(InputType first, InputType last, OutputType result, UnarePred func)
{
	for(; first != last; ++first)
	{
		if(!func(*first))
			*result++ = *first;
	}
}
