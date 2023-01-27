//原函数的标准定义： void* memcpy(void* des,const void* sou,size_t num);
//所以我们在实现的时候要注意如何操作空函数


//#include<stdio.h>
//
//void* my_memcpy(void* p1,const void* p2,int size)
//{
//    int count=0;
//    void* str=p1;
//    while(count<size-1)
//    {
//        *(char*)p1++=*(char*)p2++;
//        count++;
//    }
//    return str;
//}
//typedef struct student
//{
//    int age;
//    char name[20];
//    int number;
//}stu;
//int main(void)
//{
//    stu s1={15,"zhangsan",1234567};
//    stu s2={14,"lisi",1234568};
//
//    my_memcpy(&s1,&s2,sizeof(s2));
//    printf("%s",s1.name);
//    return 0;
//}