template<class InputType1, class InputType2>
int count(InputType first1, InputType1 last, InputType2 value)
{
	int schetchik = 0;
	for(; first != last; ++first)
	{
		if(*first == *value)
			++schetchik;
	}
	return schetchik;
}
