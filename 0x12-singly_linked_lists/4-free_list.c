void free_list(list_t *head)
{
	list_t *ptr;
	if (head)
	{
		ptr = head->next;
		free(head);
		free_list(ptr);
	}
}
