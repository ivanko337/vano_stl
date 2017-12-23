template<class InputType>
void sort(InputType *first, InputType *last)
{
    InputType temp;
    int item;
    for (int i = 1; i < (last - first); ++i)
    {
        temp = *(first + i);
        item = i - 1;
        while(item >= 0 && *(first + item) > temp)
        {
            *(first + item + 1) = *(first + item);
            *(first + item) = temp;
            item--;
        }
    }
}
// ОНА РАБОТАЕТ
// И Я САМ ЕЁ НАПИСАЛ
// АААААААААААААААААААААА
