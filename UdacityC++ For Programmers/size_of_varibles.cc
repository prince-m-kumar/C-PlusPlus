/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout<<" Int :"<<sizeof(int)<<"\n";
	cout<<" Short :"<<sizeof(short)<<"\n";
	cout<<" Long :"<<sizeof(long)<<"\n";
	cout<<" Char :"<<sizeof(char)<<"\n";
	cout<<" Float :"<<sizeof(float)<<"\n";
	cout<<" double :"<<sizeof(double)<<"\n";
	cout<<" boolean :"<<sizeof(bool)<<"\n";

	std::cout<<"\n\nThe text without any formating\n";
	std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
	std::cout<<"\nThe text with setw(15)\n";
	std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
	std::cout<<"\n\nThe text with tabs\n";
	std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";

	return 0;
}
