#include <iostream>
#include <string>


/* Question: Write a template function, the return value is the summation of
    a[i] * b[i]*/
int n = 0;

template<typename T>
int inner_product(T array[], T b[])
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += (array[i] * b[i]);
    }
    return sum;
}

void inisialize_array( int array[])
{
    std::cout << "Please enter a integer" << std::endl;
    for(int i = 0; i < n;i++)
    {
        std::cin >> array[i];
    }
    std::cout << "Finish" << std::endl;
<<<<<<< HEAD
    return;
=======
    return；
>>>>>>> 5327fd9f8ff2186c2d0313ff1180e13417125ca2
}

int main()
{
    
    std::cout << "Enter the length of array:" << std::endl;
    std::cin >> n;
    int a[n] = {0}, b[n] = {0};
    std::cout << "Arrary A inisialize:" << std::endl;
    inisialize_array(a);
    std::cout << "Arrary B inisialize:" << std::endl;
    inisialize_array(b);
    int sum = inner_product(a, b);
    std::cout << "The summation is : " << sum << std::endl;
    return 0 ;
}
