#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

   ofstream myfile {"abc.bin,ios::binary"};
 if (myfile){
 myfile.writeinterpret_cast<char*(&a),size(a));
 myfile.writeinterpret_cast<char*(&b),size(b));
 myfile.writeinterpret_cast<char*(&c),size(c);
}
else
   cout<< "error opening abc.txt";
   myfile.close();
return 0;
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
}
 
   


