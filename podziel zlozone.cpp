#include <iostream>
using namespace std;
bool prime(int n)
{
   if(n%2==0 && n>2) return false;

    for(int p = 3; p*p <=n ; p=p+2)

        if(n%p==0) return false;

        return true;
}
main()
{

    int a,zuo=0;
    cin>>a;
    if(prime(a)) cout<<0;
    else
    {

            for(int i=2 ; i<=a ; i=i+2)
            {
                if ( a%i==0 && !prime(i)) zuo++;


            }
        cout<<zuo;
    }
}












