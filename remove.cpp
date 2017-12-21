template<class ForwardIt, class T>
ForwardIt remove(ForwardIt first, ForwardIt last,
                       const T& value)
{
    ForwardIt result = first;
    for (; first != last; ++first) {
        if (!(*first == value)) {
            *result++ = *first;
        }
    }
    return result;
}
