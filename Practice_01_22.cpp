#include <iostream>
#include "math.h"

/*
    Question: Finish Ackermann's Function. 
    
    Ackermann's Function:

              |  2^j                    i = 1 and j >= 1
    A(i, j) = |  A(i - 1, 2)            i >= 2 and j = 1
              |  A(i - 1, A(i, j - 1))  i, j >= 2

*/

float AckermannFunc(float i, float j)
{
    if (i < 1 || j < 1)
    {
        return -1.0;
    }

    if (i == 1 && j >= 1)
        return pow(2, j);
    else if (i >= 2 && j == 1)
    {
        return AckermannFunc(i - 1, 2);
    }
    else if (i >= 2 && j >= 2)
    {
        return AckermannFunc(i - 1, AckermannFunc(i, j - 1));
    }
}

int main()
{
    float i = 0, j = 0;
    std::cout << "输入 i 和 j ：" << std::endl;
    std::cin >> i >> j;

    std::cout << "计算后的结果为：" << std::endl;
    float result = AckermannFunc(i, j);
    if (result != -1)
        std::cout << result << std::endl;
    else
    {
        std::cout << "输入数据有误" << std::endl;
    }
    
    return 0;
}