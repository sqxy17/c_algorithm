//原函数在arr1的\0处开始追加，并且不管你追加的字符中包含不包含\0，都会追加完毕后添加\0
//如果指定的n超过了arr2的字符个数，那么将在追加完arr2\0之后，停止追加，并且不再添加末尾的\0

//#include<stdio.h>
//
//char* my_strncat(char* arr1,const char* arr2,int number)
//{
//    int count=0;
//    char* str=arr1;
//    while(*arr1!='\0')
//    {
//        arr1++;
//    }
//    while(count<number)
//    {
//        if(*arr2!='\0')
//        {
//            *arr1++=*arr2++;
//            count++;
//        }
//        else
//        {
//            break;
//            return str;
//        }
//    }
//    *arr1='\0';
//    return str;
//}
//
//int main(void)
//{
//    char arr1[20]={"abcdex"};
//    char arr2[]="abc";
//    printf("%s",my_strncat(arr1,arr2,4));
//    return 0;
//}






