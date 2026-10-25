


int main(void)
{

    int arr[10]={6,7,8,9,10,11,13,14,15,16};
}
/*6,7,8,9,10,11,13,14,15,16*/
int find_missing_element(int*arr,int size)
{
	char flag=0;
	int num=-1;
	
	for(int i=0;(i<size-1)&&(0==flag);i++)
	{
		if(arr[i]==(arr[i+1]+1))
		{
			;
		}
		else
		{
			flag=1;
			num=arr[i]+1;
		}
	}
	return num;
}