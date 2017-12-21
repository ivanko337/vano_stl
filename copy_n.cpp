template<class InputType, class Size, class OutputType>
OutputType copy_n(InputType first, InputType last, Size size, OutputType output)
{
	if(size > 0)
	{
		for(; (last - first) != size; ++first, ++output)
		{
			*output = *first;
		}
	}
}
