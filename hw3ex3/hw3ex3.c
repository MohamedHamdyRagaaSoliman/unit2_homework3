/*
 * hw3ex3.c
 *
 *  Created on: Sep 30, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>
int main() {

			int en[10][10] , r ,c , i , j ;
			printf("enter the number of r and c of  matrix : \n");
			fflush(stdout);
			fflush(stdin);
			scanf("%d" "%d" , &r , &c );
			for( i = 0 ; i<r ; i++)
			{
				for( j =0 ; j<c; j++)

				{   printf("enter en%d%d :" , i+1,j+1);
				fflush(stdout);
				fflush(stdin);
					scanf("%d",&en[i][j]);
				}
			}
				 printf(" you entered  :");
				for( i = 0 ; i<r ; i++)
							{
								for( j =0 ; j<c; j++)

								{
								printf("%d" , en[i][j]);
								if(j==c-1)
									printf("\n               ");
								fflush(stdout);
								fflush(stdin);
								}

								}
				printf("the trans matrix is :\n");

				for( i = 0 ; i<c ; i++)
				{
					for( j = 0 ; j<r ; j++)
					{
						printf("%d", en[j][i]);
						if(j==r-1)
						printf("\n");
					}
				}
			}

