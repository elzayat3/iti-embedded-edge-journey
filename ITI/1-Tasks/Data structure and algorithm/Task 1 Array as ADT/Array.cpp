


#include "Array.h"

#include <stdio.h>


array::array(int x)
{
    
    capacity=x;
    ptr=new int[x];
    size=0;
}

array::~array()
{

    delete [] ptr;
}

void array::dispaly()
{
    int i=0;
    if(ptr!=nullptr)
    {
        for(;i<size;i++)
        {
            printf("%d ",ptr[i]);
        }
    }
    else{;} 
    printf("\n");

}

void array::grow()
{
    int*ptr2=new int[capacity*2];

    for(int i=0;i<size;i++)
    {
        ptr2[i]=ptr[i];
    }

    delete [] ptr;

    capacity*=2;

    ptr=ptr2;

}

void array::append(int num)
{
    if(size==capacity)
    {
        grow();
        
    }
    else{;}

    ptr[size]=num;

    size++;
}

void array::insert(int index,int num)
{
    if(size==capacity)
    {
        grow();
    }
    else{;}

    for(int i=size;i>index;i--)
    {
        ptr[i]=ptr[i-1];

    }

    ptr[index]=num;
    size++;

}

void array::delete_t(int index)
{
    for(int i=index;i<size-1;i++)
    {
        ptr[i]=ptr[i+1];
    }
    size--;
    ptr[size]=0;
}

void array::search(int num,int&index)
{
    int flag=0;

    index=-1;

    for(int i=0;(i<size)&&(0==flag);i++)
    {
        if(ptr[i]==num)
        {
            flag=1;
            index=i;
        }
        else{;}
    }
}

void array::set(int index,int num)
{
    ptr[index]=num;
}

void array::get(int index,int&num)
{
    num=ptr[index];
    
}

void array::min(int&min)
{
    min=ptr[0];

    for(int i=0;i<size;i++)
    {
        if(ptr[i]<min)
        {
           min=ptr[i]; 
        }
        else{;}
    }
}

void array::max(int&max)
{
    max=ptr[0];

    for(int i=0;i<size;i++)
    {
        if(ptr[i]>max)
        {
           max=ptr[i]; 
        }
        else{;}
    }
}

void array::max_min(int&imax,int&imin)
{

    min(imin);
    max(imax);
    
}

void array::reverse()
{
    int i=0,j=size-1,temp=0;

    for(;i<(size)/2;i++,j--)
    {
        temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
    } 
}

void array::shift_right(int shift)
{
    for(int i=size-shift-1;i>=0;i--)
    {
        ptr[i+shift]=ptr[i];

    }
    for(int i=0;i<shift;i++)
    {
        ptr[i]=0;
    }  
}

void array::rotate_right(int shift)
{
     for(int i=0;i<shift;i++)
    {
        int temp=ptr[size-1];
        for(int i=size-1;i>0;i--)
        {
            ptr[i]=ptr[i-1];
        }
        ptr[0]=temp;
    } 
}

void array::rotate_left(int shift)
{
    for(int i=0;i<shift;i++)
    {
        int temp=ptr[0];
        for(int i=0;i<size-1;i++)
        {
            ptr[i]=ptr[i+1];
        }
        ptr[size-1]=temp;
    }  
}

void array::shift_left(int shift)
{
     int count=0;
    for(int i=shift;i<size;i++)
    {
        ptr[i-shift]=ptr[i]; 
    }
    for(int i=size-1;count<shift;i--)
    {
        ptr[i]=0;
        count++;
    }
}

void array::avarage(int&avg)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=(ptr[i]);
    }

    avg=sum/size; 
}

void array::sum(int&sum)
{
    sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=(ptr[i]);
    }
}

void array::swap(int index1,int index2)
{
    int temp=ptr[index1];
    ptr[index1]=ptr[index2];
    ptr[index2]=temp; 
}

int array::size_f(void)
{
    return size;
}

void array::merge(array&obj)
{
    int size=obj.size_f();

    for(int i=0;i<size;i++)
    {
        append(obj.ptr[i]);  
    }  
}
