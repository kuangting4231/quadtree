
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "writeTree.h"
#include "treeStructure.h"
#include "buildTree.h"

// function definitions







// main

int main( int argc, char **argv ) {

  Node *head;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );

  // make a tree
  makeChildren( head );
  makeChildren( head->child[1] );
  makeChildren(head->child[2]);

  // print the tree for Gnuplot
  writeTree( head );

  return 0;
}
void destroyTree(Node** quadtree)
{
    int i =0;
    Node* node = *quadtree;
    if (NULL==node)
    {
        return;
    }
    else
    {
        for(i=0;i<4;i++)
        {
            destroyTree(&node->child[i]);
        }
        free(node);
            node = NULL;
     }
   node = NULL;

}
void removeChildren(Node *parent)
{int i;
    for (i=0;i<4;i++)
{

    if (parent->child[i]== NULL )
    {
        for (i=0;i<4;i++)
        {
            removeChildren(parent->child[i]);
        }
    }
    else
    {
        destroyTree(&parent);
    }
}
}









