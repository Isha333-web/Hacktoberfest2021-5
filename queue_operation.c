#include <stdio.h>
#include<stdlib.h>
#define n 50
int queuei[n];
int rear = - 1;
int front = - 1;
void qinsert();
void qdelete();
void qdisplay();
int main()
{
    int ch;
    while (1)
    {
        printf("1.Insert \n");
        printf("2.Delete\n");
        printf("3.Display \n");
        printf("4.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            qinsert();
            break;
            case 2:
            qdelete();
            break;
            case 3:
            qdisplay();
            break;
            case 4:
            exit(0);
            default:
            printf("Inavlid choice \n");
        }
    }
}
void qinsert()
{
    int add_item;
    if (rear == n- 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queuei[rear] = add_item;
    }
}
void qdelete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Deleted Element is : %d\n", queuei[front]);
        front = front + 1;
    }
}
void qdisplay()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queuei[i]);
        printf("\n");
    }
}
