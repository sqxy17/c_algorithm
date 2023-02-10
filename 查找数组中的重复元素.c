
//#include<stdio.h>
//
//int GetNumberOfK(int* data, int dataLen, int k ) {
//    // write code here
//
//    int l=0;
//    int r=dataLen-1;
//    int count1=0,count2=0;
//
//    while(l<r)//这个循环条件就很妙，如果数组中没有这个数字，那么就会停止
//    {
//        int mid=(l+r)/2;
//        if(data[mid]>k)
//        {
//            r=mid-1;
//        }
//
//        if(data[mid]<k)
//        {
//            l=mid+1;
//        }
//
//        if(data[mid]==k) //这个就是相等的情况下
//        {
//            int* data1=&data[mid+1];
//            while(data[mid]==k)
//            {
//                count1++;
//                mid--;
//            }
//            while(*data1==k)
//            {
//                count2++;
//                data1++;
//            }
//            return count1+count2;
//        }
//    }
//    if(dataLen==1 && data[0]==k)
//    {
//        return 1;
//    }
//    return 0;
//}
//
//
//int main(void)
//{
//    int arr[]={1,2,3,3,3,3};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int a=GetNumberOfK(arr,sz,3);
//    printf("%d",a);
//
//}