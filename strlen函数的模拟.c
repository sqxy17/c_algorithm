//首先我们要清楚strlen函数是只能统计字符串里面字符的个数的。遇见\0或者0会停止统计，这个0，是字符数组中的0，不能单引号引起来的


//第一种常见的实现方式
//int my_strlen(char* arr)
//{
//    int count=0;
//    while(*arr)//其中的原理是arr这个地址解引用出来 \0的时候会直接停止         判断条件里面是字符的情况下，会将字符转换成相应的ascll值。
//    {
//        count++;
//        arr++;
//    }
//    return count;
//}



//递归的实现方式
//int my_strlen(char* arr)    //首先记住递归函数也是函数，也就是说函数也是有返回值的。
//{
//
//    if(*arr!='\0')
//        return 1+my_strlen(arr+1);      //函数的最后一个返回值肯定为0，在不是\0的情况下会返回1，一直相加
//}


//指针相减的实现方式
//int my_strlen(char* arr)
//{
//    char* arr1=arr;
//    while(*arr)
//    {
//        arr++;
//    }
//    return arr-arr1;
//}



#include<stdio.h>
int main(void)
{
    char arr[]="abcdef";
    int a=my_strlen(arr);
    printf("%d",a);
}