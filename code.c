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

//   const  int num;

//     printf("Please enter value : ");

//     scanf("%d",&num);  // User se input lete hai


//     printf("%d\n",num);
// }



// #include<stdio.h>

// int main(){

//   const  int num;

//   num = 10;


//  printf("%d\n",num);
// }




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