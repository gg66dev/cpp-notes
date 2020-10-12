
/**
* Not using Smart Pointer example
***/

//#include <iostream>
//#include "Integer.h"

//void Display(Integer* p) {
//	if (!p) {
//		return;
//	}
//	std::cout << p->GetValue() << std::endl;
//}
//
//Integer* GetPointer(int value) {
//	Integer* p = new Integer{value};
//	return p;
//}
//
//void Operator(int value) {
//	Integer* p = GetPointer(value);
//	if (p == nullptr) {
//		p = new Integer{value};
//	}
//	p->SetValue(100);
//	Display(p);
//	delete p;
//	p = nullptr;
//	p = new Integer{};
//	*p = __LINE__;
//	Display(p);
//	delete p;
//}
//
//int main() 
//{
//
//	Operator(5);
//
//
//	system("pause");
//	return 0;
//}

/**
* Using Unique Pointer example
***/

#include <iostream>
#include <memory>

#include "Integer.h"

void Display(Integer* p) {
	if (!p) {
		return;
	}
	std::cout << p->GetValue() << std::endl;
}

Integer* GetPointer(int value) {
	Integer* p = new Integer{value};
	return p;
}

//void Store(std::unique_ptr<Integer> p)
void Store(std::unique_ptr<Integer>& p)
{
	std::cout << "Storing data into a file: " << p->GetValue() << std::endl;
}

void Operator(int value) {
	std::unique_ptr<Integer> p{ GetPointer(value) }; //is using direct initialization.
	if (p == nullptr) {
		//p = new Integer{value};
		p.reset(new Integer{ value }); //reset will delete previus asignation and create a new one.
	}
	p->SetValue(100);
	Display(p.get()); //get method return the underline pointer
	//delete p;
	//p = nullptr;
	//p = new Integer{};
	p.reset(new Integer{});
	*p = __LINE__;
	Display(p.get());
	//Store(std::move(p)); //the copy function of smart pointer is deleted, you can create copy of unique pointers 
				// we can use std::move and pass the pointer to the function (the pointer can't be used after the Store method) or call the pointer by reference ((std::unique_ptr<Integer>& p) )
	Store(p);
	*p = 200; //this with the std::move  alternative will be error, required call the reset method before the assignation.
	//delete p;
}

int main() 
{

	Operator(5);


	system("pause");
	return 0;
}


