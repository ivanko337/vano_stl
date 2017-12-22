template<class InputType>
void swap(InputType value, InputType s_value)
{
	InputType temp = *value;
	*value = *s_value;
	*s_value = temp;
}
