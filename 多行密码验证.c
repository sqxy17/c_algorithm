//#include<stdio.h>
//
//int test()
//{
//    int i=0;
//    int j=0;
//    int n;
//    int countCap=0,countLow=0,countNum=0;
//    printf("要输入多少行密码：");
//    scanf("%d",&n);
//    char arr[n][100];
//
//    for(i=0;i<n;i++)
//    {
//        scanf("%s",*(arr+i));//对一维数组来说，数组名是首元素的地址，对其解引用，得到的是第一个元素的值
//        //二维数组的数组名也是首元素的地址，也就是&（第一行的一维数组），对其解引用，也就是拿到了第一行的一维数组的首元素地址
//    }
//
//    for(i=0;i<n;i++)
//    {
//        int sz=sizeof(*(arr+i))/sizeof((*(arr+i))[0]);//每行数组的元素个数
//        for(j=0;j<sz;j++)
//        {
//            if( ((*(arr+i))[j]>='A'&& (*(arr+i))[j]<='Z')   ||   ((*(arr+i))[j]>='a'&& (*(arr+i))[j]<='z')  ||  ((*(arr+i))[j]>='0'&&(*(arr+i))[j]<='0') )
//            {
//                if((*(arr+i))[j]>='A'&& (*(arr+i))[j]<='Z')
//                {
//                    countCap++;
//                }
//                if((*(arr+i))[j]>='a'&& (*(arr+i))[j]<='z')
//                {
//                    countLow++;
//                }
//                if((*(arr+i))[j]>='0'&&(*(arr+i))[j]<='0')
//                {
//                    countNum++;
//                }
//            }
//            else
//            {   if(     ((*(arr+i))[j]=='\0')      && (   (countCap>0&&countLow>0)||(countCap>0&&countNum>0)||(countLow>0&&countNum>0)   )    )
//                {
//                    printf("YES\n");
//                    break;
//                }
//                else
//                {
//                    printf("NO\n");
//                    break;
//                }
//
//            }
//        }
//    }
//    return 0;
//}
//
//int main(void)
//{
//    test();
//}
