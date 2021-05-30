int bottom_arg_1(char box[5][5], int col)
{
    if (box[col][4] == 4 && box[col][3] == 3 
    && box[col][2] == 2 && box[col][1] == 1)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int bottom_arg_2(char box[5][5], int col)
{
    if (box[col][3] == 4 || (box[col][2] == 4 && (box[col][4] > box[col][3]))
    || (box[col][1] == 4 && box[col][4] == 3))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int bottom_arg_3(char box[5][5], int col)
{
    if ((box[col][2] == 4 && (box[col][3] > box[col][4])) 
    || (box[col][1] == 4 && (box[col][3] > box[col][2]) && 
    (box[col][3] > box[col][4]))
    || (box[col][1] == 4 && box[col][2] == 3 
    && box[col][3] == 1 && box[col][4] == 2))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int bottom_arg_4(char box[5][5], int col)
{
    if (box[col][4] == 1 && box[col][3] == 2 
    && box[col][2] == 3 && box[col][1] == 4)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int cdwn(char *num, char box[5][5])
{
	int col;

	col = 4;
	while (col <= 7)
	{
    	if (num[col] == 1)
		{
        	if (bottom_arg_1(box, col) == 1)
				col++;
			else
				return (0);
		}
   		if (num[col] == 2)
		{
        	if (bottom_arg_2(box, col) == 1)
				col++;
			else
				return (0);
		}
		if (num[col] == 3)
		{
        	if (bottom_arg_3(box, col) == 1)
				col ++;
			else
				return (0);
		}
		if (num[col] == 4)
		{
        	if (bottom_arg_4(box, col) == 1)
				col ++;
			else
				return (0);
		}
	}
	return (1);
}
