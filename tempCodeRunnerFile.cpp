#include<stdio.h>
#include<stdlib.h>

#include<dos.h>
#include<time.h>
int main()
{
 clock_t start,end;

 int i,n,j,temp,k;
 printf("\nEnter No of elements in the array:");
 scanf("%d",&n);
 start = clock();
 int *p=(int*) malloc(n*sizeof(int));
 printf("Enter the elements of array to be sorted:");
 for(i=0;i<n;i++)
	 {
	  *(p+i)=rand();
	 }
 printf("\nThe Elements of the unsorted array are:\n");
 for(i=0;i<n;i++)
	 {
	  printf("%d\t",*(p+i));
	 }
 printf("\n");

 for(i=0;i<n;i++)
	 {
	  for(j=0;j<n;j++)
		  {
			if(*(p+j)>*(p+j+1))
			  {
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			  }

		  }
		printf("\nArray after pass no %d:",i);
		for(k=0;k<n;k++)
		printf("  %d  ",*(p+k));
	  }
 printf("\n\nThe Elements of the sorted array are(BY BUBBLE SORT):\n");
 for(i=0;i<n;i++)
	 {
	  printf("%d\t",*(p+i));
	 }
  end = clock();
 printf("\nThe time for the event was: %f",(end-start)/CLK_TCK);
 }
