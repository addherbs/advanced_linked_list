
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
