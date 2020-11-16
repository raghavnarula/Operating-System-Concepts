#include<stdio.h>
#include<stdlib.h>

int main()
{
    int wait[5]={0}; // staring of the wait time is zero
    int burst[5];
    int n = 5; // number of processes
    // taking values 
    int x;
    for (x=0; x<n;x++)
    {
        printf("Enter number %d \n", (x+1));
        scanf("%d", &burst[x]);
    }
    
    // sorting the array of burst times.
    // can do any of the sorting selection , merge , quick etc. 
    // I am using the sorted array only .
    // then it is same like the fcfs only.

    for (int waiting = 0; waiting < n-1; waiting++)
    {
        wait[waiting + 1] = wait[waiting] + burst[waiting];
    }
    
    for (int turn=0;turn<n;turn++)
    {
        printf("%d\n",wait[turn]+burst[turn]);
    }


}