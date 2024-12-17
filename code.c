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





// #include<stdio.h>
// int main(){
//     int a;
//     printf("Please enter value of a : ");
//     scanf("%d",&a);

//    getchar();

//     int op;
//     printf("please enter case number :");
//     scanf("%d",&op);  

//     int b;
//     printf("Please enter value of b : ");
//     scanf("%d",&b);

//     switch(op){
//         case 1: 
//                 printf("Addition : %d\n",a+b);
//                 break;
//         case 2: 
//                 printf("Sub : %d\n",a-b);
//                 break;
//         case 3: 
            
//                 printf("Divide : %0.1f\n",(float)a/b);
//                 break;
//         case 4: 
//                 printf("Multiply : %d\n",a*b);
//                 break;
//         case 5: 
//                 printf("Remainder : %d\n",a%b);
//                 break;

//         default :
//                 printf("Please enter valid operator!");
//     }
// }




// #include<stdio.h>
// int main(){

//         for(int number = 10; number <=50; number++){
//                 printf("%d\n",number);
//         }
// }






// #include<stdio.h>
// int main(){

//         int number = 10;

//         for(; number <=50; number++){
//                 printf("%d\n",number);
//         }
// }

// #include<stdio.h>
// int main(){

//         int number = 10;

//         for(; number <=50;){
//                 printf("%d\n",number);

//                  number++;
//         }
// }



// #include<stdio.h>
// int main(){

//        // while loop 

//        int number = 1;

//        while(number<= 10){
//         printf("%d\n",number);

//         number++;
//        }
// }

// #include<stdio.h>  

// int main(){   

// int i=1, number, b=9 ;  

// printf("Enter a number: "); 

// scanf("%d",&number);  

// while(i<=10){   

// printf("%d \n",(number*i));   //2*3

// i++; //4

// }    
// return 0;  
// }   



// Do while loop


// #include<stdio.h>
// int main(){

//         int number = 11;


//         do{

//                 printf("%d\n",number);  //11
//                 number++; //12

//         }while(number<=10);
// }


// #include<stdio.h>
// int main(){

//         int number = 11;


//         do{

//                 printf("%d\n",number);  //11,10
//                 number--; //9

//         if(number == 0){
                
//                 break;
//         }
//         }while(number<=10);
// }


// Home Work :

// https://docs.google.com/document/d/14OwYc9Tvhn2ftvJ_P4GX32X4N4tuYdsi4_b69VEfXi4/edit?tab=t.0
// https://docs.google.com/document/d/1DJ5UM0LvqL3Rh2M2fnQBDIuAQV2TMk7jDmgQeOCkY6Q/edit?tab=t.0
// https://docs.google.com/document/d/1hga_FYEkpPQdbIaLK3weX56zhvnsVTp9Lvd_3B2g_as/edit?tab=t.0



// #include<stdio.h>
// int main(){

//         for(int i = 1; i <= 10; i++){

//                 if(i == 5){
//                         break;
//                 }
                
//                 printf("%d\n",i);

        
//         }
// }

// #include<stdio.h>
// int main(){

//         for(int i = 1; i <= 10; i++){

//                 if(i == 5){

//                         continue;
//                 }
                
//                 printf("%d\n",i);

        
//         }
// }


// https://docs.google.com/document/d/1KmkQ9ndbuI1JTgr0FUP06kGZatzLDQcPAMqarlZwVTc/edit?tab=t.0



// #include<stdio.h>
// int main(){

//     // Outer loop -> row

//     for(int row = 1; row <= 4; row++){

//         // Inner Loop -> column
//         for(int col = 1; col <= 4; col++){

//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){

//     // Outer loop -> row

//     for(int row = 1; row <= 4; row++){

//         if(row == 1 || row == 4){
//             printf("****\n");
//         }
//         else{
//             printf("*  *\n");
//         }
//     }
// }



// #include<stdio.h>
// int main(){

