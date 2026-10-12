#include<stdio.h>
#include<stdbool.h>
int main()
{
    int x, y;
    struct dian
    {
        int x;
        int y;
    };
    bool ma[23][23];
    dian zhong;
    scanf("%d" "%d" "%d" "%d", &zhong.x, &zhong.y, &x, &y);
    zhong.x += 2;
    zhong.y += 2;
    x += 2;
    y += 2;
    ma[x][y] = true;
    ma[x - 1][y - 2] = true;
    ma[x - 2][y - 1] = true;
    ma[x - 2][y + 1] = true;
    ma[x - 1][y + 2] = true;
    ma[x + 1][y - 2] = true;
    ma[x + 2][y - 1] = true;
    ma[x + 2][y + 1] = true;
    ma[x + 1][y + 2] = true;
    long long wei[23][23] = { 0 };
    for (int i = 2;i <= zhong.y;i++)
    {
        wei[2][i] = 1;
    }
    for (int i = 2;i <= zhong.y;i++)
    {
        wei[i][2] = 1;
    }

    for (int x = 3;x <= zhong.x;x++)
    {
        for (int y = 3;y <= zhong.y;y++)
        {
            if (ma[x][y])
                wei[x][y] = 0;
            else wei[x][y] = wei[x - 1][y] + wei[x][y - 1];


        }
    }
    printf("%lld", wei[zhong.x][zhong.y]);

    return 0£»
}