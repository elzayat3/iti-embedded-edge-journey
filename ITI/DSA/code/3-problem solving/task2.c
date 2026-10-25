
#include <stdlib.h>
#include <stdio.h>

void multiple_missing(int*arr,int size);


int max_in_array(int*arr,int size);


int main()
{
    
}


void multiple_missing(int*arr,int size)
{
    int max=max_in_array(arr,size);
    int sizeq=max+1;
    int*freq=(int*)calloc(sizeq,sizeof(int));

    for(int i=0;i<size;i++)
    {
        freq[arr[i]]=1;
    }

    for(int i=0;i<sizeq;i++)
    {

        if(freq[i]==0)
        {
            printf("%d   ",i);
        }
        else{;}
    }


}




int max_in_array(int*arr,int size)
{
    int max = arr[0];

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else{;}
    }
    return max;
}