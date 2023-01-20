//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1,const void* e2) //每种不同的类型，都要设计不同的函数进行比较
//{
//    return *((int*)e1)-*((int*)e2);
//}
//
//void swap(char* buf1,char* buf2,int num)
//{
//    int i=0;
//    for(i=0;i<num;i++)
//    {
//        char tmp=*(buf1);
//        *(buf1)=*(buf2);
//        *(buf2)=tmp;
//        buf1++;
//        buf2++;
//    }
//}
//
//void my_qsort(void* arr,int sz,int alone,int(*compare)(const void* e1,const void* e2))
//{
//    int i=0;
//    int j=0;
//    for(i=0;i<=sz-2;i++)
//    {
//        for(j=i+1;j<=sz-1;j++)
//        {
//            if(compare((char*)arr+i*alone,(char*)arr+j*alone)>0)//数组小值的放在数组前面,
//
//            {
//                swap((char*)arr+i*alone,(char*)arr+j*alone,alone);
//            }
//        }
//    }
//}
//
//
//int main(void)
//{
//    int arr[6]={1,3,2,7,8,4};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    printf("数组位数%d\n",sz);
//    my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
//    for(int i=0;i<6;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//    qsort(arr,sz,sizeof(arr[0]),cmp_int);
//    for(int i=0;i<6;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}









