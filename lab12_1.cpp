#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}
void stat(const double A[],int N,double B[])
{
    double sum1=0;
    double sum2=0;
    for(int i=0;i<N;i++)
    {
        sum1=sum1+A[i];
    }
    for(int i=0;i<N;i++)
    {
        sum2=sum2+pow(A[i]-sum1/N,2);
    }
    double max=A[0],min=A[0];
    for(int i=0;i<N;i++)
    {
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
    }
    B[0]=sum1/N;
    B[1]=pow(sum2/N,0.5);
    B[2]=max;
    B[3]=min;
}
//Write definition of stat() here 
