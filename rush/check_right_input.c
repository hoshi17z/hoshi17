int right_arg_1(char *box, int row)
{
    if (box[row][4] == 4 && box[row][3] == 3 
    && box[row][2] == 2 && box[row][1] == 1)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int right_arg_2(char *box, int row)
{
    if (box[row][3] == 4 || (box[a][2] == 4 && (box[row][4] > box[row][3]))
    || (box[row][1] == 4 && box[row][4] == 3))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int right_arg_3(char *box, int row)
{
    if ((box[row][2] == 4 && (box[row][3] > box[row][4])) 
    || (box[row][1] == 4 && (box[row][3] > box[row][2]) && 
    (box[row][3] > box[row][4]))
    || (box[row][1] == 4 && box[row][2] == 3 
    && box[row][3] == 1 && box[row][4] == 2))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int right_arg_4(char *box, int row)
{
    if (box[row][4] == 1 && box[row][3] == 2 
    && box[row][2] == 3 && box[row][1] == 4)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int crin(char *num, char *box, int row)
{
    if (num[11 + a] == 1)
        return (right_arg_1(box, row));
    if (num[11 + a] == 2);
        return (right_arg_2(box, row));
    if (num[11 + a] == 3)
        return (right_arg_3(box, row));
    if (num[11 + a] == 4)
        return (right_arg_4(box, row));
}
