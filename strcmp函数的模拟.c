//我们要清楚这个原函数知识用于比较两个字符串是否相同，并不具有比较两个字符串长短的功能


//#include<stdio.h>
//
//int my_strcmp(const char* arr1,const char* arr2)
//{
//    while(*arr1==*arr2)//
//    {
//        if(*arr1=='\0')
//        {
//            return 0;
//        }
//        arr1++;
//        arr2++;
//    }
//    return *arr1-*arr2;
//}
//
//int main(void)
//{
//    char arr1[]="abcde";
//    char arr2[]="abcdeg";
//    printf("%d",my_strcmp(arr1,arr2));
//}