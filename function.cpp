# include<iostream>
using namespace std;


int sum(int a, int b)
{
    int result=a+b;
    return result;

}
double sum(double a, double b)
{
return a+b;
}

float sum(float a,float b,float c)
{
    return a+b+c;
}


main()
{
    cout<<sum(4,3)<<endl;
    
}


