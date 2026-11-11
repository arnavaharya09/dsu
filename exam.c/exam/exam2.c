// #include<stdio.h>
// #include <math.h>
// int main() // ax2 + bx +c =0
// {
// int a,b,c,D;
// float x1,x2;

// printf("ENTER VALUE OF a,b&c");
// scanf("%d%d%d",&a,&b,&c);

// D=b*b-4*a*c;

// if(D>=0)
// {
//     if(D>0)
// { x1 = (-b + sqrt(D)) / (2.0 * a);
//     x2 = (-b - sqrt(D)) / (2.0 * a);
//     printf("x1 = %f\n", x1);
//     printf("x2 = %f\n", x2);
//     }
//     else
//     {
//        x1 = x2 = -b / (2.0 * a);
//     }
// }
//     else
//     {printf("the roots are imaginary\n");}
//     return 0;
// }

#include<stdio.h>
int main() {

    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch(op) 
    {
        case '+': printf("%d",a+b); break;
        case '-': printf("%d",a-b); break;
        case '*': printf("%d",a*b); break;
        case '/': printf("%d",a/b); break;
        default: printf("Invalid");
        }
        return 0;
    }