#ifndef LINKED_LIST_H


// Link (node) struct
struct Numbers
{
	unsigned int number;
	struct Numbers* next;
};

/*
	This function adding number to the top to the linked list
*/
void add_new_number(Numbers** list, unsigned int numberToAdd);

/*
	This function delete number to the top to the linked list
*/
int delete_number(Numbers** list);

Numbers* crateNode(unsigned int numberAdd);
#endif /* LINKED_LIST_H */