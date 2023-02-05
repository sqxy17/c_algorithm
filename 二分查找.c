//这是第一种实现方式
//#include<stdio.h>
//int main(void)
//{
//    int i=-1;
//    int arr[9]={1,2,3,4,5,6,7,8,9};
////    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int left=0;
//    int right=sz;
//    int num=(left+right)/2;
//    while(arr[num]!=i)
//    {
//        if(arr[num]>i)
//        {
//            right=num;
//        }
//
//        else
//        {
//            left=num;
//        }
//        num=(left+right)/2;
//        if(num==(sz-1) || num==(0))
//        {
//            break;
//        }
//    }
//    if(arr[num]==i)
//        printf("该数字的下标是%d",num);
//    else
//        printf("找不到该数字");
//}



//第二种实现方式
//#include<stdio.h>
//int main()
//{
//	int a  ; scanf("%d", &a);
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int num = sizeof arr / sizeof arr[0];
//	int left = 0;//这是左下标
//	int right = num - 1;//这是右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid+1;//当左下标多向右一位  加1和下面减一的目的相同，都是为了求端值得时候少一一直死循环  如（7+8）/2=7   一直循环
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid-1;//当右下标的时候多向左一位
//		}
//		else if (arr[mid] == a)
//		{
//			printf("找到了：%d\n，下标是:%d", arr[mid],mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到这个数字");
//	}
//	return 0;
//}
