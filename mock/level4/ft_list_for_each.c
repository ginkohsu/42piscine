
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
	//	begin_list -> data = (*f) (begin_list -> data);// WRONG! TYPE ERROR
		(*f)(begin_list->data);
		begin_list = begin_list -> next;
	}
}
