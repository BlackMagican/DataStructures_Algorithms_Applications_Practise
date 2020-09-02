#include <iostream>

/* Question: Write a template function 'iota', it makes a[i] = value + i, 
    0 <= i < n */

template<typename T>
void iota(T i, T array[])
{
    arrary[i] += i;     //a[i] = value + i
    std::cout << "The a[" << i <<"] is " << array[i] << std::endl;
    return;
}


int main()
{
    int n = 0, i = 0;
    std::cout << "Enter the length of array:" << std::endl;
    std::cin >> n;
    int a[n] = {0};
    for(int i = 0;i < n;i++)     // inisialize arrary
    {
        std::cin >> a[i];   
    }
    do{
        std::cout << "Enter 'i' :" << std::endl;
        std::cin >> i;
    }while( i >= n || i < 0);   // 0 <= i < n
    iota(i, a);
    return 0;
}