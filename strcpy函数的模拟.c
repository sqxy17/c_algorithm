//写函数之前，我们要清楚原函数是将一个字符串包括\0复制到另一个数组当中去
//arr1数组在复制完arr2后，之前保存的内容消失


//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* arr1,const char* arr2)
//{
//    char* str=arr1;
//    while(*arr1++=*arr2++)//判断里面的条件可以用赋值语句，判断的标准是arr1被赋予的值，或者字母转换的ascll码。
//    {
//        ;
//    }
//    return str;
//}
//
//int main(void)
//{
//    char arr1[20]="abcde";
//    char arr2[]="zxcvb";
//    my_strcpy(arr1,arr2);
//    printf("%s",arr1);
//}