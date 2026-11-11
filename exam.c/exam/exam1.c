// // // // #include<stdio.h>
// // // // int main() {
// // // //     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
// // // //     int i, j;

// // // //     for(i = 0; i < 2; i++) {
// // // //         for(j = 0; j < 3; j++) {
// // // //             printf("%d\t", a[i][j]);
// // // //         }
// // // //         printf("\n");
// // // //     }

// // // //     return 0;
// // // // }

// // // #include<stdio.h>
// // // int main() // ax2 + bx +c =0
// // // {
// // // int a,b,c,D;
// // // float x1,x2;

// // // printf("ENTER VALUE OF a,b&c");
// // // scanf("%d%d%d",&a,&b,&c);

// // // D=b*b-4*a*c;

// // // if(D>=0)
// // // {
// // //     if(D>0)
// // // { x1=(-b+ sqrt(D)/2.0*a);x2=(-b-sqrt(D)/2.0*a);
// // //     printf("x1=x2=&f",x2);}
// // //     else
// // //     {
// // //         x1=x2=-b/2.0*a;
// // //     }
// // // }
// // //     else
// // //     {printf("the roots are imaginary");}
// // //     return 0;
// // // }

// // #include<stdio.h>
// // int main() {
// //     int i=1,n,fact=1;
// //     printf("Enter a number to find its factorial: ");
// //     scanf("%d",&n);
// //     while(i<=n)
// //     {
// //         fact=fact*i;
// //         i++;
// //     }
// //     printf("Factorial of %d is: %d\n",n,fact);
// //     return 0;
// // }

// #include <stdio.h>

// int main()
// {
//     int n, i;
//     int factorial = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(i = 1; i <= n; i++)
//     {
//         factorial = factorial * i;
//     }

//     printf("Factorial = %d", factorial);

//     return 0;
// } 