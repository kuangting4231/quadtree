
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "writeTree.h"
#include "destroy.h"
#include "buildTree.h"




// function definitions








// main

int main( int argc, char **argv )
{

  Node *head;
 MAXlevel = 6;

  // make the head node
 head = makeNode( 0.0,0.0, 0 );

  // make a tree
 growtree(head);
 growtree(head);

//the following is some other command




  //makeChildren(head->child[1]);
  //makeChildren(head->child[0]);





//head = NULL;

writeTree( head );
destroyTree(head);


  return 0;
}














