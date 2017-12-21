template<class InputType, class ValueType>
void fill(InputType first, InputType last, ValueType value)
{
	for(; first != last; ++first)
		*first = *value;
}
