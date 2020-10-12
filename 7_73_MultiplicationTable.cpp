#include<iostream>

using namespace std ;



int main()
{
    int M=0 ; 

    for(int i=1; i <= 10; i++)
    {
        for(int j =1; j<=10; j++)
        {
            M = i*j ;
            cout << "Multiplication " << M << endl ;

        }    
    }
    
}