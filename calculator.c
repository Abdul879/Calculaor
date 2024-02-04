#include <stdio.h>
#include <stdlib.h>
//Declaring functions
int addOfTwoNumbers(int, int);
int subOfTwoNumbers(int, int); 
int mulOfTwoNumbers(int, int);
int divOfTwoNumbers(int, int);
int areaOfSquare(int);
int menu();

int main()
{
  // initilizing the variables
  int x, y,side;
  int add,sub,multiple,div,area;
  int choice;
  // open for loop for repeated iterations
  for(;;)
  {
    choice = menu();
    switch(choice)
    {
      // Taking inputs from the user
        case 1:
                printf("\t\tEnter any Two Numbers: ");
                scanf("\t\t%d+%d",&x,&y);
                add = addOfTwoNumbers(x,y);
                printf("\t\t(%d + %d = %d)",x, y, add);
                break;
        case 2:
                printf("\n\t\tEnter any Two Numbers:");
                scanf("\t\t%d%d",&x,&y);
                sub = subOfTwoNumbers(x,y);
                printf("(\t\t%d - %d = %d)",x, y, sub);
                break;
        case 3:
                printf("\n\t\tEnter any Two Numbers:");
                scanf("\t\t%d%d",&x,&y);
                multiple = mulOfTwoNumbers(x,y);
                printf("\t\t(%d * %d = %d)",x, y, multiple);
                break;
        case 4:
                printf("\n\t\tEnter any Two Numbers:");
                scanf("\t\t%d%d",&x,&y);
                div = divOfTwoNumbers(x,y);
                printf("\t\t(%d / %d = %d)",x, y, div);
                break;
        case 5: 
                printf("\n\t\tEnter length of side of the Square :");
                scanf("%d",&side); 
                area = areaOfSquare(side);
                printf("\t\t(%d^2 = %d\n)", side, area);
                break;
        case 6: 
                exit(0);
	        break;
        defalut: 
                printf("\n\t\tYou have selected the wrong Option");
                
       }
    }
}

int addOfTwoNumbers(int x, int y)
{
     return x + y;
}
int subOfTwoNumbers(int x, int y)
{
  return x - y;
}
int mulOfTwoNumbers(int x, int y)
{
  return x * y;
}
int divOfTwoNumbers(int x, int y)
{
  return x / y;
}
int areaOfSquare(int x)
{
  return x * x;
}

int menu()
{
  int ch;
  printf("\n\t\t^*^*^*^*^*^*^*^*^*^*^**^*^*^*^*^*^*^*^*^*^");
  printf("\n\t\t^*^*^                                ^*^*^");   
  printf("\n\t\t^*^*^ 1.Addtion of Two Numbers       ^*^*^");
  printf("\n\t\t^*^*^ 2.Subtraction of Two Numbers   ^*^*^");
  printf("\n\t\t^*^*^ 3.Multiplication of Two Numbers^*^*^");
  printf("\n\t\t^*^*^ 4.Division of Two Numbers      ^*^*^");
  printf("\n\t\t^*^*^ 5.Square root of Number        ^*^*^");     
  printf("\n\t\t^*^*^                                ^*^*^");     
  printf("\n\t\t^*^*^*^*^*^*^*^*^*^*^*^**^*^*^*^*^*^*^*^*^");
  printf("\n\t\t Enter your Choice:");
  scanf("%d",&ch);

  return ch;
}



         
