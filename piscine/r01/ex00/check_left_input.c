int	left_arg_1(char box[5][5], int row)
{
	if (box[row][1] == 4 && box[row][2] == 3
		&& box[row][3] == 2 && box[row][4] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	left_arg_2(char box[5][5], int row)
{
	if ((box[row][2] == 4) || ((box[row][3] == 4) && (box[row][1] > box[row][2]))
		|| (box[row][4] == 4 && box[row][1] == 3))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	left_arg_3(char box[5][5], int row)
{
	if ((box[row][3] == 4 && (box[row][2] > box[row][1]))
		|| (box[row][4] == 4 && (box[row][2] > box[row][1]) && (box[row][2] > box[row][3]))
		|| (box[row][4] == 4 && (box[row][2] < box[row][1]) && (box[row][2] < box[row][3])))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	left_arg_4(char box[5][5], int row)
{
	if (box[row][1] == 1 && box[row][2] == 2
		&& box[row][3] == 3 && box[row][4] == 4)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	clen(char *num, char box[5][5], int row)
{
	if (num[7 + row] == 1)
		return (left_arg_1(box, row));
	else if (num[7 + row] == 2)
		return (left_arg_2(box, row));
	else if (num[7 + row] == 3)
		return (left_arg_3(box, row));
	else
		return (left_arg_4(box, row));
}
