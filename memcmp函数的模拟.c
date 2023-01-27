//函数定义：int memcmp(const void* arr1,const void* arr2,size_t num)
//具体的实现方式和strncmp非常类似

//#include<stdio.h>
//
//int my_memcmp(void* arr1,void* arr2,int size)
//{
//    while(*(char*)arr1==*(char*)arr2 && size>0)
//    {
//        (char*)arr1++;
//        (char*)arr2++;
//        size--;
//    }
//    if(size==0)
//    {
//        return 0;
//    }
//    else
//    {
//        return *(char*)arr1-*(char*)arr2;
//    }
//}
//
//int main(void)
//{
//    char arr1[]={"abcde"};
//    char arr2[]={"abcdef"};
//
//    printf("%d",my_memcmp(arr1,arr2,6));
//}