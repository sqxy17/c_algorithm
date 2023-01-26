//字符串追加函数
//将arr2的字符串追加在arr1的后面，并且arr1字符串的\0被替换成arr2字符串的首字母

//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* arr1,const char* arr2)
//{
//    assert(arr1!=NULL && arr2!=NULL);
//    char* str=arr1;
//    while(*arr1)//也就是说arr1字符串一定要有\0结尾
//    {
//        arr1++;
//    }
//    while(*arr1++=*arr2++)
//    {
//        ;
//    }
//    return str;
//}
//
//int main(void)
//{
//    char arr1[20]={"hello "};
//    char arr2[]={"word"};
//    printf("%s",my_strcat(arr1,arr2));
//}