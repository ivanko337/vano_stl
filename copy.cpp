template<class InputType, class OutputType>
OutputType copy(InputType first, InputType last, OutputType d_first)
{
	while(first != last)
	{
		*d_first++ = *first++;
	}
}
