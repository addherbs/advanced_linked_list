
void deleteOccurrences(list A, Item V) {
        link current = A->first;
        if(listIsNULL(A))
                return;
        while(current->next != NULL){
                if(current->next->item == V){
                        current = removeNext(A,current);
                        free(current);
                }
                current = current->next;
        }
        return;
}


void deleteOccurrences(list A, Item V) {
    
	if (listIsNULL(A) == 1) {
        return;
    }
	int i = 0;
    int n = A->length;
	link curr, prev;
	prev = A->first;
	
	for (i = 0, curr = A->first; (curr != NULL) && (i < n); curr = curr->next) {
		int flag = 0;
		if(curr->item == V){
			// Delete the item and set previous to next and also free the link
			
			if(i == 0){
				link first = A->first;
				link second = A->first->next;
				A->first = second;
				destroyLink(first);
			}else{
				prev->next = curr->next;
				i++;
				flag = 1;
			}
		}
		if(flag == 1){
			prev = curr->next;
		}else{
			prev = curr;	
		}
		
		
		i++;
    }
	return;
}
