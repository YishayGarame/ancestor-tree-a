#include "doctest.h"
#include "FamilyTree.hpp"
#include <string>
using namespace std;
using namespace family;


TEST_CASE("This test case check the following functuons : addFather(),relation(),find()") 
{

    Tree a("Avi");
    a.addFather("Avi","Benny");
    a.addFather("Benny","Caleb");
    a.addFather("Caleb","Dani");
    a.addFather("Dani","Emmet");
    a.addFather("Emmet","Fredy");

    //check relation() function

    CHECK(a.relation("Avi") ==string("Just Me"));
    CHECK(a.relation("Benny")==string("father"));
    CHECK(a.relation("Caleb")==string("grandfather"));
    CHECK(a.relation("Dani")==string("great-grandfather"));
    CHECK(a.relation("Emmet")==string("great-great-grandfather"));
    CHECK(a.relation("Fredy")==string("great-great-great-grandfather"));
    CHECK(a.relation("avrahm")==string("unrelated"));

    //check find() function

    CHECK(a.find("Just Me") == string("Avi"));
    CHECK(a.find("father") == string("Benny"));
    CHECK(a.find("grandfather") == string("Caleb"));
    CHECK(a.find("great-grandfather") == string("Dani"));
    CHECK(a.find("great-great-grandfather") == string("Emmet"));
    CHECK(a.find("great-great-great-grandfather") == string("Freddy"));

    CHECK_THROWS_AS(a.find("uncle"),std::exception);
    CHECK_THROWS_AS(a.find("son"),std::exception);
    CHECK_THROWS_AS(a.find("brother"),std::exception); 
    CHECK_THROWS_AS(a.find("great-great-great-great-great-grandfather"),std::exception);
    CHECK_THROWS_AS(a.find("adopted"),std::exception);
    CHECK_THROWS_AS(a.find("friend"),std::exception);



 











    /* Add more checks here */
}