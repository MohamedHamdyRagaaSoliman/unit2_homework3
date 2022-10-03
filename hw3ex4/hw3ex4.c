/*
 * hw3ex4.c
 *
 *  Created on: Oct 1, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>
int main() {
			int noe , i , arr[50] , loc , inse;
			printf("enter the number of element : \n");
			fflush(stdout);fflush(stdin);
			scanf("%d" , &noe);
			printf("enter the elements of araay : \n");
			fflush(stdout);fflush(stdin);
			for( i=0;i<noe;i++)
			{
				scanf("%d" , &arr[i]);
			}
			for( i=0;i<noe;i++)
			{
				printf("%d \n" , arr[i]);
				fflush(stdout);fflush(stdin);
			}

			printf("enter the elemet to be insert : \n ");
			fflush(stdout);fflush(stdin);
			scanf("%d" , &inse);
			printf("enter the location : \n");
			fflush(stdout);fflush(stdin);
			scanf("%d" , &loc);
			for(i=noe;i>=loc;i--)
			{
				arr[i]=arr[i-1];
			}

			noe++;
			arr[loc-1]=inse;
			for( i=0;i<noe;i++)
						{
							printf("%d \n " , arr[i]);
							fflush(stdout);fflush(stdin);
						}















}

