#include <iostream>
#include <vector>
using namespace std;
void sSort(vector<int> &arr)
{
    // program for selection sort
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        std::swap(arr[min], arr[i]);
    }
}
int main()
{
    std::vector<int> arr{5, 4, 3, 2, 1};
    sSort(arr);
    for (auto &n : arr)
    {
        std::cout << n << " ";
    }
    return 0;
}