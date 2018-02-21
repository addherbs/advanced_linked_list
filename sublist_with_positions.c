
list sublist(list A, list pos_list) {
	
	int currentPosition = 0;
	if (listIsNULL(A) == 1) {
        return;
    }
	
	if (listIsNULL(pos_list) == 1) {
        return;
    }
	int i = 0;
    int pos_list_len = pos_list->length;
	link curr;
	
	//Create a new List
	list newLList = newList();
	
	for (i = 0, curr = pos_list->first; (curr != NULL) && (i < pos_list_len); curr = curr->next) {
        
		currentPosition = curr->item ;
		int thisPostion = 0;
		link mainListLink = A->first;
		while (thisPostion != currentPosition){
			mainListLink = getLinkNext(mainListLink);
			thisPostion++;
		}
		int positionValue = getLinkItem(mainListLink);
		
		link p = newLink(positionValue, NULL);
		insertLink(newLList, NULL, p);
		
		i++;
    }
	
    return newLList;
}