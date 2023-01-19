#include<stdio.h>


void bubble_sort(int* arr,int sz)  //把小的数字放在前面
{
    if(sz>=2)
    {
        int i=0;
        int j=1;
        int exchange=0;
        for(i=0;i<=sz-2;i++)
        {
            for(j=i+1;j<=sz-1;j++)
            {
                if(*(arr+i)>=*(arr+j))
                {
                    exchange=*(arr+i);
                    *(arr+i)=*(arr+j);
                    *(arr+j)=exchange;
                }
            }
        }
    }
    else
    {
        printf("数组就一个数你来排序？");
    }
}

int main(void)
{
    int arr[10]={1,4,7,3,8,6,5,3,45,23};
    int sz=sizeof(arr)/sizeof (arr[0]);
    bubble_sort(arr,10);
    for(int i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
}
