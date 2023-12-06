#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
	typedef map<string,int> mapType;
	mapType populationMap;
	populationMap.insert(pair<string, int>("Maharashtra", 125));
	populationMap.insert(pair<string, int>("Uttar Pradesh", 225));
	populationMap.insert(pair<string, int>("Bihar", 120)); 
	populationMap.insert(pair<string, int>("West Bengal", 100)); 
	mapType::iterator iter = --populationMap.end();
	populationMap.erase(iter);
	 
	cout << "Total state and UT of India with Size of populationMap: " << populationMap.size() << '\n';
	
	for (iter = populationMap.begin(); iter != populationMap.end(); ++iter) 
	{
	 cout << iter->first <<":" << iter->second << " million\n";
	}
	
	char c;
	do
	{
		string state;
		cout<<"\nEnter that state you want to know the population of: ";
		cin>>state;
		iter = populationMap.find(state);
		if( iter != populationMap.end() ) 
		    cout << state <<"'s populations is "
		        << iter->second << " million\n";
		else
		    cout << "State is not in populationMap" << '\n';
		    
		cout<<"Do you wish to continue?(y/n):";
		cin>>c;
	}while(c=='y'||c=='Y');
	 
	populationMap.clear();
	
	return 0;
}


