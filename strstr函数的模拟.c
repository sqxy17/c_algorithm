//原函数是查看arr1的子字符串中是否含有arr2这整个字符串
//能找到返回找到的子字符串的首元素的地址，找不到就返回NULL；
//输出的时候直到遇见\0才会停止

//
//#include<stdio.h>
//#include<assert.h>//遇见参数是地址的尽量使用断言
//
//char* my_strstr(const char* arr1,const char* arr2)
//{
//    assert(arr1 && arr2);
//    char* strarr1=arr1;
//    char* strarr2=arr2;
//    while(*arr1!='\0' || *arr2!='\0')//直到arr1\0处还没找到，那就是真没有了.如果是个未初始化的数组（也就是里面全是0），进入不了循环。k
//    {//arr2是空数组的情况下照样进入不了循环
//       while(*arr1++==*arr2++)
//       {
//           if(*arr2=='\0')
//           {
//               return strarr1;
//           }
//       }
//       arr1=++strarr1;
//       arr2=strarr2;
//    }
//    return NULL;
//}
//
//int main(void)
//{
//    char arr1[]="abcfabdeabcdesd";
//    char arr2[]="";
//    printf("%s",my_strstr(arr1,arr2));
//}