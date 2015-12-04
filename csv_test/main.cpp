#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {


	string a = "102";
	int b = stoi(a,nullptr,0);
	cout << a << ": " << b << "\n";


	vector< vector<string> > data;
	ifstream infile( "../../candidates.csv" );

	while (infile)
	{
		string s;
		if (!getline( infile, s )) break;

		istringstream ss( s );
		vector <string> record;

		while (ss)
		{
			string s;
			if (!getline( ss, s, ';' )) break;
			record.push_back( s );
		}

		data.push_back( record );
	}
	if (!infile.eof())
	{
		cerr << "Fooey!\n";
	}
	for(int i = 1; i < data.size(); i++)
	{
		vector <string> temp = data.at(i);
		for(int j = 0; j < temp.size(); j++)
		{
			string temp2 = temp.at(j);
			if(j == 0)
			{
				int room = stoi (temp2,nullptr,0);
				printf("Room: %i ===== ",room);
			}
			else
			{
				printf("%s ===== ",temp2.c_str());
			}
		}
		printf("\n");
	}
    return 0;
}
