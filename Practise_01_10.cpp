#include <iostream>

/* Question: Modify the program 'abc', if 'a', 'b', 'c' are less than 0, it throw a
    outliers which value is 1, if 'a', 'b', 'c' are equal to 0, it throw a outliers which
    value is 2, otherwise, there are no outliers*/

int abc(int a, int b, int c)
{
    if(a < 0 && b < 0 && c < 0)
    {
        throw 1;
    }
    if(a == 0 && b == 0 && c == 0)
    {
        throw 2;
    }
    return a + b * c;
}

int main()
{
    int a, b, c;
    std::cout << "Enter a, b, c:" << std::endl;
    std::cin >> a >> b >> c;
    try{
        int value = abc(a, b, c);
        std::cout << value << std::endl;
    }
    catch (int outlier)
    {
        switch (outlier)
        {
        case 1:
            std::cout << "All parameters should be > 0" << std::endl;
            std::cout << "The error:" << outlier << std::endl;
            break;
        case 2:
            std::cout << "All parameters should be > 0 and not equal to 0" << std::endl;
            std::cout << "The error:" << outlier << std::endl;
            break;
        default:
            break;
        }
    }
    return 0;
}