
	/*	if (ft_a_is_reverse_sort(data))
		{
			while (data.a.size != 0)
				data = ft_pb(data);
			while (data.b.size > 1)
			{
				data = ft_rrb(data);
				data = ft_pa(data);
			}
			data = ft_pa(data);
		}
	

int	ft_a_is_reverse_sort(t_data data)
{
	int	i;

	i = 0;
	if (data.a.size != 0)
	{
		while (i < data.a.size - 1)
		{
			if (data.a.tab[i] < data.a.tab[i + 1])
				return (0);
			i ++;
		}
	}
	return (1);
}

int	ft_search_max(t_data data)
{
	int	i;
	int	max;

	i = 1;
	if (data.a.size != 0)
		max = data.a.tab[0];
	while (i < data.a.size)
	{
		if (data.a.tab[i] > max)
		{
			max = data.a.tab[i];
		}
		i ++;
	}
	return (max);
}*/