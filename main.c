#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  int a;
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
  /*enqueue(&headPtr,&tailPtr,5);
  a=dequeue(&headPtr,&tailPtr);
  printf("%d\n",a);
  enqueue(&headPtr,&tailPtr,9);
  a=dequeue(&headPtr,&tailPtr);
  printf("%d\n",a);
  enqueue(&headPtr,&tailPtr,7);
  a=dequeue(&headPtr,&tailPtr);
  printf("%d\n",a);
  dequeue(&headPtr,&tailPtr);
  dequeue(&headPtr,&tailPtr);*/
  // 5 x 9 x 7 x 8 2 x

 //For struct Queue
  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
            if(x)printf("dequeing %d\n",x);
        }
        else {
       enqueue_struct(&q, atoi(argv[i]));
           
        }
 }
  return 0;
}
