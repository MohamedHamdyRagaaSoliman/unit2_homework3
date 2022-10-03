/*
 * hw3str1.c
 *
 *  Created on: Oct 2, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>
int main() {

				char c[100] , ch ;
				int i , cnt = 0;
				printf("enter a string : \n");
				fflush(stdout);fflush(stdin);
				gets(c);
				printf("enter a charcter to find frequency : \n ");
				fflush(stdout);fflush(stdin);
				scanf("%c" , &ch);
				for(i=0 ; c[i]!='\0' ; i++)
				{
					if(ch==c[i])
					{
						cnt++;
					}

				}

					printf("frequncy of %c = %d " , ch , cnt);
					fflush(stdout);fflush(stdin);
			}

