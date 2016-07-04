#ifndef _CALL_BACK_H__
#define  _CALL_BACK_H__
#include <tuple>

void myprintf(int a ,int b)
{

};
template<class ...T>
struct SArg;
template<class ...T>
struct SArg<T...> 
{
	void myPrintf(T ...arg) {
		myprintf(arg...);
	}
	//SArg(T... arg) {
		typedef std::tuple<T...> Type;
	//}
};

template<class ...T>
struct SSArg;
	
template<class ...T>
std::tuple<T...>  SaveArg(T...arg) {
	 return  typename SArg<T...>::Type (arg...);
};
//template<class ...T> 
//struct ArgType;
//template<class ...T> 
//struct ArgType {
//
//};
//
template<class ReturnType ,class RunType>
class CallBack {

public:


	ReturnType R()
	{
				
	
	}

private:
	typedef (ReturnType)()



};




#endif
