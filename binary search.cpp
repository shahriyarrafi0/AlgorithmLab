#include<iostream>

using namespace std;

int recursive_binary_search(int arr[],int L, int R, int val)
{
    int mid = (L+R)/2;
    if(R>=L)
    {
        if(arr[mid]==val)
        {
            return mid;
        }
        else if(val> arr[mid])
        {
            L = mid+1;
            recursive_binary_search(arr,L,R,val);
        }
        else if(val<arr[mid])
        {
            R = mid-1;
            recursive_binary_search(arr,L,R,val);
        }
    }
    else
    {
        return -1;
    }

}

int iterative_binary_search(int arr[],int L, int R, int val)
{
    while(R>=L)
    {
        int mid = (L+R)/2;
        if(val==arr[mid])
        {
            return mid;
        }
        else if(val<arr[mid])
        {
            R = mid-1;
        }
        else if(val> arr[mid])
        {
            L = mid+1;
        }
    }
    return -1;

}

int main()
{
    int arr[] = {22,25,28,32,37,65,74,82,84,96,99,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = recursive_binary_search(arr,0,size-1,104);
    (index ==-1)? cout<<"element not found" : cout<<"element found. index is: "<<index<<endl;
    index = iterative_binary_search(arr,0,size-1,92);
    (index ==-1)? cout<<"element not found" : cout<<"element found. index is: "<<index<<endl;

}
