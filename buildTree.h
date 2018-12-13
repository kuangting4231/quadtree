#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "writeTree.h"
#include "treeStructure.h"
#include "buildTree.h"
#ifndef BUILDTREE_H_INCLUDED
#define BUILDTREE_H_INCLUDED


Node *makeNode( double x, double y, int level );
void makeChildren( Node *parent );

#endif // BUILDTREE_H_INCLUDED
