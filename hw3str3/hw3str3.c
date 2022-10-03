/*
 * hw3str3.c
 *
 *  Created on: Oct 2, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>
int main() {
			char str[150] , temp;
			int i = 0, j;
			printf("enter the string : \n ");
			fflush(stdout);fflush(stdin);
			gets(str);
			j=strlen(str)-1;
			while(i<j)
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				i++;
				j--;

			}
			printf("the reverse string is : %s \n " , str);


}

