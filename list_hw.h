/* This program uses code from "Algorithms in C, Third Edition,"
 *               by Robert Sedgewick, Addison-Wesley, 1998.
 * 
 * - Alexandra Stefan
*/
#ifndef LIST_HW_H
#define	LIST_HW_H

typedef int Item;
typedef struct node_struct * link;
typedef struct list_struct * list;  // Use pointers to hide the list 
  
list buildListOfInts();
list arrayToList(int arr[], int sz);
    
int run_student_tests();    
	
/* Creates a new link, that contains the value specified in the argument, 
 * and that points to next_in. 
 */
link newLink(Item value, link next_in);

void destroyLink(link the_link); 

void setLinkItem(link the_link, Item value);

void setLinkNext(link the_link, link next);

/*  Note that these functions do not have all the security checks.
E.g. not all the functions reading and setting members of a node pointer, 
check that the node is not NULL  */

Item getLinkItem(link the_link);

link getLinkNext(link the_link);




/* LIST  */

// Creates and returns an empty list.
list newList();

void destroyList(list the_list);

// Returns a pointer to the first node in the list.
link getFirst(list the_list);

// Uses the field variable.
int getLength(list my_list);  

// Iterates through list and counts nodes.
int computeLength(list my_list);  

