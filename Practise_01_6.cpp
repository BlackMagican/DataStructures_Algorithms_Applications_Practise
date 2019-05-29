#include <iostream>

/* Question: Write a template function 'is_sorted', If and only if the array 
    is sorted, return true*/

// but I've got it backwards......
//by the way, I just tested 10 sets of date and it works well

//get the array's length, I don't know why that the return value = array's size - 1
template<class A>
int length(A& arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}

template <typename T>
bool is_sorted( T array[])
{
    bool whetherSorted = false;   // Maybe it is The last pair of elements of an array
    bool not_sorted = false;      
    for(int i = 0;i < length(array) + 1;i++)
    {
        for(int j = i + 1;j <= length(array) + 1;j++)  // why j <= length(array) + 1
        {                                              // because you need to compare 
            if(!whetherSorted)                         // The last pair of elements of array
            {
                if(array[i] > array[j])
                {
                    whetherSorted = true;    // if it may not a Small-To-Big array,
                    break;                   // break the loop and go to the next loop
                }                            // which is judgeing whether it from largest to smallest
            }
        }
    }
    if(whetherSorted)    // When you enter this loop, it means that the array may
    {                    // sorted from largest to smallest
        for(int i = 0;i < length(array) + 1;i++)
        {
            for ( int j = i + 1; j <= length(array) + 1; j++)
            {
                if(array[i] < array[j])   // but if there are two elements sorted from small to big
                {                         // it means this array is not been sorted
                    not_sorted = true;
                    break;
                }
            }
            
        }
    }
    return not_sorted;
}



int main()
{
    int n = 0;
    std::cout << "Enter the length of array:" << std::endl;
    std::cin >> n;
    int a[n];
    std::cout << "Inisialize the array:" << std::endl;
    for(int i = 0;i < n;i++)
    {
        std::cin >> a[i];
    }
    bool is_sort = is_sorted(a);
    if(!is_sort)
    {
        std::cout << " Is sorted" << std::endl;
    }else{
        std::cout << "Not sorted" << std::endl;
    }
    return 0;
}