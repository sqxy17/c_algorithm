//原函数是将arr2的指定的字节复制到arr1当中去         -----arr1要确保有足够的空间来保存指定的字节
//并且请注意，这个字符串复制函数会将指定的前n个字节复制到arr1当中去，指定的字节包含\0，就把\0复制到arr1中，如果没有就不复制
//指定的字节长短小于原arr1的\0，那么就会顺带着将原arr1的内容直至\0全部输出
//如果指定的字节不包含\0,并且刚好将arr1中的\0覆盖，那么输出的时候就可能会出现错误            ----也就是会出现内存溢出的情况
//还有一种情况，arr2中只有4个字符，但却指定了6个，会将多出来的补成\0

//#include<stdio.h>
//
//char* my_strncpy(char* arr1,const char* arr2,int number)
//{
//    char* str=arr1;
//    int count=0;
//    while(count<number)
//    {
//        if(*arr2!='\0')
//        {
//            *arr1++=*arr2++;
//            count++;
//        }
//        else
//        {
//            *arr1++='\0';
//            count++;
//        }
//    }
//    return str;
//}
//
//int main(void)
//{
//    char arr1[10]="abcxxxxx";
//    char arr2[]="c";
//    printf("%s",my_strncpy(arr1,arr2,4));
//    return 0;
//}