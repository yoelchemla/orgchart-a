#pragma once
#include <vector>
#include <string>
#include<iostream>

using namespace std;

namespace ariel{

struct Node{

    vector<Node> child;
    string name;
};

class OrgChart{

    Node root;

 public:
    

    OrgChart(){} //constructor 
    
    OrgChart &add_root(string name);
    OrgChart &add_sub(string s1, string s2);
    
    string *begin_level_order();
    string *end_level_order();
    string *begin_reverse_order();
    string *end_reverse_order();
    string *begin_preorder();
    string *end_preorder();
    string *reverse_order();
    
    int *begin(); //the demo file require int and not a string
    int *end();  //the demo file require int and not a string
 
    friend ostream &operator <<(ostream &out, OrgChart &src);
};


}
