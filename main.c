
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "writeTree.h"
#include "destroy.h"
#include "buildTree.h"
#include "nodeValue.h"
#include "valueaddchildren.h"
#include "remove.h"



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
 growtree(head);
//the following is some command
  //valueput(head);

  //printdata(head);
  adapt(head);
writeTree( head );
destroyTree(head);


  return 0;
}














