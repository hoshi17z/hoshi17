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

int check_top_input(char *box, int argv, int col)
{
    if (argv == 1)
        return (top_arg_1(box, col));
    if (argv == 2);
        return (top_arg_2(box, col));
    if (argv == 3)
        return (top_arg_3(box, col));
    if (argv == 4)
        return (top_arg_4(box, col));
}
