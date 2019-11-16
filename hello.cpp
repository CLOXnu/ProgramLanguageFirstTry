#include<iostream>
using namespace std;

//class A
class A
{
	int aaa; //private
	
public:
	static int aab;
	A(int aaa);
	A(const A &a);
	~A();
	void aabPlus();
	friend void friendFunction(A a);
	
};


A :: A(int aaa)
{
	this -> aaa = aaa;
}

A :: A(const A &a)
{
	this -> aaa = a.aaa;
	cout << "copy construction" << endl;
}

A :: ~A()
{
	//delete this->a;
	cout << "A is being deleted" << endl;
}

void A :: aabPlus()
{
	aab++;
}

void friendFunction(A a)
{
	cout << "Friend function can read a = " << a.aaa << endl;
}

//class B
class B
{
protected:
	int bbb;

public:
	void setbbb(int bbb)
	{
		this -> bbb = bbb;
	}
	int getbbb()
	{
		return this -> bbb;
	}

	virtual void abstractFunction() = 0;//抽象函数
	virtual void overrideFunction()
	{
		cout << "origin function" << endl;
	}
};

// class C
class C: public A, public B
{
public:
	C();
	void overLoad();
	void overLoad(int ccc);
	void overLoad(bool ccc);
	C operator +(const C& c)
	{
		C result;
		result.bbb = this->bbb + c.bbb;
		return result;
	}

	void abstractFunction()
	{
		cout << "abtractFunction" << endl;
	}
	void overrideFunction()
	{
		cout << "overrided function" << endl;
	}
};

C :: C() : A(10)
{
	
}

void C :: overLoad()
{
	cout << "overLoad()" << endl;
}

void C :: overLoad(int ccc)
{
	cout << "overLoad(int) : " << ccc << endl;
}

void C :: overLoad(bool ccc)
{
	cout << "overLoad(bool) : " << ccc << endl;
}


inline int max(int num1,int num2)
{
	return (num1 > num2) ? num1 : num2;
}


int A::aab = 0;
int main()
{
	A one(3);
	A two = one;

	one.aabPlus();
	one.aabPlus();
	one.aabPlus();
	cout << "aab = " << A::aab << endl;

	C three;
	three.setbbb(10);
	cout << "getbbb() = " << three.getbbb() << endl;
	three.overLoad(true);
	three = three + three;
	cout << "getbbb() = " << three.getbbb() << endl;
	three.abstractFunction();
	three.overrideFunction();

	friendFunction(one);

	cout << "max(2,20): " << max(2,20) << endl;

	return 0;
}
