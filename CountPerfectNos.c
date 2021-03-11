/*
 
 Return the count of perfect numbers from N numbers.
 
 */
 
 
#include<stdio.h>
#include<stdlib.h>

int CountPerfectNos(int iSize,int arr[])
{
  int iCnt = 0;
  int iNo = 0;
  int i = 0;
  int iSum = 0;
  int iPerfect = 0;
  
    if(arr == NULL)
    {
        return -1;
    }
    if(iSize <= 0)
    {
        return -1;
    }
	
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    iNo = arr[iCnt];
	iSum = 0;
	
	for(i = 1; i < iNo; i++)
	{
	    if((iNo % i) == 0) 
		{
		   iSum = iSum + i;
		}
	}
	
	if(iSum == iNo)
	{
	  iPerfect++;
	}
  
  }
  return iPerfect;
}

 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iCnt = 0;
   int iRet = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
  iRet = CountPerfectNos(iNo,ptr);
  
  printf("No of perfect no's are : %d",iRet);
   
      free(ptr);
 return 0;
 }
 
 /*
 
 
 Enter The N Numbers
5
Enter the values
6
13
14
15
16
values are
6
13
14
15
16
No of perfect no's are : 1
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\CountPerfectNos>myexe
Enter The N Numbers
4
Enter the values
88
77
66
54
values are
88
77
66
54
No of perfect no's are : 0

*/