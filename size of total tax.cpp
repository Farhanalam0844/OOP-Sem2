#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile("stu.txt");
	long begin,end;
  begin=infile.tellg();
  cout<<"The initial position of the taxt in the stu is: "<<begin<<endl;
  infile.seekg(0,ios::end);
  end=infile.tellg();
  cout<<"The final position of stu taxt is: "<<end<<endl;
  infile.close();
  cout<<"The total size of the file is (end-begin): "<<(end-begin)<<" bytes";
  infile.close();

  return 0;
}
