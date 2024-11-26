#include<stdio.h>
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[50];
  int n,i,min,max;
  printf("enter the length of the array: ");
  scanf("%d",&n);
  printf("enter the elements in an array:");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  min=a[0];
  max=a[0];
  for(i=1;i<n;i++)
  {
  
  if(min>a[i])
  {
   min=a[i];
  }
  else
  {
  	max=a[i];
  }
  } 
  printf("the maximum element in the array:%d\n",max);
  printf("the minimum element in the array:%d\n",min);
  
  	
}
