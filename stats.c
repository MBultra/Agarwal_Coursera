/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Hardik Agarwal
 * @date  August 23,2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
void print_array(unsigned char *a,int n)
{
        printf("Elements of Array are as follows\n");
        for(int i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");
}
float find_mean(unsigned char *a,int n)
{
	float sum=0.0f;
	for(int i=0;i<n;i++)
        {
             sum=sum+a[i];
        }
	return sum/n;
}
unsigned char * sorted_array(unsigned char *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
		  if(a[j]>a[j+1])
		  {
		    int t=a[j];
		    a[j]=a[j+1];
		    a[j+1]=t;
		  }

		}
	}
	return a;
}
unsigned char * sort_array(unsigned char *a,int n)
{
        for(int i=0;i<n-1;i++)
        {
                for(int j=0;j<n-i-1;j++)
                {
                  if(a[j]<a[j+1])
                  {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                  }

                }
        }
        return a;
}
float find_median(unsigned char *a,int n)
{
	return ((float)a[n/2]+(float)a[(n+2)/2])/2;
}
int find_mode(unsigned char *a,int n)
{
	int count =1,index=0,max=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
		  if(max<count)
		  {
		    max=count;
		    index=i;
		  }
		  count=1;
		}
		else
		{
		  count++;
		}
	}
	return a[index];	
}
unsigned char find_maximum(unsigned char *a,int n)
{
	return a[n-1];
}
unsigned char find_minimum(unsigned char *a,int n)
{
        return a[0];
}
void print_statistics(unsigned char *a,int n)
{
printf("Maximum=%d\n",find_maximum(a,n));
printf("Minimum=%d\n",find_minimum(a,n));
printf("Mean=%f\n",find_mean(a,n));
printf("Median=%f\n",find_median(a,n));
printf("Mode=%d\n",find_mode(a,n));
}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 print_array(sort_array(test,SIZE),SIZE);
 print_statistics(sorted_array(test,SIZE),SIZE);
}

/* Add other Implementation File Code Here */
