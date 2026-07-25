#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {2,3,7,-11,8,13,12};
    for(int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 1|| arr[i] % 2 == -1){
cout << arr[i] << " ";
        }
    }
    return 0;
}
