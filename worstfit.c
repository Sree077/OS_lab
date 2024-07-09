#include <stdio.h>
#define max 25
int i, j, k=0, nb, nf, temp=0, highest=0;
void worstfit(int b[],int f[])
{
    for (i=0; i<nf; i++)
    {
        for (j=0; j<nb; j++)
        {
            temp = b[j] - f[i];
            if (temp >= 0)
            {
                if (highest < temp)
                {
                    k = j;
                    highest = temp;
                }
            }
        }
        if (highest != 0)
        {
            printf("\nFile size %d is put in %d partition",f[i],b[k]);

        }
        else
        {
            printf("\nFile size %d must wait!!!",f[i]);
        }

        b[k] = highest;
        highest = 0;
    }
}

int main()
{
    int b[max], f[max];
    printf("\nWorstFit Memory Allocation:- ");
    printf("\nEnter the number of files: ");
    scanf("%d",&nf);
    printf("\nEnter the number of blocks: ");
    scanf("%d",&nb);
    printf("\nEnter sizes of the blocks: ");
    for (i=0; i<nb; i++)
    {
        printf("\nBlock %d: ",i+1);
        scanf("%d",&b[i]);
    }
    printf("\nEnter the sizes of the files: ");
    for (i=0; i<nf; i++)
    {
        printf("\nFile %d: ",i+1);
        scanf("%d",&f[i]);
    }
    worstfit(b,f);
    return 0;
}