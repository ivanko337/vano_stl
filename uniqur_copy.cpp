template<class InputType, OutputType>
OutputType uniaue_copy(InputType first, InputType last, OuyputType result)
{
	while(first != last)
	{
		if(*first == *(first + 1))
			continue;
		*(++result) = *first;
	}
	return result;
}
