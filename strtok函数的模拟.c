//详细解释见字符串函数
//小提示，这个函数会改变arr1数组里面的字符

//#include<stdio.h>
//
//static char* str=NULL;
//char* my_strtok(char* arr1, char* arr2)
//{
//    if(arr1==NULL && str==NULL)//传入的是NULL，并且str全局变量也没保存过地址就返回NULL
//    {
//        return NULL;
//    }
//
//    char* str2=arr2;
//    if(arr1!=NULL)
//    {
//        char* str1=arr1;//arr1不是NULL情况下才能保存起始位置地址
//        while(*arr1)//碰见\0或者下面的条件碰见切割符就会停止
//        {
//            arr2=str2;//每一个arr1的字符都要判断是不是在切割符当中存在
//            while(*arr2)//切割符数组结束还没找到就说明当前的字符不是
//            {
//                if(*arr1==*arr2)//碰见切割符
//                {
//                    *arr1='\0';//此处的切割符变为\0
//                    str=++arr1;//在调用这个函数就从改变\0后的这个位置开始查找了,str是全局变量
//                    return str1;//返回的是保存的起始位置
//                }
//                arr2++;
//            }
//            arr1++;
//        }
//        return str1;//这个是在arr1数组中都找过了，还是没找到切割符就会返回最开始的位置
//    }
//
//
//    if(arr1==NULL)
//    {
//        char* str1=str;//此处的str1用来存放移动的字符
//        char* str3=str;//此处的str3是用来存放该子字符串的起始位置
//        while(*str1)
//        {
//            arr2=str2;
//            while(*arr2)
//            {
//                if(*str1==*arr2)
//                {
//                    *str1='\0';
//                    str=++str1;
//                    return str3;
//                }
//                arr2++;
//            }
//            str1++;
//        }
//        return str3;//如果在后续的字符串直至\0都没有找到，那么就返回开始查询的首地址
//    }
//
//}
//
//int main(void)
//{
//    char arr1[]="abc.kgj,shuh@asd";
//    char arr2[]="@.,";
//
//    char* p1=my_strtok(arr1,arr2);
//    char* p2=my_strtok(NULL,arr2);
//    char* p3=my_strtok(NULL,arr2);
//
//    printf("%s",p1);
//    printf("%s",p2);
//    printf("%s",p3);
//    return 0;
//}
