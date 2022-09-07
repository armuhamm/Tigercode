#include<iostream>
using namespace std;

struct bigone
{
	int serno;
	char text[1000];
}
bo={123,"This is a big structure"};

void valfunc(bigone v1);
	void ptrfunc(const bigone *p1);
	void reffunc(const bigone &r1);
int main()
{
	valfunc(bo);
	ptrfunc(&bo);
	reffunc(bo);
}

	void valfunc(bigone v1)
{
	std::cout<<'\n'<<v1.serno;
	std:: cout<<'\n'<<v1.text;
}
        void ptrfunc(const bigone *p1)
{
   cout<<'\n'<<p1->serno;
   cout<<'\n'<<p1->text;
}
        void reffunc(const bigone &r1)
{
   cout<<'\n'<<r1.serno;
   cout<<'\n'<<r1.text;
}



