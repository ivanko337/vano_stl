template<class InputType, class UnarePred>
bool find_if(InputType first, InputType last, UnarePred func)
{
	for(; first != last; ++first)
	{
		if(!func(*first))
			return true;
	}
	return false;
}
