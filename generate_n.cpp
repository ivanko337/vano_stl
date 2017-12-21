template<class InputType, class Size, class Generator>
void generate_n(InputType first, Size size, Generator g)
{
	for(Size i = 0; i < size; ++i)
	{
		*(first + i) = g();
	}
}
