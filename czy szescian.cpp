#include <iostream>
using namespace std;

main()
{
    int licz;
    cin>> licz;

    int i=0;


        while ( i<= licz )
     {
            if (i*i*i == licz)
                {cout<<"liczba "<<licz<<" jest szescianem liczby naturalnej"<<endl; break; }

            else if (i==licz)
                { cout<<"NIE jest szescianem"<<endl; break;  }

        i++;
     }











}











