
#include<stdio.h>
#include <stdlib.h>

//int user(int a, int b){
    //return a+b;
//}
/*int user(int i, int i1){
    if (i >= i1){
        printf("the number %d is higher than the number %d", i, i1);
    }else{
        printf("the number %d is higher than the number %d", i1, i);
    }
*/
int main()
{
    //int x,a;
//    scanf("%d", &x);
//printf("Enter the sedcead number :");
    //scanf("%d", &a);

   //user(x, a);



   //const int num = 5;
 // printf("%d\n",num);
  //num = 10;
    //printf("%d\n",num
   // double num;
     ///printf("enter a number :");
//scanf("%lf",&num);
     //printf("\n Num = %f",num);
/*
     int nul1 ;
     int nul2 ;
     printf("Enter a the first number :");
     scanf("%d",&nul1);
      printf("Enter a the 2 number :");
      scanf("%d",&nul2);
      printf("E sum of %d * %d = %d", nul1,nul2,nul1*nul2);

      */

      /*char name[20];
      char product[20];
      int prex;
      char ijba[20];
      printf("Enter the name :");
      scanf("%s",name);
      printf("Enter the product :");
      scanf("%s",product);
      printf("Enter the peix :");
      scanf("%d",&prex);
      printf("Enter the ijba :");
      scanf("%s", ijba);

      printf("wahd derya smitha %s \n", name);
      printf("mxat lso9 bax txri wahd lprodauct %s \n", product);
      printf("l9to rali bzaaf %d \n", prex);
      printf("9lt %s o rj3t fhlo ldar\n", ijba);*/

/*
      int salary;
      printf("Enter your salary");
      scanf("%d",&salary);
      printf("thers's %d 100 dh paper \n", salary/100);
       printf("thers's %d 50 dh paper more\n", salary/50);
       printf("thers's %d 20 dh paper more\n", salary/20);
       printf("thers's %d 10 dh paper more\n", salary/10);
       printf("thers's %d 5 dh paper only\n", salary /5);
         printf("thers's %d 1 dh paper only\n", salary /1);
       scanf("%d", &salary);
*/

/*int age[10] = {18,19,20,21,25,16,19,25,17,30};
           printf("%d\n", age [0]);
           age[0] = 40;
            printf("%d\n", age [0]);*/
            /*
            char name2[20];
            int age1;
            printf("what is your namz");
            scanf("%s",&name2);
            printf("\n what is your name age");
            scanf("%d",&age1);
            sayHi("Ghizlane", 22);*/




            /*int age;
            printf("Hello this is your car!\n");
            printf("Pleas Enter Your age : ");
            scanf("%d",&age);
            if(age >= 18){
                printf("your can drive");
            }else{
                printf("you cant drive!");
            }*/

           /* int user;
            char op;
            int product;
            printf("number the prodacte :");
            scanf("%d",&user);
            printf("Enter op  the prodacte :");
            scanf(" %c",&op);
            printf("number the prodacte 2 :");
            scanf("%d",&product);*/


            int number;
            printf("Enter a number: ");
            scanf("%d", &number);
            int reversedNumber = 0;
    int originalNumber = number;
    printf("%d \n",number);
    // Reverse the number
    while (number > 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }
    printf("%d \n",number);
      printf("%d\n",reversedNumber);
            if (originalNumber == reversedNumber) {
               printf("%d is a palindrome.\n",originalNumber);
            } else {
            printf("%d is not a palindrome.\n", originalNumber);
             }








            /*int age;
            char licens[5];
            char jawab [] = "yes";
            printf("Hello this is your car!\n");
            printf("Pleas Enter Your age : ");
            scanf("%d",&age);
            printf("De you have a lincens yes / no :");
            scanf("%s", licens);
            //if(age >= 18 && strcmp(licens,jawab)== 0){
               // printf("your can drive");
               if(age >=18 || strcmp(licens,"yes"  )==0){
                  printf("your can drive");
            }else{
                printf("you cant */
                       //printf("%d",5==5);
            //}


           /* int point;
            printf("how match you have");
            scanf("%d",&point);
            if(point <= 10){
                printf("your salory is = 500dh");
            }else if(point >= 10){
                printf("your salore is = 1000dh");
            }else if(point >= 20){
                printf("your salory is = 2000dh");
            }else{
                printf("youe salory is 5000dh");
            }*/



            /*int num1 , num2;
            char op;

            printf("Ennter the first number :");
            scanf("%d", &num1);
            printf("Enter the op :");
            scanf(" %c",&op);
            printf("Enter the 2 number :");
            scanf("%d",&num2);

            if(op == '+'){
                printf("the sun %d + %d = %d", num1,num2,num1+num2);
            }else if(op == '-'){
                 printf("the sun %d - %d = %d", num1,num2,num1-num2);
            }else if(op == '*'){
                printf("the mil %d * %d = %d", num1,num2,num1*num2);
            }else if(op == '/'){
                 printf("the div %d / %d = %d", num1,num2,num1/num2);
            }*/

          /*char grade = 'F';
            switch(grade) {
            case 'A':
            printf("you are very good");
            break;
            case 'B'  :
            printf("you are good");
            break;
            default :
            printf("you are not good");
            }*/

            int num1, num2;
            char op;
            printf("Enter the first number : ");
            scanf("%d", &num1);
            printf("Ener the op :");
            scanf(" %c",&op);
            printf("Enter the 2 number  :");
            scanf("%d",&num2);

             if(op == '+'){
                printf("the sum %d + %d = %d ", num1, num2, num1+num2);
             }else if(op == '-'){
                 printf("the sun %d - %d = %d", num1, num2, num1-num2);
              }else if(op == '*'){
                 printf("the sun %d * %d = %d", num1, num2, num1*num2);
             }else if(op == '/'){
                 printf("the sun %d / %d = %d", num1, num2, num1/num2);
             }
    return 0;


}



    return 0;
}


//void sayHi(char name[],int age){
    //code to do
   // printf("hi %s \nyour age is %d \n", name, age);
//}
