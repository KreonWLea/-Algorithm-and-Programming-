#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *lhs, int *rhs)
{
    if (lhs == rhs)
        return;

    int tmp = *lhs;
    *lhs = *rhs;
    *rhs = tmp;
}

int partition(int ar[], int len)
{
    int i, pvt=0;

    swap(ar + (rand() % len), ar+(len-1));
    for (i=0; i<len; ++i)
    {
        if (ar[i] < ar[len-1])
            swap(ar + i, ar + pvt++);
    }

    
    swap(ar+pvt, ar+(len-1));
    return pvt;
}

void quicksort(int ar[], int len)
{
    if (len < 2)
        return;

    int pvt = partition(ar, len);
    quicksort(ar, pvt++);
    quicksort(ar+pvt, len-pvt);
}


int main()
{
    srand((unsigned int)time(NULL));

    const int N = 100000;
    int data[N];

    for (int i=0; i<N; ++i)
    {
        data[i] = 1+rand() % 10000;
    }

    quicksort(data, N);

    for (int i=0; i<N; ++i)
    {
    	printf("%d ", data[i]);
	}
        
    return 0;
}
