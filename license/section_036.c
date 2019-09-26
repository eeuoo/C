#include <stdio.h>
#include <stdlib.h>

/* 병합 (Merge) */

void BB(int b[10], int c[10]);
void CC(int a[10], int c[10]);
void DD(int c[10]);

int i, j, k;

int main()
{
    int a[10] = { 2,3,5,8,9,10,12,13,0 };
    int b[10] = { 1,3,5,6,0 };
    int c[20];
    i = 0;
    j = 0;
    k = -1;

    while (1)
    {
        k++;

        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;

            if (a[i] == 0)
                BB(a, c);
        }
        else if (a[i] == b[j])
        {
            c[k] = a[i];
            i++;
            j++;

            if (a[i] == 0)
                BB(a, c);
            else if (b[j] == 0)
                CC(a, c);
        }
        else
        {
            c[k] = b[j];
            j++;

            if (b[j] == 0)
                CC(a, c);
        }
        
    }
    
}

void BB(int b[10], int c[10])
{
    if(b[j] == 0)
        DD(c);

    do
    {
        k++;
        c[k] = b[j];
        j++;

    } while (b[j] != 0);
    
    DD(c);
}

void CC(int a[10], int c[10])
{
    do
    {
        k++;
        c[k] = a[i];
        i++;

    } while (a[i] != 0);
    
    DD(c);
}

void DD(int c[10])
{
    k++;
    c[k] = 0;
    exit(0);
}