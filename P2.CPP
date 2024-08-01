#include <bits/stdc++.h>
using namespace std;
void find(string str)
{
	map<string, int> M;
	string word = "";
	for (int i = 0; i < str.size(); i++) 
    {
        // IF WORD IS FORMED
		if (str[i] == ' ') 
        {
            // IF WORD IS ENCOUNTERED FIRST TIME
			if (M.find(word) == M.end()) 
            {
				M.insert(make_pair(word, 1));
				word = "";
			}
            // IF WORD IS ENCOUNTERED SECOND TIME
			else 
            {
				M[word]++;
				word = "";
			}
		}
        // IF WORD IS NOT FORMED
		else
		{
            word += str[i];
        }
	}
    // FOR LAST WORD
	if (M.find(word) == M.end())
    {
		M.insert(make_pair(word, 1));
    }
	else
    {
		M[word]++;
    }
	for (auto& it : M) 
    {
		cout << it.first << " - "<< it.second<< endl;
	}
}
int main()
{
	string a;
    cout<<"ENTER THE STRING : ";
    getline(cin,a);
	find(a);
	return 0;
}