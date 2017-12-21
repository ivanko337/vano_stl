template<class ForwardIt, class UnaryPredicate>
ForwardIt remove_if(ForwardIt first, ForwardIt last,
                          UnaryPredicate p)
{
    ForwardIt result = first;
    for (; first != last; ++first) {
        if (!p(*first)) {
            *result++ = *first;
        }
    }
    return result;
}
