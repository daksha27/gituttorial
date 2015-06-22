#include<stdio.h>
#define size 5
struct stack
{
    int top;
    int element[size];

};
typedef struct stack stack;
void push(int);
int pop();
void display();
stack s;
int choice, value;
void main()
{
    while(1)
    {
        printf("1. push /n");
        printf("2. pop /n");
        printf("3. display /n");
        printf("4. exit /n");
        printf("enter choice /n");
        scanf("%d",&choice);

        switch (choice);
        {
        case 1:
            printf("enter the value to push");
            scanf("%d",&value);
            push(value);
            printf("you have pushed a value");
            break;

        case 2:
            printf("popped value is/n");
            value=pop;
            printf("%d",value);
            printf("you have popped the value");
            break;

        case 3:
            printf("current status of stack");
            display();
            break;

        case 4:
            printf("exit");
            return;
        default:
            printf("wrong input");

        }
    }
}
int pop();
{
    if(s.top == (-1))
    {
        printf(cannot be popped because empty);
    }
    else
        value = e.element[s.top];
    s.top--;
    return(value);
    }

}
void push(int);
{
    if(s.top<(size-1))
    {
        s.top++;
        s.element[s.top]=value;

    }

}
void display()
{
    if(s.top==(-1))
    {
        printf(stack is empty);
    }
    else
        {
            int i;
    for(i=s.top;i>=0;i--)
    {
        printf("%d/n",s.element[1]);

    }
    }
}
