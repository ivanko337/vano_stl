template<class InputType, class UnarePred>
int count_if(InputType first, InputType last, UnarePred func)
{
	int schetchik = 0;
	for(; first != last; ++first)
	{
		if(func(*first))
			++schetchik;
	}
	return schetchik;
}
