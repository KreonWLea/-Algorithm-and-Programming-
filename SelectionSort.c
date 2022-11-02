#include <stdio.h>
#define SAYI 100000

int myArray[SAYI];

void selectionSort(int x[])
{
    int i, j;
    int key;

    for( i = 0; i < SAYI; i++)
    {
        key = i;

        for(j = i + 1; j < SAYI; j++)
        {
            if(myArray[key] > myArray[j])
            {
                key = j;
            }

        }
        swapf(i, key);
    }
}

void printSorted()
{
    int i;
    for( i = 0; i < SAYI - 1; i++)
    {
        printf("%d\n", myArray[i]);
    }
}

void swapf(int x, int y)
{
    int temp;
    temp = myArray[x];
    myArray[x] = myArray[y];
    myArray[y] = temp;

}

void init()
{
    int i;
    for( i = 0; i < SAYI - 1; i++)
    {
        myArray[i] = 1+rand()%10000;
    }
}

int main()
{
    init();
    selectionSort(myArray);
    printSorted();
    return 0;
}