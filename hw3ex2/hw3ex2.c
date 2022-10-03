/*
 * hw3ex2.c
 *
 *  Created on: Sep 30, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

			int num  , i ;
			float sum=0 , avg=0;
			printf("enter number of data : \n");
			fflush(stdout);
			fflush(stdin);
			scanf("%d", &num);
			float arr[100];
			for(i=0;i<num;i++)
			{
				printf("enter number : ");
				fflush(stdout);
				fflush(stdin);
				scanf("%f" , &arr[i]);
			}
			for(i=0; i<num ; i++)
			{
				sum+=arr[i];

			}
			avg=sum/num;
			printf("%f",avg);
			fflush(stdout);
			fflush(stdin);
           }

