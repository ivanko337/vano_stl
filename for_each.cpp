template<class InputType, class UnareFunc>
void for_each(InputType first, InputType last, UnareFunc func)
{
	for(; first != last; ++first)
		func(*first);
}
