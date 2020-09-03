#include "iostream"

/*

    Question: Calculate the rank of array 'A', save it in array 'r'. 

*/


template<class T>
int* Rank(T a[], int n)
{
    int* r = new int[n];

    // Initialize array 'r'. 
    for (int i = 0; i < n; i++)
    {
        r[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        // Rank: Add up everything smaller than or equal it. 
        for (int j = 0; j < i; j++)
        {
            if (a[j] <= a[i])
                r[i]++;
            else
            {
                r[j]++;
            }    
        }
    }
    
    return r;
}

int main()
{
    int a[] = {3, 2, 6, 5, 9, 4, 7, 1, 8};
    int *result;
    result = Rank(a, 9);
    for (int i = 0; i < 9; i++)
    {
        std::cout << *(result + i) << " ";
    }
}