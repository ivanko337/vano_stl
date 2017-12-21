template<class InputType, class Size, class ValueType>
void fill_n(InputType first, InputType last, Size size, ValueType value)
{
	if(size > 0)
	{
		for(int i = 0; i < size; ++i)
			*(first + i) = value;
	}
}
