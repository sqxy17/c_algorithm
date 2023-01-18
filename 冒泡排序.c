//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,354,65,34,5,65,46,346,45,6,35,3 };
//	int i = 0, p = 0;
//	int num = sizeof arr / sizeof(arr[0]);
//	for (i = 0; i < num; i++)
//	{
//		int m = 0;
//		int x = 0;
//		for (m = 0; m < num; m++)
//		{
//			if (arr[i] < arr[m])
//			{
//				x= arr[i];
//				arr[i] = arr[m];
//				arr[m] = x;
//			}
//		}
//	}
//	for (p = 0; p < num; p++)
//	{
//		printf("%d   ", arr[p]);
//	}
//	return 0;
//}//一串数字有n个元素，需要进行n-1次比较，进行完之后能将最大值或者最小值换到最前面。