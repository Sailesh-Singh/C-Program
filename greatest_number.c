# include <stdio.h>
void main()
{
    int a, b, c, Greatest;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c) ;
    Greatest = a>b ? (a>c ? a : c) : (b>c ? b : c) ;
    printf("\nThe greatest number is : %d", Greatest);
}
