#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "writeTree.h"
#include "treeStructure.h"
#include "buildTree.h"

void destroyTree(Node** quadtree)
{
    int i =0;
    Node* node = *quadtree
    if (NULL==node)
    {
        return;
    }
    else
    {
        for(i=0;i<4;i++)
        {
            destroyTree(&node->child[i])
        }
        free(node);
            node = NULL;
     }
   node = NULL;

}




