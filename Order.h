typedef struct {
	struct Order* Onext;
	int order_number;
    int qty;
}Order;

typedef struct Order order;
typedef struct Order* OPtr;

typedef struct {
	OPtr headOPtr,tailOPtr;
	int Osize;
}Queue;


void enqueue_order(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->data=x;
  new_node->nextPtr= NULL;
  if(q->size != 0) (q->tailPtr)->nextPtr = new_node;
  else q->headPtr = new_node;
  q->size++;
  q->tailPtr=new_node;
  /*Finish enqueue */
 }
}


int dequeue_order(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
   q->headPtr=t->nextPtr;
   if(q->size==1) q->tailPtr=NULL;
   q->size--;
   free(t);
       /*Finish dequeue */
   return value;
   }
   printf("Empty queue");
   return 0;
}
