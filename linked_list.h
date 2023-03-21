typedef struct Node {
    int value;
    struct Node* next;
} Node;

Node* new_node(int data);
Node* new_head(void);
void push_node(Node* head, int value);
void pop_node(Node* head);
void display_list(Node* head);
void destroy_head(Node* head);
