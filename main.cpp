// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
    BST_312<int> bstI;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    cout << "Testing tree search" << endl;
    cout << "Searching for 'of'"<< endl;
    if(bst.isItemInTree("of")){
        cout << "Result=TRUE"<< endl;
    }else{
        cout << "Result=FALSE"<< endl;
    }
    cout << "Searching for 'star'"<< endl;
    if(bst.isItemInTree("star")){
        cout << "Result=TRUE"<< endl;
    }else{
        cout << "Result=FALSE"<< endl;
    }

    cout << "Testing 'makeEmpty'" << endl;
    bst.makeEmpty();
    cout << "The BST now has " << bst.countNodes() << " nodes" << endl;



    cout <<endl<< "Testing a bst of ints" << endl;
    for(int i=0;i<20;i++){
        bstI.insertItem(i);
    }
    cout << "postorder traversal is " << endl;
    print(bstI.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bstI.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bstI.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bstI.countNodes() << endl;
    int s1 = 18;
    bstI.deleteItem(s1);
    print(bstI.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bstI.countNodes() << endl;
    cout << endl;

    cout << "Testing tree search" << endl;
    cout << "Searching for '5'"<< endl;
    if(bstI.isItemInTree(5)){
        cout << "Result=TRUE"<< endl;
    }else{
        cout << "Result=FALSE"<< endl;
    }
    cout << "Searching for '99'"<< endl;
    if(bstI.isItemInTree(99)){
        cout << "Result=TRUE"<< endl;
    }else{
        cout << "Result=FALSE"<< endl;
    }

    cout << "Testing 'makeEmpty'" << endl;
    bstI.makeEmpty();
    cout << "The BST now has " << bstI.countNodes() << " nodes" << endl;

}


