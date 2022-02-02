#include<iostream>
using namespace std;

 class ListNode {
     public:
        int val;
        ListNode *next;

        ListNode(int x) : val(x), next(NULL) {}
 };

 ListNode *head = NULL;

void insert_node(int position, int value) {
    // @params position, integer
    // @params value, integer

    ListNode *node = new ListNode(value);
    ListNode *temp;
    
    // as indexing of node is from 1, count is 1
    int count = 1;

    if (head == NULL && position == 1)
    {// position 1 is handled here without head
        head = node;
    }
    else if (head != NULL && position == 1)
    {// position 1 is handled here with head existing
        node->next = head;
        head = node;
    }
    else
    {// for position greater than 1

        temp = head;

        // loop till position - 1 to find the previous node
        while (count < (position - 1))
        {
            temp = temp->next;
            count++;
        }

        if (temp != NULL)
        {// insertion at the given position

            node->next = temp->next;
            temp->next = node;
        }
    }
}

void delete_node(int position) {
    // @params position, integer

    ListNode *temp = head, *temp1;

    // as indexing of node is from 1, count is 1
    int count = 1;

    if (position == 1)
    {// position 1 is handled here
        
        if (head != NULL)
        {
            head = head->next;
        }

        // free(temp);
    }
    else
    {// for position greater than 1

        while (count < (position - 1) && temp != NULL)
        {
            temp = temp->next;
            count++;
        }

        if (temp != NULL && temp->next != NULL)
        {
            temp1 = temp->next->next;
            
            // free(temp->next);
            
            temp->next = temp1;
        }
    }
}


void print_ll() {
    // Output each element followed by a space

    if (head != NULL)
    {
        ListNode *temp = head;

        // iterate all nodes to print the node data
        while (temp->next != NULL)
        {
            // print the current node data
            cout << temp->val << " ";
            
            // goto next node
            temp = temp->next;
        }

        cout << temp->val;
    }
}
