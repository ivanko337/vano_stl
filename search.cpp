template<class InputTupe1, class InputType2, class BinarePred>
InputTupe1 search(InputTupe1 first, InputTupe1 last, InputType2 s_first, InputType2 s_last, BinarePred func)
{
	for(; ; ++first)
	{
		InputType1 it = first;
		for(InputType2 s_it = s_first; ; ++it, ++s_it)
		{
			if(s_it == s_last)
				return first;
			if(it == last)
				return last;
			if(!(*it == *s_it))
				break;
		}
	}
}
