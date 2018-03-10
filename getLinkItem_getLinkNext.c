Item getLinkItem(link the_link) {
    if (the_link != NULL) {
        return the_link->item;
    } else {
        printf("\n getLinkItem: Empty link. Returned -1.");
        return -1; // NOTE: This line can be improved.
    }
}

link getLinkNext(link the_link) {
    if (the_link != NULL) {
        return the_link->next;
    } else {
        return NULL;
    }
}