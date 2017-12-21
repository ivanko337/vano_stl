template<class InputType, class OutputType, class UnarePred>
OutputType copy_if(InputType first, InputType last, OutputType d_first, UnarePred func)
{
	while(first != last)
	{
		if(func(*first))
			*d_first++ = *first;
	}
	return d_first;
}
