#include<iostream>
using namespace std;
class A{
public:	
virtual void show()
{
cout<<"HI,i am Class A"<<endl;
}
};
class B:public A{
public:
void show()
{
cout<<"HI,i am Class B"<<endl;
}
};
class C:public A{

public:
void show()
{
cout<<"HI,i am Class C"<<endl;
}
};
int main()
{
A obj1;
B obj2;
C obj3;
A*ptr;
ptr=&obj1;
ptr->show();
ptr=&obj2;
ptr->show();
ptr=&obj3;
ptr->show();

}
