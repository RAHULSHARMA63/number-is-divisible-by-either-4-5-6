#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a number: \n";
	cin>>a;
	
	a%4==0  || a%5==0  || a%6==0 ? cout<<"number is divisible by either 4,5,6": cout<<"number is not divisible by either 4,5,6";
	return 0;
}
