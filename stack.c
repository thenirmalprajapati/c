#include<stdio.h>
#include<stdlib.h>

int list[5],tos=-1,size=4,ch,value;
void push();
void display();
void pop();
void peep();
void update();
void exit();
void main()
{
    
   
    printf("\n1:Push Operation");
    printf("\n2:Pop Operation");
    printf("\n3:Peep Operation");
    printf("\n4:Update Operation");
    printf("\n5:Exit");
    do
    {
      printf("\nEnter The Above Choice:->");
      scanf("%d",&ch);
      switch(ch)
      {
 
       case 1:
          printf("\nEnter The Value:->");
          scanf("%d",&value);
           push();
           display();
           break;
       case 2:
           pop();
           display();
           break;
       case 3:
           peep();
           break;
       case 4:
          update();
          display();
          break;
       case 5:
           exit(0);
           break;
     }
     }
     while(ch!=0);
}
void push()
{
 
   if(tos>=size)
   {
     printf("\nThe Stack is Overflow...");
     return;
   }
   else
   {
     
      tos=tos+1;
      list[tos]=value;
   }
}
void display()
{
   int i;
      for(i=0;i<=tos;i++)
      printf("\nThe Element is:->%d",list[i]);
   
}
void pop()
{
  if(tos==-1)
  {
    printf("\nThe stack is Underflow...");
    return;
  }
  else
  {
    tos=tos-1;
   printf("\nElement Delete Successfull.....");
 }
}
void peep()
{
   int s;
   printf("\nEnter Position for search:->");
   scanf("%d",&s);
   if(tos-s+1<0)
   {
      printf("\n Invalid Index Number");
      return;
   }
   else
   {
   value=list[tos-s+1];
     printf("\nThe Element is:->%d",value);
   }
}

void update()
{
   int it1,it2;
      printf("\nEnter Position for change:->");
     scanf("%d",&it1);
     printf("\nEnter Number For Update:->");
     scanf("%d",&it2);
   if(tos-it1<=-1)
   {
      printf("\nThe Stack Underflow...");
      return;
   }
   else
   {


     list[tos-it1]=it2;
     printf("\nUpdate Successfull.....");

   }
}
