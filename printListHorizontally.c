void printListHorizPointer(list my_list) {
    if (listIsNULL(my_list) == 1) {
        return;
    }


    int i = 0;
    int n = my_list->length;
    link curr;
    printf("\n List length = %d\nList items:    ", my_list->length);
    for (i = 0, curr = my_list->first; (curr != NULL) && (i < n); curr = curr->next) {
        printf("%-11d  ", curr->item);
        i++;
    }
    printf("\n");
    printf("List pointers: ");
    for (i = 0, curr = my_list->first; (curr != NULL) && (i < n); curr = curr->next) {
        printf("%p ", curr);
        i++;
    }
    printf("\n");
}
