//函数定义：void* memmove(void* dest,const void* src,size_t count)
//首先得知道这个函数是干啥的
//这个函数可以将指定范围的内容，移动到指定的范围。移动后指定范围的内容不会出现差别，玩玩全全的出现在指定的范围。
//这个函数指定的空间允许有重叠的部分       -----举个例子就是将字符串的前6位，移动到从arr[1]开始的6位。 当然也可以反着来

//#include<stdio.h>
//
//void* my_memmove(void* arr1,const void* arr2,int size)
//{
//    void* str=arr1;
//    if(arr1>arr2)//将内存里前面的内容放在后面
//    {
//        while(size)//执行20次
//        {
//            *((char*)arr1+size-1)=*((char*)arr2+size-1);//一共移动了20个字节的东西，arr1算一个，也就是+0，arr1+19一共20个
//            size--;
//        }
//    }
//
//    else//arr1<=arr2
//    {
//        int count=0;
//        while(count<size)
//        {
//            *((char*)arr1+count)=*((char*)arr2+count);
//            count++;
//        }
//    }
//    return str;
//}
//
//int main(void)
//{
//    int i=0;
//    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[10]={1,2,3,4,5,6,7,8,9,10};
//    my_memmove(arr1,&arr1[2],20);
//    my_memmove(&arr2[2],arr2,20);
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",arr2[i]);
//    }
//
//}