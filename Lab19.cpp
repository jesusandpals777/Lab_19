#include <iostream>

using namespace std;

void treeTop();
void treeTrunk(int);
static void drawTrees(int, int);
int height, noOfTrees;
char input;

int main()
{
	do
	{
	
		cout << "Enter tree height: " << endl;
		cin >> height;
	
		cout << "Enter number of trees: " << endl;
		cin >> noOfTrees;
	
		drawTrees(height, noOfTrees);
	
		cout << "There are " << noOfTrees << " trees in the forest" << endl;
		
		cout << "Do you want more trees (Y/N)?: " << endl;
		cin >> input;
	
    }
	
	while(input == 'y' || input =='Y');

	
	
	return 0;	
	
}


void treeTop()
{
	 cout << "   ^\n";
   cout << "  / \\ \n";
   cout << " /   \\ \n";
   cout << "/     \\ \n";
   cout << "-------\n";
}

void treeTrunk(int h)
{
	int i;
	for(i = 1; i <= h; i++)
	{
		cout << "  ||\n";
	}
}
static void drawTrees(int h, int n)
{
	static int count;
	int i;
	for(i = 1;  i<= n; i ++)
	{
		treeTop();
		treeTrunk(h);
		cout << endl;
	}
	
}
