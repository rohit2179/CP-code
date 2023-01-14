/*---------------------+
|    binary search     |
|         by           |
|      recurtion       |
+----------------------*/

#include <iostream>

using namespace std;

/*---------------------code started----------------------*/

auto binary_search(int a[], int key, int start, int end)
{
    int mid = (start + end) / 2;
    if (a[mid] == key)
    {
        return mid;
    }
    else if (key > a[mid])
    {
        return binary_search(a, key, mid + 1, end);
    }
    else if (key < a[mid])
    {
        return binary_search(a, key, start, mid - 1);
    }
    else
    {
        return -1;
    }
}

/*-----------------------code ended---------------------------*/
int main()
{
    int b[] = {1, 2, 4, 5, 6, 7, 8, 9};
    cout << binary_search(b, 8, 0, 7);
    return 0;
}
