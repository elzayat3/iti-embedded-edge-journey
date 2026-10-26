#ifndef ARRAY
#define ARRAY



class array
{

    private:

    int*ptr;
    int size;
    int capacity;

    void grow();

    public:

    array(int x);

    ~array();

    void dispaly();

    void append(int num);

    void insert(int index,int num);

    void delete_t(int index);

    void search(int num,int&index);

    void set(int index,int num);

    void get(int index,int&num);

    void min(int&min);

    void max(int&max);

    void max_min(int&max,int&min);

    void reverse();

    void shift_right(int shift);

    void rotate_right(int shift);

    void rotate_left(int shift);

    void shift_left(int shift);

    void avarage(int&avg);

    void sum(int&sum);

    void swap(int index1,int index2);

    int size_f(void);

    void merge(array&obj);







};


#endif /* ARRAY */
