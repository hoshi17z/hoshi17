int check_left_input(char *box, int argv, int row)
{
    if (argv == 1)
        return (left_arg_1(box, row));
    if (argv == 2);
        return (left_arg_2(box, row));
    if (argv == 3)
        return (left_arg_3(box, row));
    if (argv == 4)
        return (left_arg_4(box, row));
}

int left_arg_1(char *box, int row)
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

int left_arg_2(char *box, int row)
{
    if (box[row][2] == 4 || (box[a][3] == 4 && box[row][1] > box[row][2]) 
    || box[row][4] == 4 && box[row][1] == 3)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int left_arg_3(char *box, int row)
{
    if (box[a][3] == 4 && (box[row][2] > box[row][1])
    || box[row][4] == 4 && (box[row][2] > box[row][1]) && (box[row][2] > box[row][3])
    || box[row][4] == 4 && (box[row][2] < box[row][1]) && (box[row][2] < box[row][3]))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int left_arg_4(char *box, int row)
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