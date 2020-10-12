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
* Unique ptr automanage the allocation and deallocation of memory.
* only exists inside the scope where they are defined.
* Cant be copied.
*/
int 
main()
{
    {
        cout << "Enter into the scope" << endl;
        unique_ptr<Entity> entity = make_unique<Entity>();
        //unique_ptr<Entity> e0 = entity;// Throw error
        entity->Print();
        cout << "leaving the scope" << endl;
    }
    cout << "Out of the scope" << endl;
    return 0;
}