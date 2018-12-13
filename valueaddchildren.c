#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "buildTree.h"
#include "remove.h"
#include "nodeValue.h"
#include "valueaddchildren.h"


void valueput(Node* node)//Add an extra integer (int flag) to the quadtree Node data structure.
{
    int i;
    double value1;

    if (node->child[0]== NULL)
    {
     value1=nodeValue( node, 0.0);
     if(value1<-0.5)
     {
      node->flag=-1;
     }

     else if(value1>0.5)
      node->flag=1;

    }
    else
    {
        node->flag=0;
        for (i=0;i<4;i++)
        {
          valueput(node->child[i]);
        }
    }

}

void addChildren(Node *node)//change the tree
{
    int count=0,i;

    if(node->child[0]==NULL&&node->flag==1&&node->level<MAXlevel)
    {   add++;
        makeChildren(node);

          }

    else if(node->child[0]!=NULL)
    {
        for (i=0;i<4;i++)
        {if (node->child[i]->flag==-1)
            count++;}

        if (count==4)
        {
        removeChildren(node);

        re++;
        }
        else
        {
              for (i=0;i<4;i++)
              addChildren(node->child[i]);
        }
    }

}




void printdata(Node *node)//print the data of add and remove
{
    add=0;
    re=0;
    addChildren(node);
    printf("add children=%d\n",add);
    printf("remove children=%d\n",re);

}


void adapt( Node *head )
{do
{
    valueput(head);
    printdata(head);
}while(add!=0&&re!=0);

}
