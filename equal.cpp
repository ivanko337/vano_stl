template<class InputType1, class InputType2>
bool equal(InputType1 first1, InputType1 last2, InputType2 first2, InputType2 last2)
{
	if((last1 - first1) != (last2 - first2))
		return false;
	for(; first1 != last1; ++first1, ++first2)
	{
		if(*first1 != *first2)
			return false;
	}
	return true;
}
