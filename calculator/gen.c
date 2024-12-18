// Online C compiler to run C program online
#include <stdio.h>


int main() {
    // Write C code here
   printf("hello world \n");
char gender;
char name[20];
printf("enter your gender \n");
scanf("%c",&gender);
printf("enter your name\n");
scanf("%s",name);
printf("you entered %c \nyour name is %s \n",gender,name);
if (gender =='f'){
    printf("you are a female.");
} else if(gender =='m'){
    printf("you are male");
} else{
    printf("gender unspecified");
}


    return 0;
}
