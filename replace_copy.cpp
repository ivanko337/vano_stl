template<class InputType, class OutputType, class NewValueType, class OldValueType>
OutputType replace_copy(InputType first, InputType last, OutputType result, NewValueType new_value, OldValueType old_value)
{
	for(; first != last; ++first)
	{
		if(*first == old_value)
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
