/*
 * hw3ex1.c
 *
 *  Created on: Sep 30, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

			int a[2][2] , b[2][2] , s[2][2] , i , j ;
			printf("enter the element of first array : \n");
			fflush(stdout);
			fflush(stdin);
			for( i = 0 ; i<2 ; i++)
			{
				for( j =0 ; j<2; j++)

				{   printf("enter a%d%d :" , i+1,j+1);
				fflush(stdout);
				fflush(stdin);
					scanf("%d",&a[i][j]);
				}



 	 	 	 }
			printf("enter the element of second array : \n");
			fflush(stdout);
			fflush(stdin);

			for( i = 0 ; i<2 ; i++)
						{
							for( j =0 ; j<2; j++)

							{   printf("enter b%d%d :" , i+1,j+1);
							fflush(stdout);
							fflush(stdin);
								scanf("%d",&b[i][j]);
							}



			 	 	 	 }
			for( i = 0 ; i<2 ; i++)
									{
										for( j =0 ; j<2; j++)

										{
											 s[i][j]=a[i][j]+b[i][j];
										}



						 	 	 	 }
			printf("the sum is : ");
			fflush(stdout);
			fflush(stdin);
			for( i = 0 ; i<2 ; i++)
									{
										for( j =0 ; j<2; j++)

										{
											printf(" %d\t " , s[i][j]);
											if(j==1)
											printf("\n	     ");
										}

										//if(j==1)
										//printf("\r\n");

						 	 	 	 }
}
