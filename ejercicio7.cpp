
#include<iostream>
using namespace std;

void invertir( int x[],int total)
{
    int k = 0;
    int j = total;
    while(k<j){
        int aux = x [k];
        x[k]= x[j];
        x[j] = aux;
        k++;
        j--;

    }
}

int main()
{
    const int max = 10;
    int vector[max] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<endl<<"vector original";
    
    return 0;
}