#include<iostream>
using namespace std;
//template <class Type1,class Type2>
template <typename Type1,typename Type2>
void fun(Type1 var1,Type2 var2);
int main()
{
	int x = 10;
	char ch = 'A';
	float f = 22.7;
	
	fun(x,ch);	
	fun(ch,f);	
	fun(f,x);	
}
template <class Type1,class Type2>
void fun(Type1 var1,Type2 var2)
{
	cout <<"In fun function..." << endl;
	cout <<"var1 = " << var1 << " var2 = " << var2 << endl;
}
