#include <iostream>

using namespace std;
void BubbleSort(int* arr, int sizeArr);
void MinSort(int* arr, int sizeArr);
void swaps(int* px, int* py);
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> *(arr + i);
    }

    for(int i=0; i<n; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout << endl;
    //BubbleSort(arr, n);
    MinSort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << *(arr + i) << "\t";
    }
    return 0;
}

void BubbleSort(int* arr, int sizeArr)
{
    for(int i=0; i<sizeArr - 1; i++)
    {
        for(int j=0; j<sizeArr - i -1; j++)
        {
            if(*(arr+j) > *(arr+j+1))
            {
                swaps((arr+j), (arr+j+1));
            }
        }

    }
}

void MinSort(int* arr, int sizeArr)
{
    for(int i=0; i<sizeArr; i++)
    {
        for(int j=i+1; j<sizeArr; j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                swaps(arr+i, arr+j);
            }
        }
    }
}

void swaps(int* px, int* py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
