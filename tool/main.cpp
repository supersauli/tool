#include "CallBack.h"
#include <iostream>
#include <tuple>
using namespace std;
template<class ...T>
struct sSize;

template<class T,class ...R>
struct sSize<T,R...>
{

	
	enum {
		size = sSize<R...>::size + 1,
	};
};

template<class T>
struct sSize<T> 
{
	enum {
		size = 1,
	};
};

//template <class ...T>
//int  tSize(T)



int main() {

	cout << sSize<int, int, int,double>::size << endl;

	
	//typename SSArg<int,int>::Type::Type mArg(10,20.333);
	//std::tuple<int, int> mArg = SaveArg(10,20);


	//cout << get<0>(mArg) << endl << get<1>(mArg) << endl;
		

	
	system("pause 10");

	return 0;
}

