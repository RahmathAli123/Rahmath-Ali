#include <stdio.h>
#include <stdlib.h>
void enqueue();
void dequeue();
void show();
int queue[5];
int Rear=-1;
int Front=-1;
int n;
int main()
{
int ch;
printf("enter the size of queue:");
scanf("%d",&n);
while(1)
{				
printf("\n\nQueue Operation \n\n");
printf("1.Enqueue Operation\n");
printf("2.Dequeuq Operation\n");
printf("3.Display the queue\n");
printf("4.Enqueue Operation\n");
printf("5.Exit\n");
printf("Enter your operation of queue");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3: 
show();
break;
case 4:
exit(0);
default:
printf("incorrect choice\n");
}
}
return 0;
}
void enqueue()
{
int item;
if(Rear==n-1)
printf("Overflow\n");
else
{ 
if(Front==-1);
Front=0;
printf("Element to be inserted in the queue:");
scanf("%d",&item);
Rear=Rear+1;
queue[Rear]=item;
}
}
void dequeue()
{
if (Front==-1||Front>Rear)
{
printf("Underflow\n");
return;
}
else
{
if(Front==Rear)
printf("Element delet from the queue:%d\n",queue[Front]);
Front=Front+1;
}
}
void show()
{
if (Front==-1)
printf(" Queue\n");
else
{
printf("Empty Queue:");
for(int i=Front; i<=Rear;i++)
printf("%d",queue[i]);
printf("\n");
}
}

