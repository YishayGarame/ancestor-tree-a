#include <iostream> 
#include <string> 
using namespace std; 

namespace family
{
    class Tree 
    {
    public:

    Tree(string name);

        Tree& addFather(string child,string father);
        Tree& addMother(string child,string mother);
        string relation(string relation);
        string find(string name);
        void display();
        void remove(string name);

    };


}