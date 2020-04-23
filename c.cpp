/*********************************************************
  > File Name: c.cpp
  > Author: ims
  > Created Time: Thu Apr 23 13:59:51 2020
 *********************************************************/

#include<iostream>
class Base{
    public:
        virtual ~Base()=0;
};
Base::~Base()
{
    //cout<<"~Base()"<<endl;
}

class Drive :public Base{
    public:
        virtual ~Drive(){};
};
int main()
{
    Drive d;
    return 0;
}
