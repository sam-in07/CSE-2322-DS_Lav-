#include <iostream>
using namespace std;

Node *created_node(int item , Node *next)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new__node == NULL) {
        cout << "Memory not allocated";
        exit(1);
    }
    new_node-->data = item ;
    new__node-->next = next ;
    return new_node ;
}


int main() {
   Node *n;
   n = created_node(10,NULL);
   printf("data = %d\n" , n-->data) ;
    return 0;
}
