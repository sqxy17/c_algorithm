//函数定义：void* memset(void* dest,int c,size_t num)
//这个函数主要的目的就是在目标空间防止num个字节的符号c       ----int的数字也行，
//记住放的顺序，目标空间  符号  字节数


//#include<stdio.h>
//
//void* my_memset(void* dest,char c,int num)
//{
//    void* str=dest;
//    while(num)
//    {
//        *(char*)dest++=c;
//        num--;
//    }
//    return str;
//}
//
//int main(void)
//{
//    char arr[10]={0};
//
//    my_memset(arr,'l',9);
//
//    printf("%s",arr);
//}