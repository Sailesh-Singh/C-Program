/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/31/2020
Please use this for learning purpose only.

Bitwise operators can be used to perform bit level operation on variables.
Below is a list of all six bitwise operators supported in C:
Symbol Operator
& bitwise AND
| bitwise inclusive OR
^ bitwise exclusive OR (XOR)
~ bitwise not (one's complement)
<< logical left shift
>> logical right sgihift
Following program illustrates the use of all bitwise operators:*/
//Program to illustrate the use all bitwise operators
#include <stdio.h>		//Include basic input and output statements
int main(void)			//int in the main function is return type
{
unsigned int a ; /* 29 = 0001 1101 */ 			//unsigned int is variable declaration of integer type without any sign
unsigned int b ; /* 48 = 0011 0000 */
int c,n;										//variable declaration for integer type		
printf("Enter the two unsigned integers:\n");
scanf("%d%d",&a,&b);
c = a & b; /* Converts a and b into binary then perform ANDing 32 = 0001 0000 */
printf("%d & %d = %d\n", a, b, c );
c = a | b; /* Converts a and b into binary then perform ORing/* 61 = 0011 1101 */
printf("%d | %d = %d\n", a, b, c );
c = a ^ b; /*Converts a and b into binary then perform exclusive ORing 45 = 0010 1101 */
printf("%d ^ %d = %d\n", a, b, c );
c = ~a; /* -30 = 1110 0010 */
printf("~%d = %d\n\n", a, c );
printf("Enter the number by which %d should be shifted:\n",a);
scanf("%d",&n);	//scaning a integer by which integer is shifted 
c = a << n; /* 116 = 0111 0100 */
printf("%d << %d = %d\n", a,n,c );
c = a >> n; /* 7 = 0000 0111 */
printf("%d >> %d = %d\n", a,n,c );
return 0;
}
