#include <string>
#include <vector>
#include "doctest.h"
#include "OrgChart.hpp"

using namespace std;
using namespace ariel;

/*

        Yoel
         |
david -- noa  -- yarden
   |      
ariel --  tal         
           |
          lior

*/

TEST_CASE("A bad case"){

    OrgChart organiz;

organiz.add_root("Yoel").add_sub("Yoel", "david").add_sub("Yoel", "noa")
.add_sub("Yoel", "yarden").add_sub("david", "ariel").add_sub("david", "tal").add_sub("tal", "lior");


CHECK_THROWS(organiz.add_sub("tal", "david"));
CHECK_THROWS(organiz.add_sub("david", "noa"));
CHECK_THROWS(organiz.add_sub("noa", "yarden"));
CHECK_THROWS(organiz.add_sub("tal", "yoel"));
CHECK_THROWS(organiz.add_sub("ariel", "lior"));
CHECK_THROWS(organiz.add_sub("david", "david"));
CHECK_THROWS(organiz.add_sub("yarden", "lior"));
CHECK_THROWS(organiz.add_sub("noa", "tal"));
CHECK_THROWS(organiz.add_sub("noa", "ariel")); 


}

/*

        Yoel
         |
david -- noa  -- yarden
   |      
ariel --  tal         
           |
          lior

*/
TEST_CASE("good and bad"){
 
 OrgChart organiz;

organiz.add_root("Yoel").add_sub("Yoel", "david").add_sub("Yoel", "noa")
.add_sub("Yoel", "yarden").add_sub("david", "ariel").add_sub("david", "tal").add_sub("tal", "lior");

CHECK_NOTHROW(organiz.add_sub("Yoel", "david"));
CHECK_NOTHROW(organiz.add_sub("Yoel", "ariel"));
CHECK_THROWS(organiz.add_sub("yarden", "tal"));//
CHECK_NOTHROW(organiz.add_sub("Yoel", "tal"));// not directly
CHECK_THROWS(organiz.add_sub("noa", "tal"));//
CHECK_THROWS(organiz.add_sub("david", "david"));//

// CHECK(organiz.add_sub("Yoel", "david"));
// CHECK(organiz.add_sub("Yoel", "ariel"));
}


/* 

        Yoel
         |
david -- noa  -- yarden
   |      
ariel --  tal         
           |
          lior

*/


TEST_CASE("A good case"){
    OrgChart organiz;

//build the organization
organiz.add_root("Yoel").add_sub("Yoel", "david").add_sub("Yoel", "noa")
.add_sub("Yoel", "yarden").add_sub("david", "ariel").add_sub("david", "tal").add_sub("tal", "lior");

std:: vector<string> vector1 = {};


for(auto iter = organiz.begin_level_order(); iter != organiz.end_level_order(); iter++){
vector1.push_back(*iter); // add to the vector the employee


}

CHECK(vector1.at(0) == "Yoel");
CHECK(vector1.at(1) == "david");
CHECK(vector1.at(2) == "noa");
CHECK(vector1.at(3) == "yarden");
CHECK(vector1.at(4) == "ariel");
CHECK(vector1.at(5) == "tal");
CHECK(vector1.at(6) == "lior");


}

