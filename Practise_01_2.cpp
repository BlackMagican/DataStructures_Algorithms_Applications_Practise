#include <iostream>

/* Question: Write a template function, the return value is the "value"'s 
    number of occurrences in the array*/

template<typename T>
T count(T value, T& n, T array[])
{
    int cnt = 0;     // the number of value
    for(int i = 0; i < n; i++)
    {
        if( array[i] == value)   // judge
        {
            cnt++;
        }
    }   
    return cnt;
}

int main()
{
    int n = 0, value = 0;
    std::cout << "Enter the length of the array:" << std::endl;
    std::cin >> n;
    int a[n];  
    std::cout << "Initialize the array: " << std::endl;
    for(int i = 0;i < n;i++)
    {
        std::cin >> a[i];   // Inisialize the array
    }
    std::cout << "Enter the number you want:" << std::endl;
    std::cin >> value;
    int cnt = count(value, n, a);
    std::cout << "The number of " << value << " is: " << cnt;
    return 0;
}