#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Entity
{
public:
    Entity()
    {
        cout << "Create Entity!" << endl;        
    }

    ~Entity()
    {
        cout << "Destroy Entity!" << endl;
    }

    void Print() {
        cout << "Print!" << endl;
    }
};

/*
* Shared ptr automanage the allocation and deallocation of memory.
* Only exists inside the scope where they are defined.
* Can be copied, and if the copy exists outside the scope the original pointer
* the instance is keeping alive with the copy pointer.
*/
int 
main()
{
    {
        shared_ptr<Entity> e0; 
        {
            cout << "Enter into the scope" << endl;
            shared_ptr<Entity> entity = make_shared<Entity>();
            e0 = entity;
            entity->Print();
            cout << "leaving the first scope" << endl;
        }
        cout << "Out of the first scope" << endl;
        cout << "leaving the second scope" << endl;
    }
    cout << "Out of the second scope" << endl;
    return 0;
}