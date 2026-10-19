
#include "stdio.h"
#include <stdlib.h>

typedef struct array 
{
    int*ptr;
    int size;
    int capacity;
}arr;


void grow(arr*obj)
{
        obj->ptr=(int*)realloc(obj->ptr,(obj->capacity*4)*2);
        obj->capacity*=2;
}

void array_dispaly(arr*obj)
{
    int i=0;
    if(obj->ptr!=NULL)
    {
        for(;i<(obj->size);i++)
        {
            printf("%d ",obj->ptr[i]);
        }
    }
    else{;} 
    printf("\n");
}

void array_append(arr*obj,int num)
{

    if(obj->size==obj->capacity)
    {
        grow(obj);
        
    }
    else{;}

    obj->ptr[obj->size]=num;

    obj->size++;

}

void array_insert(arr*obj,int index,int num)
{
    if(obj->size==obj->capacity)
    {
        grow(obj);
    }
    else{;}

    for(int i=obj->size;i>index;i--)
    {
        obj->ptr[i]=obj->ptr[i-1];

    }

    obj->ptr[index]=num;
    obj->size++;
}

void array_delete(arr*obj,int index)
{

    for(int i=index;i<obj->size-1;i++)
    {
        obj->ptr[i]=obj->ptr[i+1];
    }
    obj->size--;
    obj->ptr[obj->size] = 0;
}

void array_search(arr*obj,int num,int*pindex)
{
    int i=0,flag=0,index=-1;;

    for(;(i<obj->size)&&(0==flag);i++)
    {
        if(obj->ptr[i]==num)
        {
            flag=1;
            index=i;
        }
        else{;}
    }

    *(pindex)=index;

}

void array_set(arr*obj,int index,int num)
{

    obj->ptr[index]=num;
}

void array_get(arr*obj,int index,int*num)
{
    *(num)=obj->ptr[index];
}

void array_min(arr*obj,int*pmin)
{
    int min=obj->ptr[0];

    for(int i=0;i<obj->size;i++)
    {
        if(obj->ptr[i]<min)
        {
           min=obj->ptr[i]; 
        }
        else{;}
    }

    *(pmin)=min;

}

void array_max(arr*obj,int*pmax)
{
    int max=obj->ptr[0];

    for(int i=0;i<obj->size;i++)
    {
        if(obj->ptr[i]>max)
        {
           max=obj->ptr[i]; 
        }
        else{;}
    }
    *(pmax)=max;
}

void array_max_min(arr*obj,int*pmax,int*pmin)
{
    int max=0,min=0;
    array_min(obj,&min);
    array_max(obj,&max);
    *(pmax)=max;
    *(pmin)=min;
}

void array_reverse(arr*obj)
{
    int i=0,j=obj->size-1,temp=0;

    for(;i<(obj->size)/2;i++,j--)
    {
        temp=obj->ptr[i];
        obj->ptr[i]=obj->ptr[j];
        obj->ptr[j]=temp;
    }
}

void array_shift_right(arr*obj,int shift)
{
    for(int i=obj->size-shift-1;i>=0;i--)
    {
        obj->ptr[i+shift]=obj->ptr[i];

    }
    for(int i=0;i<shift;i++)
    {
        obj->ptr[i]=0;
    }
}

void array_rotate_right(arr*obj,int shift)
{
    for(int i=0;i<shift;i++)
    {
        int temp=obj->ptr[obj->size-1];
        for(int i=obj->size-1;i>0;i--)
        {
            obj->ptr[i]=obj->ptr[i-1];
        }
        obj->ptr[0]=temp;

    }
    
}

void array_rotate_left(arr*obj,int shift)
{
    for(int i=0;i<shift;i++)
    {
        int temp=obj->ptr[0];
        for(int i=0;i<obj->size-1;i++)
        {
            obj->ptr[i]=obj->ptr[i+1];
        }
        obj->ptr[obj->size-1]=temp;

    }
    
}

void array_shift_left(arr*obj,int shift)
{
    int count=0;
    for(int i=shift;i<obj->size;i++)
    {
        obj->ptr[i-shift]=obj->ptr[i]; 
    }
    for(int i=obj->size-1;count<shift;i--)
    {
        obj->ptr[i]=0;
        count++;
    }
}

void array_merge(arr*obj1,arr*obj2,arr*obj3)
{
    int j=0;

    obj3->capacity=obj1->capacity+obj2->capacity;
    obj3->size=0;

    obj3->ptr=(int*)calloc(obj3->capacity,sizeof(int));

    for(int i=0;i<obj1->size;i++,j++)
    {
        obj3->ptr[j]=obj1->ptr[i];
        obj3->size++;
    }
    for(int i=0;i<obj2->size;i++,j++)
    {
        obj3->ptr[j]=obj2->ptr[i];
        obj3->size++;
    }
    
}

void array_avarage(arr*obj,int*pavg)
{
    int sum=0,avg=0;
    for(int i=0;i<obj->size;i++)
    {
        sum+=(obj->ptr[i]);
    }

    avg=sum/obj->size;

    *(pavg)=avg;
}

void array_sum(arr*obj,int*psum)
{
    int sum=0;
    for(int i=0;i<obj->size;i++)
    {
        sum+=(obj->ptr[i]);
    }
    *(psum)=sum;

}

void array_swap(arr*obj,int index1,int index2)
{

    int temp=obj->ptr[index1];
    obj->ptr[index1]=obj->ptr[index2];
    obj->ptr[index2]=temp;
}



int main()
{
    arr a={
        .capacity=10,
        .size=0
    };
    a.ptr=(int*)calloc(a.capacity,sizeof(int));

    array_append(&a, 0);
    array_append(&a, 1);
    array_append(&a, 2);
    array_dispaly(&a);
    array_insert(&a, 3, 3);
    array_dispaly(&a);
    array_delete(&a, 2);
    array_dispaly(&a);

    array_insert(&a, 2, 2);
    array_dispaly(&a);
    array_append(&a, 4);
    array_append(&a, 5);
    array_append(&a, 6);
    array_append(&a, 7);
    array_dispaly(&a);

    int index=0;

    array_search(&a, 4, &index);
    printf("\n**%d**\n",index);
    array_set(&a, 0, 100);
    array_dispaly(&a);

    int num=0;

    array_get(&a, 1, &num);

    printf("\n***%d***\n",num);

    int max=0,min=0;

    array_max_min(&a, &max, &min);

     printf("\n***max %d min %d ***\n",max,min);

     array_reverse(&a);

     array_dispaly(&a);

     array_reverse(&a);

     array_dispaly(&a);

     array_set(&a, 0, 0);

     array_dispaly(&a);

     array_insert(&a, 4, 40);
     array_dispaly(&a);
     array_delete(&a, 4);

     array_dispaly(&a);

     array_shift_right(&a, 2);

     array_dispaly(&a);

     array_shift_left(&a, 2);

     array_dispaly(&a);

     array_rotate_right(&a,2);

     array_dispaly(&a);

     array_rotate_left(&a,2);

     array_dispaly(&a);

     arr b={
        .capacity=5,
        .size=0
     };

     b.ptr=(int*)calloc(b.capacity,sizeof(int));

     array_append(&b, 10);

     array_append(&b, 20);

     array_append(&b, 30);
     array_dispaly(&a);
     array_dispaly(&b);

     arr c;
     array_merge(&a, &b, &c);
     array_dispaly(&a);
     array_dispaly(&b);
     array_dispaly(&c);



}

