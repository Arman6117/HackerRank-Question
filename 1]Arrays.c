#include<stdio.h>
#include<math.h>


int main()
{
  /*Array is defined as linear data sructure array is derived datatype and array is the colllection of the similar data types stored at continues 
  memory location in indexed format c is 0 based indexed language*/

  /*Data structure is way of storing and represting data in the particuler format*/


    
 //Syntax
   //MEMBER INITIALIASATION LIST
  int marks[3]={90, 80, 89}; /*We can red this as marks is one dimensional array which conatins
                              3 elements and each element is type of integear*/

                /*Here we stored multiple values in a single variable 
                this types of variables are called arrays the number inside
               [] these bracktes define the size of the array we can store that
              frequency of number in the array here we can store 3 numbers in 
              array and we can only store similar type of data in single array*/
              //[] These bracktes are array subscript operator
  
  //You can also declare a array without inisialling it
  //Only applicable in the member initilisation list

  int marks1[]={90, 80, 89};   /*It will automatically create a memory location
                                to store certain numbers of values*/
  //Printing values of array

  printf("Physic:%d\n Chem:%d\n Math:%d\n", marks[0],marks[1],marks[2]); 

                               /*In C language we follow 0 based indexing
                           meaning the first value the  array will be start 
                           from 0 not 1 nd second from 1 and so on*/

  /*Arrays are also pointers the values inside[]these are pointing towards that
    specific location of array to access that value*/

  /*Every array subscript operator is inetrnally considerd its corresponding pointer
    representation*/
    
  /*When we access any element of an array compiler will convert the subscript operator 
    syntax into it's correspondding pointer syntax*/

    //Array Pointer

    int PTA[4] = {51,23,45,22};

    int *P = &(PTA[3]);

    int *P2 = &(PTA[2]);    

    printf("%d\n%d\n", *P, *P2);
 
    //DEFAULT VALUES

     int Def[4] = {23,34};  //Here we stored less values than the size of the array lets see output

    printf("%d\n%d\n%d\n%d\n", Def[0],Def[1],Def[2],Def[3]);

    /*OUTPUT
          
          23   We only stored 2 values in the 4 sized array the last 2 values 0 and 0 are default
          34     values printed by the system 
          0       
          0      Imagine there are 4 rooms in our home name Def [23][34][][] 23 and 34 were living
                 in the first 2 rooms but last 2 rooms were empty and when in our home if there were
                 rooms empty we store random garbage object so our system stored 0s that means
                 garbage values
     
         NOTE : THIS RULE IS ONLY APPLICABLE ON MEMBER INITILISATION LIST NOT IN MEMBER BY 
                MEMBER INITILSING*/

    //MEMBER BY MEMBER INITILISING

    int arr[4]; //Here it is important to declare the size of the array

    arr[0] = 12;
    arr[1] = 23;
    arr[2] = 34;
    arr[3] = 45;
    
    //We can also orint values one by one

    printf("%d\n", arr[0]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[1]);

    //We can print values in any order
    //You can ptint those values which are defined in the in given location of the array
    //Apan fakkt tevdhech value store karu shkto jevdhe aplya array che size hai  

    
    
          
  return.0;
}

//Array is the linear data structure it menas arrays read data in linear way
/*If we initilised less number than the size of the  array then default values
  will get stored in those location*/ 
  

 