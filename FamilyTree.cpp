#include "FamilyTree.hpp"

using namespace family;


        Tree::Tree(string name){};

       Tree& Tree::addFather(string child ,string ans)
        {
           // Tree *t = new Tree("tree");
            return *this;
        }
      Tree& Tree::addMother(string,string)
        {
            //Tree *t = new Tree("tree");
            return *this;  
        }

      string Tree::relation(string)
        {
            string s="relation";
            return s;
        }

        string Tree::find(string)
        {
             string s="find";
            return s;
        }

        void Tree::display()
        {

        };

        void Tree::remove(string name)
        {

        };