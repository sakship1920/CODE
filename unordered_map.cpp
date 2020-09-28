#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map<string,double> um;
	//Declaring umap to string and double type
	//key will string and mapped value will be of double type
	
	//inserting values by using [] operator
	um["PI"] = 3.14;
	um["root2"] = 1.414;
	um["root3"] = 1.732;
	um["log10"] = 2.302;
	
	//now insert value by using insert function
	um.insert(make_pair("e",5645));
	
	string key;
	cout<<"ENter the key you want to search for!"<<endl;
	cin>>key;
	//if key nnot found in map iterator to end is returened
	if(um.find(key)==um.end())
		cout << key << "not found\n\n";
		
	else
		cout << "Found" << key << "\n\n";
		
	//now iterating from all over the map
	unordered_map<string, double>:: iterator itr;
	cout << "\n All Elements : \n";
	for (itr = um.begin(); itr != um.end(); itr++)
	{
		cout<< itr->first << " " << itr->second << endl;
	}
	
}



