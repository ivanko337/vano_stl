template<class ForwardIt>
ForwardIt unique(ForwardIt first, ForwardIt last)
{
	if(first == last)
		return last;

	ForwardIt result = first;
	while(++first != last)
	{
		if(!(*result == *first))
			*(++result) = *first;
	}
	return ++result;
}
