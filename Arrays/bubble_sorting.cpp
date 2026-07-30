#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,1,3,2};
    for(int i = 0; i<3 ; i++)
    {
        for(int j=0;j<3-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
            cout<<arr[j]<<" ";
        }
        return 0;
    }
}
