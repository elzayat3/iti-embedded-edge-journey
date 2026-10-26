



void TOH(int n,char a,char b,char c)
{
	if(n==1)
	{
		pritnf("move from %c to %c\n",a ,c);
	}
	else
	{
		TOH(n-1,a,c,b);
		pritnf("move from %c to %c\n",a ,c);
		TOH(n-1,b,a,c);
	}
}