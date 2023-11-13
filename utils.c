/*
 * this file content utils/helpers functions
 */

/**
 * _strlen - calculate the length of the string @str
 * @str: char pointer to string
 * Return: int representing the length of @str
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str && *str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * get_printfuncs - build the list of print funcs associated with their format
 * specifiers
 * Return: pointer to struct pfunc_t
 */
/*
pfunc_t **get_printfuncs()
{
	pfunc_t **printfuncs;

	printfuncs = malloc(3 * sizeof pfunc_t);

	if (!printfuncs)
		return (NULL);

	{
		{"c", ppchar},
		{"s", ppstr},
		{NULL, NULL}
	}

	for (i = 0; i <)

}
*/
