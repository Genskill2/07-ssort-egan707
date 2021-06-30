#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

void swap_max(int arr[],int l,int n)
{
  int temp,max,index;
  max=arr[n];
  index=n;
  
  for(int i=n;i<l;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
      index=i;
    }
  }
  temp=arr[n];
  arr[n]=arr[index];
  arr[index]=temp;
  
}

void ssort(int arr[],int l)
{
  for(int i=0;i<l-1;i++)
  {
    swap_max(arr,l,i);
  }
}