//     // row

//     for(int row = 1; row <= 4; row++){

//         // Space

//         for(int space = 1; space<row; space++){
//             printf(" ");
//         }

//         // Star

//         for(int star = 1; star<=4; star++){
//             printf("*");
//         }

//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){

//     // row
//     for(int row = 1; row<=4; row++){

//         // space

//         for(int space = 1; space<=4-row; space++){
//             printf(" ");
//         }

//         // star

//         for(int star = 1; star < 2*row; star++){
//             printf("*");
//         }

//         printf("\n");

//     }
// }




// #include<stdio.h>
// int main(){

//     // row
//     for(int row = 1; row<=4; row++){

//         // space

//         for(int space = 1; space<=4-row; space++){
//             printf(" ");
//         }

//         // star

//         for(int star = 1; star < 2*row; star++){
            
           

//             if(row == 2 && star == 2){
//                 printf(" ");
//             }
//             else if(row == 3 && (star == 2 || star == 3 || star == 4) ){
//                  printf(" ");
//             }
            
//             else{
//                  printf("*");
//             }

            
//         }

//         printf("\n");

//     }
// }


// #include<stdio.h>
// int main(){

//     // row

//     for(int i = 1; i <= 4; i++){

//         // col

//         for(int j = 1; j <= 4; j++){

//             printf("1");
//         }

//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){

//     // row

//     for(int i = 1; i <= 4; i++){

//         // col

//         for(int j = 1; j <= 4; j++){

//             printf("%d",i);
//         }

//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main(){

//     // row

//     for(int row = 1; row <=4; row++){

//         // col

//         for(int col = 1; col <=3; col++){

//             if(row == 2 && col == 2){
//                 printf("1");
//             }

//             else if(row == 3 && col == 2){
//                 printf("2");
//             }
//             else{
//                 printf("3");
//             }

           
//         }
//          printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int a =1;
//     for(int row=0;row<=4 ;row++)
//     {
//         for(int num =0;num<row;num++)
//         {
           
//             printf("%d",a);
//              a++;
//         }
//             printf("\n");
//     }
// }


// #include <stdio.h>

// int main()
// {
//     int rows = 4;
//     int n = 1;

//     // outer
//     for (int i = 0; i < rows; i++) {

//         // innter
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", n++);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int counter = 10; 
    
 
//     for (int row = 4; row >= 1; row--) {  
//         for (int col = 1; col <= row; col++) {
//             printf("%d", counter); 
//             counter--; 
//         }
//         printf("\n"); 
//     }
    
//     return 0;
// }



// Array 


// #include<stdio.h>
// int main(){

//     int arr[5];

//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     arr[3] = 40;
//     arr[4] = 50;


//     printf("%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[3]);
//     printf("%d\n",arr[4]);
// }




// #include<stdio.h>
// int main(){

//     int arr[5] = {10,20,30,40,50};


//     printf("%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[3]);
//     printf("%d\n",arr[4]);
// }


// #include<stdio.h>
// int main(){

//     int arr[5] = {10,20,30,40,50};


//    for(int i = 0; i < 5; i++){
//     printf("%d\n", arr[i]);
//    }
// }

// #include<stdio.h>
// int main(){

//     int arr[5] = {10,20,30,40,50};


//    for(int i = 0; i < 5; i++){
//     printf("%d ", arr[i]);
//    }
// }'



// #include<stdio.h>
// int main(){

//     int arr[5];


//     for(int i = 0; i < 5; i++){
        
//         printf("Enter element at %d index ",i);
//         scanf("%d",&arr[i]);
//    }

//     printf("Array : \n");

//    for(int i = 0; i < 5; i++){
//     printf("%d ", arr[i]);
//    }
// }


// #include<stdio.h>
// int main(){

//     int arr[]  = {10,20,30,40,50,60};

//     // Size of Array

//     // sizeof()

