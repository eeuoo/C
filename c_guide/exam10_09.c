#include <stdio.h>

#define MAX 10

int Queue[MAX];
int Front, Rear;

void init_queue(void)
{
    Front = Rear = 0;
}

void clear_queue(void)
{
    Front = Rear;
}

int put(int k)
{
    if ( (Rear + 1) % MAX == Front)
    {
        printf ("\nQueue Overflow");
        return -1;
    }

    Queue[Rear] = k;
    Rear = ++Rear % MAX;

    return k;
}

int get(void)
{
    int i;

    if (Front == Rear)
    {
        printf("\n Queue Underflow");
        return -1;
    }

    i = Queue[Front];
    Front = ++Front % MAX;

    return 1;
}

void print_queue(void)
{
    int i;
    printf("\n Queue Contents : Front ----> Rear \n");

    for (i = Front; i != Rear; i = ++i % MAX)
    {
        printf(" %-6d", Queue[i]);
    }
}

void main(void)
{
    int i;
    init_queue();

    printf("\n Put 5, 4, 7, 8, 2, 1");
    put(5);
    put(4);
    put(7);
    put(8);
    put(2);
    put(1);
    print_queue();

    printf("\nGet");
    i = get();
    print_queue();
    printf("\n getting value is %d", i);

    printf("\n Put 3, 2, 5, 7");
    put(3);
    put(2);
    put(5);
    put(7);
    print_queue();
    printf("\nNow queue is full, put 3");
    put(3);
    print_queue();

    printf("\nInitialize queue");
    clear_queue();
    print_queue();

    printf("\nNow queue is empty, get");
    i = get();
    print_queue();
    printf("\n getting value is %d\n", i);

}