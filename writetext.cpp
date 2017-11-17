#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream output {"abc.bin"};
   
   if (output) 
   {
	output.write(reinterpret_cast<char*>(&a), sizeof(a));//display data to console (i.e. as formatted chars)
	output.write(reinterpret_cast<char*>(&b), sizeof(b));
	output.write(reinterpret_cast<char*>(&c), sizeof(c));
}
	else
	
   cout<<"Error opening abc.bin"<<endl;
 
   return 0;
}
