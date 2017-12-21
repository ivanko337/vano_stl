template<InputType, class Generate>
void generate(InputType first, InputType last, Generate g)
{
	for(; first != last; ++first)
		*first = g();
}
