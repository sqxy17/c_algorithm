//#include<stdio.h>
//int test(int year)
//{
//    if((year%4==0&&year%100!=0) || (year%400==0))
//        return 1;//闰年
//    else
//        return 0;//平年
//}
//int main(void)
//{
//    int year;
//    int month;
//    int day;
//    int i=0;
//    int add=0;
//    int year1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
//    int year0[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//    scanf("%d%d%d",&year,&month,&day);
//    if(test(year)==1)
//    {
//        for(i=0;i<=month-2;i++)
//        {
//            add+=year1[i];
//        }
//        printf("%d天",add+day);
//    }
//    else
//    {
//        for(i=0;i<month-2;i++)
//        {
//            add+=year0[i];
//        }
//        printf("%d",add+day);
//    }
//}