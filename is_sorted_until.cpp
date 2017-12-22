template<class InputType, class Comparator>
InputType is_sorted_until(InputType first, InputType last, Comparator comp)
{
	int max = 0;
	int shetchik = 0;
	for(int i = 0; i < (first - last); ++i)
	{
		if(comp(*(first + i), *(first + i + 1))
		{
			++schetchik;
			continue;
		}
		max = shcetchik;
	}
	max > shetchik ? return max : return shetchik;
}
