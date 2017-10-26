#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


int main()
{
int tab[10];
	//srand(time(null));
	for(int i=0;i<10;i++) tab[i]=rand()%10;
	
	for(int i=0;i<10;i++) cout<<tab[i]<<endl;
	cout<<"max tab "<<max(tab,10);
	cout<<"min tab "<<min(tab,10);
	cout<<"zmiana";



}
