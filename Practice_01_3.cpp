#include <iostream>

/* Question: Write a template function, assign value to a[start:end-1]*/


template<typename T>
void fill(T start, T numbers, T value)
{
    T a[numbers] = {0};  //Inisialize the array
    for(int i = start; i < numbers; i++)
    {
        a[i] = value;
    }
    for(int i = 0; i < numbers;i++)  //print the array
    {
        std::cout << a[i] << " ";
    }
    return;
}

int main()
{
    int numbers = 0;
    int start = 0, value = 0;
    std::cout << "Enter the length of array:" << std::endl;
    std::cin >> numbers;
    std::cout << "Enter the position that you want to start fill:" << std::endl;
    std::cin >> start;
    std::cout << "Enter the value that you want to fill:" << std::endl;
    std::cin >> value;
    fill(start, numbers, value);
    return 0;

}