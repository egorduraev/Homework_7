#include <iostream>
#define MCHECK(a, b) ((((a)>=(0)) && ((a)<(b)))? ("YES") : ("NO"))
#define ACCESSTOARR(z, x, y) int alpha = (*(*((z) + (y)) + (x)));\
    std::cout<<alpha<<std::endl
#define QUANOFARR(arr, type) std::cout<<(sizeof(*arr)/sizeof(type))<<std::endl

int main()
{
    std::cout<<"Task 1"<<std::endl;
    //Задание 1
    std::cout<< MCHECK(5, 4) <<std::endl;
    std::cout<< MCHECK(3, 6) <<std::endl;
    //Задание 2
    std::cout<<"Task 2"<<std::endl;
    int ** arr = (int**) malloc(3 * sizeof(int));
    arr[0] = (int*) malloc(3 * sizeof(int));
    arr[1] = (int*) malloc(3 * sizeof(int));
    arr[2] = (int*) malloc(3 * sizeof(int));
    int m = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m++;
            *(*(arr + i) + j) = m;
            std::cout<<" "<<*(*(arr + i) + j);
        }
        std::cout<<std::endl;
    }
    int x, y;
    x = 1;
    y = 1;
    ACCESSTOARR(arr, x, y);
    //Задание 3
    std::cout<<"Task 3"<<std::endl;
    int arr1[5] = {1,2,3,4,5};
    QUANOFARR(&arr1, int);
    char arr2[7];
    QUANOFARR(&arr2, char);
    return 0;
}
