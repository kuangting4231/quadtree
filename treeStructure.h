#include "stdio.h"
#include "stdlib.h"
#ifndef BUILDTREE_H_INCLUDED
#define BUILDTREE_H_INCLUDED

struct qnode {
  int level;
  double xy[2];
  struct qnode *child[4];
};
typedef struct qnode Node;



#endif // BUILDTREE_H_INCLUDED

