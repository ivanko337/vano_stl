template<class InputType, class OutputType, class NewValueType, class UnarePred>
OutputType replace_copy(InputType first, InputType last, OutputType result, NewValueType new_value, UnarePred pred)
{
	for(; first != last; ++first)
	{
		if(pred(*first))
		{
			*first = new_value;
			*result = *first;
			++result;
			continue;
		}
		*result = *first;
		++result;
	}
	return result;
}
