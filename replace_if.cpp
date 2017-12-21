template<class InputType, class NewValueType, class UnarePred>
void replace(InputType first, InputType last, NewValueType new_value, UnarePred pred)
{
	for(; first != last; ++first)
	{
		if(pred(*first))
			*first = new_value;
	}
}
