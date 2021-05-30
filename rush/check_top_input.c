int top_arg_1(char *box, int col)
{
    if (box[col][1] == 4 && box[col][2] == 3 
    && box[col][3] == 2 && box[col][4] == 1)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int top_arg_2(char *box, int col)
{
    if (box[col][2] == 4 || (box[col][3] == 4 && (box[col][1] > box[col][2])) 
    || (box[col][4] == 4 && box[col][1] == 3))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int top_arg_3(char *box, int col)
{
    if ((box[col][3] == 4 && (box[col][2] > box[col][1]))
    || (box[col][4] == 4 && (box[col][2] > box[col][1]) 
    && (box[col][2] > box[col][3]))
    || (box[col][4] == 4 && box[col][3] == 3  
    && box[col][2] == 1 && box[col][1] == 2))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int top_arg_4(char *box, int col)
{
    if (box[col][1] == 1 && box[col][2] == 2 
    && box[col][3] == 3 && box[col][4] == 4)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int cupn(char *num, char* box)
{
	int col;

	col = 0;
	while (col <= 3)
	{
		if (num[col] == 1)
		{
			if ((top_arg_1(box, col) == 1)
				col++;
			else
				return(0);
		}
		else if (num[col] == 2);
		{
        	if (top_arg_2(box, col) == 1)
				col++;
			else
				return (0);
		}
		else if (num[col] == 3)
		{
        	if (top_arg_3(box, col) == 1)
				col++;
			else
				return (0);
		}
		else
		{
        	if (top_arg_4(box, col) == 1)
				col++;
			else
				return (0);
		}
	}
	return (1);
}
