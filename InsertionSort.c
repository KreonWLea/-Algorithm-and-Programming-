#include <stdio.h>
#define SAYI 100000

int myArray[SAYI];

void insertionSort(int x[])
{
    int i, j;
    int key;

    for(i = 1; i < SAYI; i++)
    {
        key = myArray[i];
        j = i - 1;
        while(j >= 0 && myArray[j] > key)
        {
            myArray[j+1] = myArray[j];
            j--;
        }
        myArray[j+1] = key;
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
    insertionSort(myArray);
    printSorted();
    return 0;
}