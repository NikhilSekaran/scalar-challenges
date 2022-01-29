/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
static int ll_size;

void delete_node(ListNode **head, int position) {

    if (ll_size == 0 or position > ll_size)
    {
        return;
    }


    if (position == 0)
    {// position 0 is handled here

        if (*head != NULL)
        {
            *head = (*head)->next;
            ll_size--;
        }
    }
    else
    {// for position greater than 0

        ListNode *temp = *head, *temp1;
        int count = 0;

        if (position < ll_size-1)
        {
            while (count < (position - 1))
            {
                temp = temp->next;
                count++;
            }

            if (temp != NULL && temp->next != NULL)
            {
                temp1 = temp->next->next;

                temp->next = temp1;

                ll_size--;
            }
        }
        else if (position == ll_size-1)
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = NULL;

            ll_size--;
        }

    }
}

void insert_new_node(ListNode **head, int position, int value)
{
    ListNode *node = new ListNode(value);

    if (ll_size == 0 && (position == 0 || position == -1))
    {// insert at position 0 when head is not created and size of ll is zero
        *head = node;

        ll_size++;
    }
    else
    {// insert at position when head is available and size of ll is not zero

        // inserting at position zero
        if (position == 0)
        {
            node->next = *head;

            *head = node;

            ll_size++;
        }
        else
        {
            ListNode *temp = *head;
            int count = 0;

            if (position == -1)
            {// position is -1, then insert the new node at the last

                // loop and go to last node
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }

                if (temp != NULL)
                {
                    temp->next = node;
                    node->next = NULL;

                    ll_size++;
                }
            }
            else if (position < ll_size)
            {// position is lesser than the size

                // loop till position - 1 to find the previous node
                while (count < (position - 1))
                {
                    temp = temp->next;
                    count++;
                }

                if (temp != NULL)
                {// insertion at the given position only if valid

                    node->next = temp->next;
                    temp->next = node;

                    ll_size++;
                }
            }
            else if (position == ll_size)
            {
                // loop and go to last node
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }

                if (temp != NULL)
                {
                    temp->next = node;
                    node->next = NULL;

                    ll_size++;
                }
            }
        }
    }
}


ListNode* Solution::solve(vector<vector<int> > &A) {

    ListNode *head = NULL, *temp;
    int col_0_val, col_1_val, col_2_val;

    ll_size = 0;

    for (unsigned int row = 0; row < A.size(); row++)
    {
        col_0_val = A[row][0];
        col_1_val = A[row][1];
        col_2_val = A[row][2];

        if (col_0_val == 0)
        {
            insert_new_node(&head, 0, col_1_val);
        }
        else if (col_0_val == 1)
        {
            insert_new_node(&head, -1, col_1_val);
        }
        else if (col_0_val == 2)
        {
            insert_new_node(&head, col_2_val, col_1_val);
        }
        else if (col_0_val == 3)
        {
            delete_node(&head, col_1_val);
        }
    }

    return head;
}
