template<class InputIt, class UnaryPredicate>
bool is_partitioned(InputIt first, InputIt last, UnaryPredicate p)
{
	for(; first != last; ++first)
		if(!p(*first))
			break;
	for(; first != last; ++first)
		if(p(*first))
			return false;
	return true;
}
