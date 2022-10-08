include<unistd.h>

	void string_to_int(char c[])
{
	int	int_num[2];
	int	cnt;

	cnt = 0;
	while (c[cnt])
	{
		int_num[cnt] = (int)c[cnt];
		cnt++;
	}
	write(1, &int_num, 1);
	write(1, &int_num[1], 1);
}

int	main(int argc, char *argv[])
{
	if (0 < argc)
		string_to_int(argv[1]);
	return (0);
}
