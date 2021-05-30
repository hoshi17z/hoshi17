char	*permutate_table(char box[5][5], int row)
{
	if (box[row][1] == 1 && box[row][2] == 2 && box[row][3] == 3 && box[row][4] == 4)
	{
		box[row][1] = 1;
		box[row][2] = 2;
		box[row][3] = 4;
		box[row][4] = 3;
	}
	else if (box[row][1] == 1 && box[row][2] == 2 && box[row][3] == 4 && box[row][4] == 3)
	{
		box[row][1] = 1;
		box[row][2] = 3;
		box[row][3] = 2;
		box[row][4] = 4;
	}
	else if (box[row][1] == 1 && box[row][2] == 3 && box[row][3] == 2 && box[row][4] == 4)
	{
		box[row][1] = 1;
		box[row][2] = 3;
		box[row][3] = 4;
		box[row][4] = 2;
	}
	else if (box[row][1] == 1 && box[row][2] == 3 && box[row][3] == 4 && box[row][4] == 2)
	{
		box[row][1] = 1;
		box[row][2] = 4;
		box[row][3] = 2;
		box[row][4] = 3;
	}
	else if (box[row][1] == 1 && box[row][2] == 4 && box[row][3] == 2 && box[row][4] == 3)
	{
		box[row][1] = 1;
		box[row][2] = 4;
		box[row][3] = 3;
		box[row][4] = 2;
	}
	else if (box[row][1] == 1 && box[row][2] == 4 && box[row][3] == 3 && box[row][4] == 2)
	{
		box[row][1] = 2;
		box[row][2] = 1;
		box[row][3] = 3;
		box[row][4] = 4;
	}
	else if (box[row][1] == 2 && box[row][2] == 1 && box[row][3] == 3 && box[row][4] == 4)
	{
		box[row][1] = 2;
		box[row][2] = 1;
		box[row][3] = 4;
		box[row][4] = 3;
	}
	else if (box[row][1] == 2 && box[row][2] == 1 && box[row][3] == 4 && box[row][4] == 3)
	{
		box[row][1] = 2;
		box[row][2] = 3;
		box[row][3] = 1;
		box[row][4] = 4;
	}
	else if (box[row][1] == 2 && box[row][2] == 3 && box[row][3] == 1 && box[row][4] == 4)
	{
		box[row][1] = 2;
		box[row][2] = 3;
		box[row][3] = 4;
		box[row][4] = 1;
	}
	else if (box[row][1] == 2 && box[row][2] == 3 && box[row][3] == 4 && box[row][4] == 1)
	{
		box[row][1] = 2;
		box[row][2] = 4;
		box[row][3] = 1;
		box[row][4] = 3;
	}
	else if (box[row][1] == 2 && box[row][2] == 4 && box[row][3] == 1 && box[row][4] == 3)
	{
		box[row][1] = 2;
		box[row][2] = 4;
		box[row][3] = 3;
		box[row][4] = 1;
	}
	else if (box[row][1] == 2 && box[row][2] == 4 && box[row][3] == 3 && box[row][4] == 1)
	{
		box[row][1] = 3;
		box[row][2] = 1;
		box[row][3] = 2;
		box[row][4] = 4;
	}
	else if (box[row][1] == 3 && box[row][2] == 1 && box[row][3] == 2 && box[row][4] == 4)
	{
		box[row][1] = 3;
		box[row][2] = 1;
		box[row][3] = 4;
		box[row][4] = 2;
	}
	else if (box[row][1] == 3 && box[row][2] == 1 && box[row][3] == 4 && box[row][4] == 2)
	{
		box[row][1] = 3;
		box[row][2] = 2;
		box[row][3] = 1;
		box[row][4] = 4;
	}
	else if (box[row][1] == 3 && box[row][2] == 2 && box[row][3] == 1 && box[row][4] == 4)
	{
		box[row][1] = 3;
		box[row][2] = 2;
		box[row][3] = 4;
		box[row][4] = 1;
	}
	else if (box[row][1] == 3 && box[row][2] == 2 && box[row][3] == 4 && box[row][4] == 1)
	{
		box[row][1] = 3;
		box[row][2] = 4;
		box[row][3] = 1;
		box[row][4] = 2;
	}
	else if (box[row][1] == 3 && box[row][2] == 4 && box[row][3] == 1 && box[row][4] == 2)
	{
		box[row][1] = 3;
		box[row][2] = 4;
		box[row][3] = 2;
		box[row][4] = 1;
	}
	else if (box[row][1] == 3 && box[row][2] == 4 && box[row][3] == 2 && box[row][4] == 1)
	{
		box[row][1] = 4;
		box[row][2] = 1;
		box[row][3] = 2;
		box[row][4] = 3;
	}
	else if (box[row][1] == 4 && box[row][2] == 1 && box[row][3] == 2 && box[row][4] == 3)
	{
		box[row][1] = 4;
		box[row][2] = 1;
		box[row][3] = 3;
		box[row][4] = 2;
	}
	else if (box[row][1] == 4 && box[row][2] == 1 && box[row][3] == 3 && box[row][4] == 2)
	{
		box[row][1] = 4;
		box[row][2] = 2;
		box[row][3] = 1;
		box[row][4] = 3;
	}
	else if (box[row][1] == 4 && box[row][2] == 2 && box[row][3] == 1 && box[row][4] == 3)
	{
		box[row][1] = 4;
		box[row][2] = 2;
		box[row][3] = 3;
		box[row][4] = 1;
	}
	else if (box[row][1] == 4 && box[row][2] == 2 && box[row][3] == 3 && box[row][4] == 1)
	{
		box[row][1] = 4;
		box[row][2] = 3;
		box[row][3] = 1;
		box[row][4] = 2;
	}
	else if (box[row][1] == 4 && box[row][2] == 3 && box[row][3] == 1 && box[row][4] == 2)
	{
		box[row][1] = 4;
		box[row][2] = 3;
		box[row][3] = 2;
		box[row][4] = 1;
	}
	else
	{
		box[row][1] = 1;
		box[row][2] = 2;
		box[row][3] = 3;
		box[row][4] = 4;
	}
	return (*box);
}
