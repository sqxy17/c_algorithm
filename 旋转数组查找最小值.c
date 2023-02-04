#include<stdio.h>

int search(int* arr, int len ) {
    if(len == 0)
    {
        return 0;
    }
    int left = 0 ;
    int right = len-1;
    while(left < right)
    {

        int mid = (left + right) / 2;
        if(arr[mid] > arr[right])//最小值在右侧
        {
            left = mid+1;
        }
        else if(arr[mid] < arr[right])//最小值在左侧
        {
            right = mid;
        }
        else//相等，需要调整
        {
            right--;
        }
    }
    return arr[left];
}
int main(void)
{
    int arr[6]={3,4,5,1,2,3};
    printf("%d",search(arr,6));
}

