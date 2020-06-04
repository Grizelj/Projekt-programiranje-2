char winner(char* x)
{
	//za igraca 'X'
	if (*(x + 0) == 'X' && *(x + 1) == 'X' && *(x + 2) == 'X')
	{
		return 'X';
	}
	else if (*(x + 3) == 'X' && *(x + 4) == 'X' && *(x + 5) == 'X')
	{
		return 'X';
	}
	else if (*(x + 6) == 'X' && *(x + 7) == 'X' && *(x + 8) == 'X')
	{
		return 'X';
	}
	else if (*(x + 0) == 'X' && *(x + 4) == 'X' && *(x + 8) == 'X')
	{
		return 'X';
	}
	else if (*(x + 2) == 'X' && *(x + 4) == 'X' && *(x + 6) == 'X')
	{
		return 'X';
	}
	else if (*(x + 0) == 'X' && *(x + 3) == 'X' && *(x + 6) == 'X')
	{
		return 'X';
	}
	else if (*(x + 1) == 'X' && *(x + 4) == 'X' && *(x + 7) == 'X')
	{
		return 'X';
	}
	else if (*(x + 2) == 'X' && *(x + 5) == 'X' && *(x + 8) == 'X')
	{
		return 'X';
	}

	//za igraca 'O'
	if (*(x + 0) == 'O' && *(x + 1) == 'O' && *(x + 2) == 'O')
	{
		return 'O';
	}
	else if (*(x + 3) == 'O' && *(x + 4) == 'O' && *(x + 5) == 'O')
	{
		return 'O';
	}
	else if (*(x + 6) == 'O' && *(x + 7) == 'O' && *(x + 8) == 'O')
	{
		return 'O';
	}
	else if (*(x + 0) == 'O' && *(x + 4) == 'O' && *(x + 8) == 'O')
	{
		return 'O';
	}
	else if (*(x + 2) == 'O' && *(x + 4) == 'O' && *(x + 6) == 'O')
	{
		return 'O';
	}
	else if (*(x + 0) == 'O' && *(x + 3) == 'O' && *(x + 6) == 'O')
	{
		return 'O';
	}
	else if (*(x + 1) == 'O' && *(x + 4) == 'O' && *(x + 7) == 'O')
	{
		return 'O';
	}
	else if (*(x + 2) == 'O' && *(x + 5) == 'O' && *(x + 8) == 'O')
	{
		return 'O';
	}


	return '/';
}