// #include<stdio.h>

// int main(){
//     printf("Hello World");  // output 
// }



// #include<stdio.h>

// int main(){
//     printf("Hello World\n");  // output 

//     printf("Hey, How are you?");
// }


// #include<stdio.h>

// int main(){
//     printf("Hello World\t");  // output 

//     printf("Hey, How are you?");
// }


// #include<stdio.h>

// int main(){
    
//     printf("%d size of integer\n",sizeof(int));
//     printf("size of %d integer\n",sizeof(int));
//     printf("size of integer %d\n",sizeof(int));

//     printf("Float Size %d \n",sizeof(float));
//     printf("Double Size %d \n ",sizeof(double));
//     printf("Char Size %d \n ",sizeof(char));
   
// }



// #include<stdio.h>

// int main(){
    
//   int 12num;   // Not Ok
//   int num12;   // Ok

//   int num value;    // Not ok
//   int num_value;    // ok

//   int _num1;
//   int $num1;
//   int @num1;    //Not ok

// int !value;  //not ok


// int Num;

// int num;
// int num;



   
// }



// #include<stdio.h>

// int main(){

//     int num = 10;

//     num = 20;


//     printf("%d\n",num);
// }




// #include<stdio.h>

// int main(){

//   const  int num = 10;

//     // num = 20;


//     printf("%d\n",num);
// }


// #include<stdio.h>

// int main(){

//   const  int num;  // same line me insilization

//     // num = 20; // Not ok


//     printf("%d\n",num);
// }



// #include<stdio.h>

// int main(){

//   const  int num;

//     printf("Please enter value : ");

//     scanf("%d",&num);  // User se input lete hai


//     printf("%d\n",num);
//     // printf("%d\n",&num);
// }



// #include<stdio.h>

// int main(){

//   const  int num;

//   num = 10;


//  printf("%d\n",num);
// }


// Micro

// #include<stdio.h>

// #define num 15.04

// void main(){

//  printf("%0.3f\n",num);

// //  return 0;

// }


// #include<stdio.h>
// int main(){

//     int a = 10;

//     // a++;


//     ++a;

//     printf("%d",a);   //11
// }


// #include<stdio.h>
// int main(){

//     int a = 10;

//     int result = ++a + a++;  11 + 12

//     printf("%d\n",a);   //12

//     printf("%d\n",result);   //23
// }


// #include<stdio.h>
// int main(){

//     int a = 10;

//     int result = ++a + a++;  //11 + 11

//     printf("%d\n",result);   //23

//     printf("%d\n",a);   //12

   
// }



// #include<stdio.h>
// int main(){

//     int a = 10;

//     a = ++a + a++; // 11 + 11

//     printf("%d\n",a);

// }



// #include<stdio.h>
// int main(){

//     int a = 10;
//     int b = 20;

//     int result = a++ + ++b + ++a;    // 10 + 21 + 12

//     printf("%d\n",result);

// }



// #include<stdio.h>
// int main(){

//     int a = 10;
//     int b = 20;

    

//     printf("%d\n",a+b);
//     printf("%d\n",a-b);
//     printf("%d\n",a*b);

//     // Typecasting

// float divsion = (float) a/b;

//     printf("%0.1f\n",divsion);
//     printf("%d\n",a%b);
   

// }





// #include<stdio.h>
// int main(){

// float a = 20.6;

    
// int result = a;

// printf("%d\n",result);


// }


// #include<stdio.h>
// int main(){
// int a = 5;

// int b = 10;


// printf("%d\n",a%b);


// }



// #include<stdio.h>

// int main(){
// int a = 5;
// int b = 10;


// printf("%d\n",(a>b));
// printf("%d\n",(a<b));
// printf("%d\n",a==b);
// printf("%d\n",a!=b);
// printf("%d\n",a>=b);
// printf("%d\n",a<=b);


// }



// #include<stdio.h>

// int main(){
// int a = 5;
// int b = 10;

// int c = 12;


// printf("%d\n",(a>b) && (a>c));   // 0
// printf("%d\n",(b>a) && (a>c));   // 0
// printf("%d\n",(b>a) && (c>b));   // 1



// }




// #include<stdio.h>

// int main(){
// int a = 5;
// int b = 10;

// int c = 12;


// printf("%d\n",(a>b) || (a>c));   // 0
// printf("%d\n",(b>a) || (a>c));   // 1
// printf("%d\n",(b>a) || (c>b));   // 1

// }



// #include<stdio.h>

// int main(){
// int a = 5;
// int b = 10;

// int c = 12;


// printf("%d\n",!((a>b) || (a>c)));   // 1


// }




// Binary Operator


// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 5;

//     int result = a&b;


//     printf("%d\n",result);
// }


// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 5;

//     int result = a|b;


//     printf("%d\n",result);
// }


// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 5;

//     int result = a^b;


//     printf("%d\n",result);
// }



// #include<stdio.h>

// int main(){

//     int a = 10;
  
//   int result =  a<<2;


//     printf("%d\n",result);
// }



// #include<stdio.h>

// int main(){

//     int a = 10;
  
//   int result =  a>>2;


//     printf("%d\n",result);
// }




// #include<stdio.h>

// int main(){

//     int a = 100;
  
//   int result =  ~a;


//     printf("%d\n",result);
// }



// #include<stdio.h>

// int main(){

//     int a = 100;
  
//     a = a+5;  // 100 + 5  => 105


//     printf("%d\n",a);
// }


// #include<stdio.h>

// int main(){

//     int a = 100;
  
//     // a = a+5;  // 100 + 5  => 105

//     a += 5;


//     printf("%d\n",a);
// }


// #include<stdio.h>

// int main(){

//     int age = 10;

//     (age>=18)? printf("Welcome Bhai, You are eligible!"): printf("Sorry Bhai, Abhi bache ho!");
   
// }


// #include<stdio.h>

// int main(){
    
//     int age;
//     printf("Please enter your age !");
//     scanf("%d",&age);

//     if(age>=18){
//         printf("You can Watch Mirjapur web series!");
//     }
//     else{
//           printf("Sorry, You watch cartoon movie");
//     }
// }




// #include<stdio.h>

// int main(){
    
//     int marks;
//     printf("Please enter your Marks !");
//     scanf("%d",&marks);

//     if(age>=18){
//         printf("You can Watch Mirjapur web series!");
//     }
//     else{
//           printf("Sorry, You watch cartoon movie");
//     }
// }


//Switch case


// #include<stdio.h>
// int main(){
//     int a;
//     printf("Please enter value of a : ");
//     scanf("%d",&a);

//    getchar();

//     char op;
//     printf("please enter operator :");
//     scanf("%c",&op);  

//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d",&b);

//     switch(op){
//         case '+': 
//                 printf("Addition : %d\n",a+b);
//                 break;
//         case '-': 
//                 printf("Sub : %d\n",a-b);
//                 break;
//         case '/': 
//                 printf("Divide : %d\n",a/b);
//                 break;
//         case '*': 
//                 printf("Multiply : %d\n",a*b);
//                 break;
//         case '%': 
//                 printf("Remainder : %d\n",a%b);
//                 break;

//         default :
//                 printf("Please enter valid operator!");
//     }
// }




// #include<stdio.h>
// int main(){
//     int a;
//     printf("Please enter value of a : ");
//     scanf("%d",&a);

//     char ch;

//     printf("Please enter single character :");
//     scanf("%c", &ch);


//     printf("Output : %d\n",a);
//     printf("Output : %c",ch);

// }



// #include<stdio.h>
// int main(){
//     char ch;

//     printf("Please enter single character :");
//     scanf("%c", &ch);

//     printf("Output : %c",ch);

// }



// #include<stdio.h>
// int main(){
//     int a;
//     printf("Please enter value of a : ");
//     scanf("%d",&a);

//     char ch;
//     getchar();
//     printf("Please enter single character :");
//     scanf("%c", &ch);


//     printf("Output : %d\n",a);
//     printf("Output : %c",ch);

// }




// #include<stdio.h>
// int main(){
//     int a;
//     printf("Please enter value of a : ");
//     scanf("%d",&a);

//    getchar();

//     char op;
//     printf("please enter operator :");
//     scanf("%c",&op);  

//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d",&b);

//     switch(op){
//         case '+': 
//                 printf("Addition : %d\n",a+b);
//                 break;
//         case '-': 
//                 printf("Sub : %d\n",a-b);
//                 break;
//         case '/': 
//                 printf("Divide : %d\n",a/b);
//                 break;
//         case '*': 
//                 printf("Multiply : %d\n",a*b);
//                 break;
//         case '%': 
//                 printf("Remainder : %d\n",a%b);
//                 break;

//         default :
//                 printf("Please enter valid operator!");
//     }
// }





#include<stdio.h>
int main(){
    int a;
    printf("Please enter value of a : ");
    scanf("%d",&a);

   getchar();

    int op;
    printf("please enter case number :");
    scanf("%d",&op);  

    int b;
    printf("Please enter value of b : ");
    scanf("%d",&b);

    switch(op){
        case 1: 
                printf("Addition : %d\n",a+b);
                break;
        case 2: 
                printf("Sub : %d\n",a-b);
                break;
        case 3: 
            
                printf("Divide : %0.1f\n",(float)a/b);
                break;
        case 4: 
                printf("Multiply : %d\n",a*b);
                break;
        case 5: 
                printf("Remainder : %d\n",a%b);
                break;

        default :
                printf("Please enter valid operator!");
    }
}

