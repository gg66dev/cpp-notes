#include <iostream>

//the functions and classes for managing threads are declared in <thread>
#include <thread>

void hello()
{
    std::cout<<"Hello Concurrent World\n";
}


int main()
{
	//thread has to have an initial function, where the new thread of execution begins. 
 	//std::thread object named t has the new hello() function as its initial function.   
	std::thread t(hello);   
 	//the call to join() causes the calling thread (in main()) to wait for the 
	//	thread associated with the std::thread object, in this case, t.   
	t.join();

	system("pause");
}