int *permutate_table(int *box, int row)
{
    int sum;

    sum = box[row][1] + box[row][2] + box[row][3] + box[row][4];
    while (sum != 10)
    {
        box[row][1] = rand_num;
        box[row][2] = rand_num;
        box[row][3] = rand_num;
        box[row][4] = rand_num;

        sum = box[row][1] + box[row][2] + box[row][3] + box[row][4];
    }
    return (box);
}