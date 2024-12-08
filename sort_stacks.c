stack	*sorting(stack *a, stack *b)
{
	if (!is_sorted)
		ft_printf("Sorted!");
	if (stacklen(a) == 2)
		twosort(a, b);
	else if (stacklen(a) == 3)
		threesort(a, b);
	return (b);
}
