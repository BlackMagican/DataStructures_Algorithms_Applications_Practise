#include <iostream>

/* Question: Write a template function 'mismatch', the return value is the minimum 
index i (0 <= i < n) which make the inequality a[i] != b[i] true*/

int n = 0;   // the length of array
void inisialize_array( int array[]);

template<class T>
T mismatch( T a[], T b[])
{
    for(int i = 0;i < n;i++)
    {
        if(a[i] != b[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    std::cout << "Enter the length of array:" << std::endl;
    std::cin >> n;
    int a[n], b[n];
    std::cout << "Inisialize the array A:" << std::endl;
    inisialize_array(a);
    std::cout << "Inisialize the array B:" << std::endl;
    inisialize_array(b);
    int index = mismatch(a, b);
    if(index >=0)
    {
        std::cout << "The minimum index is : " << index << std::endl;
    }else
    {
        std::cout << "They Match" << std::endl;
    }
    
    return 0;
}


void inisialize_array( int array[])
{
    std::cout << "Please enter a integer" << std::endl;
    for(int i = 0; i < n;i++)
    {
        std::cin >> array[i];
    }
    std::cout << "Finish" << std::endl;
}