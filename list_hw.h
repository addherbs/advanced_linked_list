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
