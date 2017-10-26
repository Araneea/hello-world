#include <iostream>
using namespace std;


int main()
{
	int tab[6]={23,43,42,43,61,1},zam,temp; 
	
	do
	{
		zam=0;
	
		for (int i=0; i<5; i++)
		{
			if (tab[i]>tab[i+1])
			{
			zam++; 
		
			temp=tab[i];
			tab[i]=tab[i+1];
			tab[i+1]=temp;
			}
		}
	}	
	while(zam!=0);
	
	for(int i=0;i<6;i++)
	cout<<tab[i]<<endl;
}
