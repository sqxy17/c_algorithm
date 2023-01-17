//首先我们要清楚strlen函数是只能统计字符串里面字符的个数的。遇见\0或者0会停止统计，这个0，是字符数组中的0，不能单引号引起来的
//int my_strlen(char *p)
//{
//    int count=0;
//    while(*p!='\0')
//    {
//        count++;
//        p+=1;
//    }
//    return count;
//}
//
//#include<stdio.h>
//int main(void)
//{
//    char arr[5]={1,2,3,0,5};
//    char arr1[5]={"abcde"};       //这种情况并没有将\0放进数组中，所以输出的是随机值
//    char arr2[5]={"abcd"};
//    printf("%d\n%d\n%d\n%d\n", my_strlen(arr),my_strlen(arr1), my_strlen(arr2), my_strlen("abcde"));
//}