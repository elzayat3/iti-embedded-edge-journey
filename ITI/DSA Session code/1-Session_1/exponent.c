

int main()
{

    
}


int power(int n,int m)
{
    if(m==0)
    {
        return 1;

    }
    else
    {
        return power(n,m-1)*n;
    }
}


int power2(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    else
    {
        int half=power2(n, m/2);

        if(m % 2==0)
        {
            return half*half;
             
        }
        else
        {
            return n*half*half;
        }
    }

}