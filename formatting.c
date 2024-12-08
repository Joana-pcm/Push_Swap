char	**formatting(int ac, char **av)
{
	int	i;

	i = 0;
	av = ft_split(av[i + 1], ' ');
	while (av[i++] != 0)
		av[i] = trim_start(av[i]);
	return (av);
}

char	*trim_start(char *s)
{
	int	n;

	n = -1;
	while (s[++n] && (s[n] == '0' || s[n] == '+'))
	{
		if (s[n] == '0' && s[n + 1] == '\0')
			return ("0");
	}
	//go and free the s in substr later
	return (ft_substr(s, n, ft_strlen(s)));
}
