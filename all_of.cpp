template<class InputType, class UnarePred>
bool all_of(InputType first, InputType last, UnarePred func)
{
	for(; first != last; ++first)
	{
		if(!func(*func))
			return false;
	}
	return true;
}
