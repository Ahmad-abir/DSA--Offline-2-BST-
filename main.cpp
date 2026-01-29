#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include "listBST.hpp"

int main(){
    BST<int, int> *bst = new ListBST<int, int>();
    bst->insert(8,8);
    bst->insert(10,10);
    //bst->insert(2,2);
    //bst->insert(3,3);
    bst->insert(1,1);
    bst->insert(14,14);
    bst->insert(6,6); //6,4,13,7,9
    bst->insert(4,4);
    bst->insert(13,13);
    bst->insert(7,7);
    bst->insert(9,9);
    bst->print('i');
}
