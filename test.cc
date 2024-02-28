#include<iostream>
int main()
{
    int i = 2;
    int &j = i;
    int &k = j;
    int const &l = k;

    std::cout << i << " " << j << " " << k<<" "<<l;
}