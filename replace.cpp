template<class InputType, class NewValueType, class OldValueType>
void replace(InputType first, InputType last, NewValueType new_value, OldValueType old_value)
{
	for(; first != last; ++first)
	{
		if(new_value == old_value)
			*first = new_value;
	}
}
