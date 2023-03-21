#include <stdio.h>
#include "../linked_list.h"

int main(void) {
    Node *head = new_head();
    push_node(head, 1);
    push_node(head, 2);
    push_node(head, 3);

    display_list(head);
}
