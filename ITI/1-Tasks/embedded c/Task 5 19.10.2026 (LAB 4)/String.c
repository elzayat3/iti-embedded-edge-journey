
#define NULL ((void *)0)

const unsigned char *user_memchr(const unsigned char  *s, unsigned char c, int size);


unsigned char user_memcmp(const unsigned char *s1, const unsigned char *s2, int size);




const unsigned char *user_memchr(const unsigned char  *s, unsigned char c, int size)
{

    const unsigned char *result = NULL;
    unsigned char flag=0;

    for(int i=0;i<size&&(0==flag);i++)
    {
        if(s[i]==c)
        {
            result =&s[i];
            flag=1;
        }
        else
        {;}
    }
    return result;
}


unsigned char user_memcmp(const unsigned char *s1, const unsigned char *s2, int size)
{
    unsigned char result=0;

    for(int i=0;(i<size)&&(0==result);i++)
    {
        if(s1[i]>s2[i])
        {
            result=1;
        }
        else if(s1[i]<s2[i])
        {
            result=-1;
        }
        else{;}


    }
    return result;
}
        