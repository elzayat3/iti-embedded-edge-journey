
#include <algorithm>
#include <vector>

#include <numeric>

#include <iostream>

/*2,5,1,7,10 
k=14
*/


int sol(std::vector<int> arr,int k)
{
    int i=0;
    int j=0;
    int sum=0;
    int len=0;
    int max_len=0;

    while(j <arr.size())
    {
        sum=std::accumulate(arr.begin()+i, arr.begin()+j+1, 0);

        if(sum>k)
        {
            i++;
        }
        else if(sum<=k)
        {
            len=j-i+1;

            max_len=std::max(len,max_len);
            j++;
        }
        else 
        {
           ; 
        }
    

        sum=0;
        
    }

    return max_len;
}


int main(void)
{

    std::vector<int>  v{2,5,1,7,10};
    std::cout<<sol(v,14)<<std::endl;
}