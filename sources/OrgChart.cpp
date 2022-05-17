#include "OrgChart.hpp" 
using namespace std;
  
  
   namespace ariel{
    
     
   OrgChart &OrgChart ::add_root(string name){
       return *this;
    }

    OrgChart &OrgChart:: add_sub(string s1, string s2){
        return *this;
    }
    string* OrgChart:: begin_level_order(){
        return NULL;
    }
    string* OrgChart:: end_level_order(){
        return NULL;
    }
    string* OrgChart:: begin_reverse_order(){ 
        return NULL;
    }
    string* OrgChart:: end_reverse_order(){
        return NULL;
    }
    string* OrgChart:: begin_preorder(){
        return NULL;
    }
    string* OrgChart:: end_preorder(){
        return NULL;
    }
    string* OrgChart:: reverse_order(){
        return NULL;
    }
    int* OrgChart:: begin(){
        return NULL;
    }
    int* OrgChart:: end(){
        return NULL;
    }
    ostream &operator <<(ostream &out, OrgChart &src){
        return out;
    }

   }
   // ostream, iterator