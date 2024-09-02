#include<iostream>

using namespace std;

template<typename T>
void swap_arr(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void sort_arr(T arr[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        int min = i;    //认定最小值的下标
        for (size_t j = i+1; j < len; j++)
        {
            //认定的最小值 比 遍历的数值小，说明arr[j]才是最小值
            if (arr[min] > arr[j])
            {
                min = j;    //更新最小值下标
            }
        }
        if (min != i)
        {
            //交换arr[min]和arr[i]
            swap_arr(arr[min], arr[i]);
        }
        
    }
    
}

template<typename T>
void print_arr(T arr[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(int argc, char const *argv[])
{
    char arr[] = "sunchenyuan";
    int len = sizeof(arr)/sizeof(char);
    sort_arr(arr, len);
    print_arr(arr, len);


    // int arr[] = {1, 8, 7, 2, 3};
    // sort_arr(arr, len);
    // print_arr(arr, len);
    return 0;
}
