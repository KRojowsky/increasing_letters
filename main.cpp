#include <iostream>
#include <string>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string text;
	getline(cin, text);
	
	int dl = text.length();
	int T[dl], k=0;	
	
	for(int i=0; i<dl; i++)
	{
		if(text[i]!=32)
		{
			T[i] = k;
			k++;
		}	
	}
	
	for(int i=0; i<dl; i++)
	{
		if(T[i]%2==0 && text[i]>96)
		{
			text[i]-=32;
		}
	}
	
	cout<<text;	
	return 0;	
}
