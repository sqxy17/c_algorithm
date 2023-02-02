//这是第一种实现方式
//#include<stdio.h>
//int main(void)
//{
//    int i=-1;
//    int arr[9]={1,2,3,4,5,6,7,8,9};
////    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int left=0;
//    int right=sz;
//    int num=(left+right)/2;
//    while(arr[num]!=i)
//    {
//        if(arr[num]>i)
//        {
//            right=num;
//        }
//
//        else
//        {
//            left=num;
//        }
//        num=(left+right)/2;
//        if(num==(sz-1) || num==(0))
//        {
//            break;
//        }
//    }
//    if(arr[num]==i)
//        printf("该数字的下标是%d",num);
//    else
//        printf("找不到该数字");
//}
