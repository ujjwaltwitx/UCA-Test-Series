


typedef struct {
    int arr[100];
    int start;
    int end;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *q1 = malloc(sizeof(MyQueue)+1000*sizeof(int));
    q1->start = 0;
    q1->end = 0;
    return q1;
}

void myQueuePush(MyQueue* obj, int x) {
   obj->arr[obj->end] = x;  
   obj->end++;
}

int myQueuePop(MyQueue* obj) {
    int n = obj->arr[obj->start];
    obj->start++;
    return n;
}

int myQueuePeek(MyQueue* obj) {
    return obj->arr[obj->start];
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->end == obj->start;
}

void myQueueFree(MyQueue* obj) {
    obj->start = 0;
    obj->end = 0;
}

