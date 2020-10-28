// I use switch here to enable user to select what kind of operation is needed

#include<stdio.h>
#include<stdlib.h>
#define max 5 //size of stack is defined as max = 5
struct stack
{
    int stackArray[max];
    int top;
}st;

void push();
void pop();
void display();

int main()
{
    st.top = -1;//stack is initialised as empty
    int option;
    //switch statements to ask what the user wants inside& a do while loop so that the program will run until the user wants to quit
    do{
        printf("\nEnter your choice (1-4):");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Display stack");
        printf("\n 4. exit");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("\n\n Wrong option number, try again");
                break;
        }
    }while(option !=4);
}

void push()
{
    int element;//element: element to be pushed
    if(st.top == max-1)
    {
        printf("\n Stack Overflow");
    }
    else
    {
        printf("\n Enter element to be inserted: ");
        scanf("%d", &element);
        st.top++;
        st.stackArray[st.top] = element;
    }
}

void pop()
{
    if(st.top == -1)
        printf("\n Stack Underflow");
    else
    {
        int popElement;//element to be popped
        popElement = st.stackArray[st.top];
        st.top--;
        printf("\n The element popped is: &d", popElement);
    }
}

void display()
{
    if(st.top == -1)
        printf("\n The stack is currently empty");
    else
    {
        for(int i = st.top; i >= 0; i--)
        {
            printf("%d  ", st.stackArray[i]);
        }
    }
    
}
