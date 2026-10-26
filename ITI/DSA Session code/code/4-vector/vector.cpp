#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>



void print_vector(std::vector<int> v ,std::string lable)
{
    std::cout<<lable<<": ";
   for(int num : v)
    {
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
}

void print_vector2(const int*p,int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<std::endl;
}


int main()
{
    /*1.Create vector */
    std::vector<int> v1{5,4,3,2,1,1,4,3,2};

    /*2. vector Traversing using iterator*/

    std::cout<<"vector Traversing using iterato"<<std::endl;

    for(std::vector<int>::iterator item=v1.begin(); item != v1.end() ;item ++ )
    {
        std::cout<<*item<<" ";
    }

    /*3.Try date()*/
    std::cout<<std::endl<<"Try data()"<<std::endl;

    print_vector2(v1.data(),v1.size());

    /*4-Swap two vector*/
    std::vector<int> v2{10,20,30,40,50};
    print_vector(v1,"vector 1");
    print_vector(v2,"vector 2");

    v1.swap(v2);

    print_vector(v1,"vector 1");
    print_vector(v2,"vector 2");

    /*5-Sort Vector*/

    std::sort(v2.begin(),v2.end());
    print_vector(v2,"vector 2 after sort");

    /*6-reverse vector*/

    std::reverse(v2.begin(), v2.end());
    print_vector(v2,"vector 2 after reverse");

    /*7-Search of key on vector*/

    if( std::find(v2.begin(),v2.end(),5)==v2.end())
    {
        std::cout << "vector does not contain " << 5 << '\n';
    }
    else
    {
        std::cout << "vector contain " << 5 << '\n';
    }
    if( std::find(v2.begin(),v2.end(),10)==v2.end())
    {
        std::cout << "vector does not contain " << 10 << '\n';
    }
    else
    {
        std::cout << "vector contain " << 10 << '\n';
    }

    /*8-print key frequencies on vector*/

    std::sort(v2.begin(), v2.end());
    for(long long unsigned int num : v2)
    {
        int freq=std::count(v2.begin(), v2.end(),num);

        std::cout<<std::endl << "key : "<< num << " freq :"<<freq<< std::endl ;
    }

    /*9-get min/max */

    std::vector<int>::iterator p=std::min_element(v2.begin(), v2.end());

    std::vector<int>::iterator p1=std::min_element(v1.begin(), v1.end());

    std::cout<<*p<<std::endl;

    std::cout<<*p1<<std::endl;

    std::vector<int>::iterator p2=std::max_element(v2.begin(), v2.end());

    std::vector<int>::iterator p3=std::max_element(v1.begin(), v1.end());

    std::cout<<*p2<<std::endl;

    std::cout<<*p3<<std::endl;

    /*10-sum of vector */

    int sum = std::accumulate(v2.begin(), v2.end(), 0);

    std::cout<<"the sum is " <<sum<<std::endl;

    

    /*12-remove duplicates*/

    //std::unique(v2.begin(), v2.end());

    print_vector(v2,"vector  dup");

    std::vector<int>::iterator last=std::unique(v2.begin(), v2.end());

    v2.erase(last, v2.end());

    print_vector(v2,"vector 2 not dup");


    /*11- ranges for sort / reverse /search/count */

    std::vector<int> v8{5,4,3,2,1,1,4,3,2};

    std::ranges::sort(v8.begin()+1,v8.end()-1);
    
    print_vector(v8,"vector 8");

    std::ranges::reverse(v8.begin()+1,v8.end()-1);

    print_vector(v8,"vector 8");



    return 0;
}