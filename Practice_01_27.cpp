#include "iostream"


template<class T>
T MyAccumulate(T list[], int end, T initValue)
{
    T theSum = initValue;
    for (int i = 0; i < end; i++)
    {
        theSum += list[i];
    }
    return theSum;
}

int main()
{
    int numbers[] = {1, 2, 3};
    std::cout << MyAccumulate(numbers, 3, 0);
}