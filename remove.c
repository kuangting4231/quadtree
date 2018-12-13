#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "remove.h"

void removeChildren(Node *parent)
{int i;
    if (parent->child[0]!= NULL )
    {
        for (i=0;i<4;i++)
        {
            free(parent->child[i]);
            parent->child[i]=NULL;
        }
    }

}


