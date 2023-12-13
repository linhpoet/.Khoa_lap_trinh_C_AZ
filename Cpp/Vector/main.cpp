#include <iostream>
#include <vector>

using namespace std;
void BubbleSort_Vector(vector<int>& notsort);
void BubbleSort(int arr[], int asize);
int binarySearch(int arr1[], int left, int right, int searchValue);
int main()
{
    vector<int> pho;
    pho.push_back(1);
    pho.push_back(2);
    pho.push_back(3);
    pho.push_back(4);
    pho.insert(pho.begin(),0);
    pho.erase(pho.begin() + 1);

    cout << "&pho = " << &pho << endl;

    for(int i=0; i<pho.size(); ++i)
    {
        cout << pho[i] << "\t" << &pho[i] << endl;

    }
    pho.assign(7, 100);
    for(vector<int>::iterator it = pho.begin(); it != pho.end(); it++)
    {
        cout << *it << endl;
    }

    int arr[5];
    cout << &arr <<"\t" << &arr[0];

    cout << "\n////////////// bubble sort vector /////////// \n";
    vector<int> notsort;
    notsort.push_back(5);
    notsort.push_back(3);
    notsort.push_back(2);
    notsort.push_back(1);
    notsort.push_back(1);
    notsort.push_back(3);
    notsort.push_back(4);
    notsort.push_back(5);
    for(int i=0; i<notsort.size(); ++i)
    {
        cout << notsort[i];
    }
    cout << endl;
    BubbleSort_Vector(notsort);
    for(int i=0; i<notsort.size(); ++i)
    {
        cout << notsort[i];
    }

    cout << endl;
    int arr1[5] = {4,5,3,6,1};
    BubbleSort(arr1, 5);
    for(int i=0; i<5; i++)
    {
        cout << arr1[i];
    }
    cout << endl << binarySearch(arr1, 0, 5, 2);
    return 0;
}

void swapab(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void BubbleSort(int arr[], int asize)
{
    for(int i=asize-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j] > arr[j+1])
                swapab(arr[j], arr[j+1]);
        }
    }
}

int binarySearch(int arr1[], int left, int right, int searchValue)
{
    if(right<left)
    {
        return -1;
    }
    int mid = (left+right)/2;
    if(searchValue == arr1[mid])
    {
        return mid;
    }
    else if (searchValue > arr1[mid])
    {
        binarySearch(arr1, mid+1, right, searchValue);
    }
    else
    {
        binarySearch(arr1, left, mid-1, searchValue);
    }
}

void BubbleSort_Vector(vector<int>& notsort)
{
    for(int i=notsort.size()-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(notsort[j] > notsort[j+1])
            {
                swapab(notsort[j], notsort[j+1]);
            }
        }
    }

}


