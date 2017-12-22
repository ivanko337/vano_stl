template<class InputType, class BinaryPred>
bool is_sorted(InputType first, InputType last, BinaryPred pred)
{
	for(int i = 0; i < (last - first); ++i)
	{
		if(!pred(*(first + i), *(first + i + 1))
			return false;
	}
	return true;
}
