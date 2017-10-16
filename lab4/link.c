int add_link_table_node(link_table* ptr_link_table,link_table_node* ptr_node)
{
	if (ptr_link_table == NULL ||ptr_node == NULL)
	{
		return FAILURE;
	}
	ptr_node->ptr_next =NULL;
	
	if (ptr_link_table->ptr_head == NULL)
	{
		ptr_link_table->ptr_head = ptr_node;
	}
	else
	{
		link_table_node* ptr = ptr_link_table->ptr_head;
		while(ptr->ptr_next != NULL)
		{
			ptr = ptr->ptr_next;
		}
		ptr->ptr_next = ptr_node;
	}
	ptr_link_table->sum_of_nodes += 1;
	return SUCCESS;
}

