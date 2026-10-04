step 1: define the problem 
main function 

MOSFIT needs more volt 

long long size based on H.W

lookup table (LUT) in .rodata

`  int a;  // bss

  

static int b=2;  // data

  

const int c=8; // rodata

  
  
  

int main()

{

    int d; // stack

    static int e; // bss

  

    const int f=3; //stack

}`

'#include "stdio.h"

  
  
  

int main()

{

     float height;

  

     float width ;

  

    printf("please enter the height : ");

  

    scanf("%f",&height);

  

    printf("please enter the width : ");

  

    scanf(" %f",&width);

  
  

    float perimeter=((float)height+(float)width)*2;

  

    float area=(float)height*(float)width;

  
  

    printf("the perimeter is %f \n",perimeter);

  

    printf("the area is %f",area);

  
  

}'

