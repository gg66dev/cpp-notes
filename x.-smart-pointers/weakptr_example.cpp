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
* Weak ptr automanage the allocation and deallocation of memory.
* Only exists inside the scope where they are defined.
* Can be copied, and if the origina instance is deleted the copy is 
* pointing to a invalid value.
*/
int 
main()
{
    {
        weak_ptr<Entity> e0; 
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