//     printf("%d\n",sizeof(arr));
//     printf("%d\n",sizeof(arr[0]));


//     int length = sizeof(arr)/sizeof(arr[0]);

//     printf("Length of array : %d",length);


// }


// https://docs.google.com/document/d/1LUQu_OQAwEJhS7tVKvNWnEkOKiG-eizjaQ3pjBYXaIg/edit?tab=t.0


// #include<stdio.h>
// int main(){

//     int arr[3][4];

//     arr[0][0] = 11; 
//     arr[0][1] =  12; 
//     arr[0][2] =  13;
//     arr[0][3] =  14;
//     arr[1][0] =15; 
//     arr[1][1] = 16;
//     arr[1][2] = 17;
//     arr[1][3] = 18;
//     arr[2][0] =  19;
//     arr[2][1] = 20;
//     arr[2][2] =21; 
//     arr[2][3] = 22;


//   printf("%d ",arr[0][0]);
//   printf("%d ",arr[0][1]);
//   printf("%d ",arr[0][2]);
//   printf("%d\n",arr[0][3]);

//   printf("%d ",arr[1][0]);
//   printf("%d ",arr[1][1]);
//   printf("%d ",arr[1][2]);
//   printf("%d\n",arr[1][3]);

//   printf("%d ",arr[2][0]);
//   printf("%d ",arr[2][1]);
//   printf("%d ",arr[2][2]);
//   printf("%d ",arr[2][3]);
    
// }

// #include<stdio.h>
// int main(){

//     int arr[3][4];

//     arr[0][0] = 11; 
//     arr[0][1] =  12; 
//     arr[0][2] =  13;
//     arr[0][3] =  14;
//     arr[1][0] =15; 
//     arr[1][1] = 16;
//     arr[1][2] = 17;
//     arr[1][3] = 18;
//     arr[2][0] =  19;
//     arr[2][1] = 20;
//     arr[2][2] =21; 
//     arr[2][3] = 22;

// for(int row = 0; row < 3; row++){

//     for(int col = 0; col < 4; col++){
//         printf("%d ", arr[row][col]);
//     }

//     printf("\n");
// }
    
// }



// #include<stdio.h>
// int main(){

//     int arr[3][4];

    

// for(int row = 0; row < 3; row++){

//     for(int col = 0; col < 4; col++){

//         printf("Please enetr element in 2D array at %d row and %d col : ",row,col);

//         scanf("%d",&arr[row][col]);
//     }

   
// }


// for(int row = 0; row < 3; row++){

//     for(int col = 0; col < 4; col++){
//         printf("%d ", arr[row][col]);
//     }

//     printf("\n");
// }
    
// }


// // https://docs.google.com/document/d/1EdnAWRnYCiop3nLRasQFaOxIlda-2AJRXxaq6WeGk88/edit?tab=t.0

// // https://docs.google.com/document/d/1lZkDk2nkz46BMpoMpWqJAY3tCoYy6mTnEe69Jpuu9fk/edit?tab=t.0


// #include<stdio.h>

// int main(){

//     int arr[10]= {10,20,30,40,50,60,70,80,90,100};

//     int find = 30;

//     int isPresent = 0;

//     for(int i = 0; i < 10; i++){
//         if(arr[i] == find){
//             printf("Index : %d\n", i);
//             isPresent = 1;
//             break;
//         }
//     }

//     if(isPresent){
//         printf("Element is Present! ");
//     }else{
//         printf("Element is not Present!");
//     }

// }




#include<stdio.h>

int main(){

    int arr[11]= {10,20,30,40,50,60,70,80,90,100};

    int position = 3;

    int value = 3000;

    for(int i = 10; i >= position; i--){
      
      arr[i] = arr[i-1];

      if(i == position){
        break;
      }
         
    }

    arr[position] = value;


    for(int i = 0; i < 11; i++){
        printf("%d ",arr[i]);
    }

}