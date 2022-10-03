/*
 * hw3ex5.c
 *
 *  Created on: Oct 1, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>
int main() {
			int noe , i , arr[50]  , srce;
			printf("enter the number of element : ");
			fflush(stdout);fflush(stdin);
			scanf("%d" , &noe);
			for(i=0;i<noe;i++)
			{
				scanf("%d" , &arr[i]);
			}
			for(i=0;i<noe;i++)
						{
							printf("%d  " , arr[i]);
						}
			printf("enter the element to be searched \n");
			fflush(stdout);fflush(stdin);
			scanf("%d",&srce);
			for(i=0;i<noe;i++)
			{
			if(arr[i] == srce)
				printf(" number found at the location = %d" , i+1);
			}


}

