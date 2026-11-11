// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // // //     int a, b, sum;
// // // //     printf("Enter two numbers: ");
// // // //     scanf("%d", &a);
// // // //     scanf("%d", &b);
// // // //     sum =a+b;
// // // //     printf("Sum=%d", sum);
// // // //     return 0;
// // // // }


// // // #include<stdio.h>
// // // int main() {
// // // int i;
// // // for (i=1; i<=5; i++) {
// // // if(i == 3) {
// // // break;
// // // }
// // // printf("%d ", i);
// // // }
// // // return 0; }

// // #include<stdio.h>
// // int main() {
// // int x = 4;
// // switch(x) {
// // case 1: printf("One");
// // break;
// // case 2: printf("Two");
// // break;
// // default: printf("Other");
// // }
// // return 0; }


// #include<stdio.h>
// int main() {
//     int radius, circumference;
//     printf("Enter the radius of the circle: ");
//     scanf("%d", &radius);
//     circumference = 2 * 3.14 * radius;
//     printf("Circumference of the circle is: %d", circumference);
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