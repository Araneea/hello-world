#include <iostream>
using namespace std;

bool wyst (int n)
{

    for(n ; n%10!=n ; n=n/10)
    {
        if((n%10)%7==0 ) return true;

    } if (n%7==0) return true;


    return false;

}

main()
{
    int n;
    cin>>n;

    if(wyst(n)) cout<<"TAK";
    else cout<<"NIE";







}
