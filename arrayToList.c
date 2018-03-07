
list arrayToList(int arr[], int sz)  {
	int i; 		
	link p, new_p;
	list A = newList();
	
	p = newLink(arr[0], NULL);
	insertLink(A, NULL, p);

	for (i = 1; i < sz; i++)
	{
		new_p = newLink(arr[i], NULL);
		insertLink(A, p, new_p);
		p = new_p;
	}
	
	return A;
}
