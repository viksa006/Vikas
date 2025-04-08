#include<iostream>
using namespace std;
class A

    public:
    void show()
    {cout<<"in A"<<endl;
    

};
class  b:public A
{public:
void show()
{cout<<"In B"<<endl;

}
};
int main()
{
    B ob;
    ob.show;
    return(0);

}