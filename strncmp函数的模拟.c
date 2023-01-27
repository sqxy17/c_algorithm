//这个函数就行对简单一些，只需要实现指定的字符串长度的对比就行

//#include<stdio.h>
//
//int my_strncmp(char* arr1,char* arr2,int number)
//{
//    int count=0;
//    if(number<1)
//    {
//        return 0;
//    }
//    while(*arr1==*arr2)//能在循环体内肯定是相同的字符进行比较的
//    {
//        count++;
//        if(count>=number || *arr1=='\0')
//        {
//            return 0;
//        }
//        arr1++;
//        arr2++;
//    }
//    return *arr1-*arr2;
//}
//
//
//int main(void)
//{
//    char arr1[]={"abcde"};
//    char arr2[]={"abcde"};
//
//    printf("%d",my_strncmp(arr1,arr2,6));
//}