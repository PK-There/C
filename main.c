#include <stdio.h>

int main() {
    int a;
    int z; 
    do {
     printf("1. Addition \n");
     printf("2. Subtraction \n");
     printf("3. Division \n");
     printf("4. Multiplication \n");
     printf("Choose which operation you want to do :");
     scanf("%d", &a);
    if(a==1){
        int b,c;
        printf("Enter How Many Numbers to be add : ");
        scanf("%d", &b);
        int e = 0;
        for(int i=0; i<b; i++){
             printf("Enter number %d: ", i + 1);
             scanf("%d", &c);
             e += c;
        }   printf("The sum is :- %d \n",e);
    }
    else if(a==2){
         int f,g;
         printf("Enter How Many Numbers to be Subtract : ");
        scanf("%d", &f);
        int h = 0;
        for(int i=0; i<f; i++){
             printf("Enter number %d: ", i + 1);
             scanf("%d", &g);
             h -= g;
        }   printf("The subtraction is :- %d \n",h);
    }
     else if(a==3){
          int m,n,o;
         printf("Enter first number :");
         scanf("%d", &m);
         printf("Enter first number :");
         scanf("%d", &n);
         o = m / n;
         printf("The division is : %d",o);
    }
    else if(a==4){
          int j,k;
         printf("Enter How Many Numbers to be Multiply : ");
        scanf("%d", &j);
        int l = 1;
        for(int i=0; i<j; i++){
             printf("Enter number %d: ", i + 1);
             scanf("%d", &k);
             l *= k;
        }   printf("The Multiplication is :- %d \n",l);
    }
    else {
    printf("Invalid input");
    } 
    printf("Do you want to continue?\n");
    printf("Enter 1 to continue\n");
    printf("Enter 0 to exit\n");
    scanf("%d", &z);
    }
    while(z==1);
    return 0;
}
