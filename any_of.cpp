template<class InputType, class UnarePred>
bool any_of(InputType fist, InputType last, UnarePred func)
{
	for(; first != last; ++first)
	{
		if(func(*first))
			return true;
	}
	return false;
}
