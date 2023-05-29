#include<stdio.h>
#include <math.h>
int chess[8][8] = { { 2, 3, 4,6,5,4,3, 2 }, {1,1,1,1,1,1,1,1}, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 }, { 0,0,0,0,0,0,0,0 }, { 7,7,7,7,7,7,7,7 }, { 8,9,10,11,12,10,9,8 } };
//  abyad: 1 3askary 2 tabya 3 hosan 4 feel 5 wazeer 6 malek, eswed: 7 3askary 8 tabya 9 hossan 10 feel 11 wazeer 12 malek
int soldierB(int i, int j, int i2, int j2)
{
	if (abs(i2 - i) == 1 && chess[i2][j2] == 0)
	{
		if (chess[i][j] == 7)
		{
			chess[i2][j2] = 7;
			chess[i][j] = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int z = 0; z < 8; z++)
				{
					printf("%d\t", chess[k][z]);
				}
				printf("\n");
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (abs(i2 - i) == 1 && abs(j2 - j) == 1 && chess[i2][j2] < 6)
	{
		if (chess[i][j] == 7)
		{
			chess[i2][j2] = 7;
			chess[i][j] = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int z = 0; z < 8; z++)
				{
					printf("%d\t", chess[k][z]);
				}
				printf("\n");
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
		return 1;
}
int malek(int i, int j, int i2, int j2)
{
	if (abs(i2 - i) == 1 || abs(j2 - j) == 1 )
	{
		if (chess[i][j] == 6)
		{
			if (chess[i2][j2] == 0 || chess[i2][j2] > 6)
			{
				chess[i2][j2] = 6;
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
				return 1;
		}
		else
		{
			if (chess[i2][j2] == 0 || chess[i2][j2] < 6)
			{
				chess[i2][j2] = 6;
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
				return 1;
		}
	}
	else
		return 1;

	return 0;
}
int feelB(int i, int j, int i2, int j2)
{
	if (abs(j2 - j) == abs(i2 - i))
	{
		int hold = i + 1, hold2 = j + 1;
		if ((i2 > i && j2 > j))
		{
			for (hold; hold < i2; hold++)
			{
				for (hold2; hold2 < j2; hold2++)
				{
					if (chess[hold][hold2] != 0)
					{
						return 1;
					}
				}
			}
			if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}
		}

		else if ((i2 > i && j2 < j))
		{
			int hold = i + 1, hold2 = j - 1;
			for (hold; hold < i2; hold++)
			{
				for (hold2; hold2 > j2; hold2--)
				{
					if (chess[hold][hold2] != 0)
					{
						return 1;
					}
				}
			}
			if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}

		}
		else if ((j2 > j && i2 < i))
		{
			int hold = i - 1, hold2 = j + 1;
			for (hold; hold > i2; hold--)
			{
				for (hold2; hold2 < j2; hold2++)
				{
					if (chess[hold][hold2] != 0)
					{
						return 1;
					}
				}
			}
			if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}

		}
		else if ((j2 < j && i2 < i))
		{
			int hold = i - 1, hold2 = j - 1;
			for (hold; hold > i2; hold--)
			{
				for (hold2; hold2 > j2; hold2--)
				{
					if (chess[hold][hold2] != 0)
					{
						printf("error");
						return 1;
					}
				}
			}
			if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}

	else
	{
	   return 1;
	}
}
int soldierW(int i, int j, int i2, int j2)
{
	if (i2 - i == 1 && chess[i2][j2] == 0)
	{
		if (chess[i][j] == 1)
		{
			chess[i2][j2] = 1;
			chess[i][j] = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int z = 0; z < 8; z++)
				{
					printf("%d\t", chess[k][z]);
				}
				printf("\n");
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (i2 - i == 1 && abs(j2 - j) == 1 && chess[i2][j2] > 6)
	{
		if (chess[i][j] == 1)
		{
			chess[i2][j2] = 1;
			chess[i][j] = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int z = 0; z < 8; z++)
				{
					printf("%d\t", chess[k][z]);
				}
				printf("\n");
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
		return 1;
}
int tabya(int i, int j, int i2, int j2)
{
	if ((i == i2 && j != j2) || (i != i2 && j == j2))
	{
		if (i == i2 && j != j2)
		{
			if (j2 > j)
			{
				int flag = j + 1;
				for (flag; flag < j2; flag++)
				{
					if (chess[i][flag] != 0)
						return 1;
				}
				if (chess[i][j] < 6)
				{
					if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
						return 1;
				}
			}
			else
			{
				int flag = j - 1;
				for (flag; flag > j2; flag--)
				{
					if (chess[i][flag] != 0)
						return 1;
				}
				if (chess[i][j] < 6)
				{
					if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		else
		{
			if (i2 > i)
			{
				int flag = i + 1;
				for (flag; flag < i2; flag++)
				{
					if (chess[flag][j] != 0)
						return 1;
				}
				if (chess[i][j] < 6)
				{
					if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			else
			{
				int flag = i - 1;
				for (flag; flag > i2; flag--)
				{
					if (chess[flag][j] != 0)
					{
						return 1;
					}
				}
				if (chess[i][j] < 6)
				{
					if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
					{
						chess[i2][j2] = chess[i][j];
						chess[i][j] = 0;
						for (int k = 0; k < 8; k++)
						{
							for (int z = 0; z < 8; z++)
							{
								printf("%d\t", chess[k][z]);
							}
							printf("\n");
						}
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	else
		return 1;
}
int feelW(int i, int j, int i2, int j2)
{
	if (abs(j2 - j) == abs(i2 - i))
	{
		int hold = i + 1, hold2 = j + 1;
		if ((i2 > i && j2 > j))
		{
			for (hold; hold < i2; hold++)
			{
				for (hold2; hold2 < j2; hold2++)
				{
					if (chess[hold][hold2] != 0)
					{
						return 1;
					}
				}
			}
			if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}
		}

		else if ((i2 > i && j2 < j))
		{
			int hold = i + 1, hold2 = j - 1;
			for (hold; hold < i2; hold++)
			{
				for (hold2; hold2 > j2; hold2--)
				{
					if (chess[hold][hold2] != 0)
					{
						return 1;
					}
				}
			}
			if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}

		}
		else if ((j2 > j && i2 < i))
		{
			int hold = i - 1, hold2 = j + 1;
			for (hold; hold > i2; hold--)
			{
				for (hold2; hold2 < j2; hold2++)
				{
					if (chess[hold][hold2] != 0)
					{
						return 1;
					}
				}
			}
			if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}

		}
		else if ((j2 < j && i2 < i))
		{
			int hold = i - 1, hold2 = j - 1;
			for (hold; hold > i2; hold--)
			{
				for (hold2; hold2 > j2; hold2--)
				{
					if (chess[hold][hold2] != 0)
					{
						return 1;
					}
				}
			}
			if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
			{
				chess[i2][j2] = chess[i][j];
				chess[i][j] = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int z = 0; z < 8; z++)
					{
						printf("%d\t", chess[k][z]);
					}
					printf("\n");
				}
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}

	else
	{
		return 1;
	}
}
int hossan(int i, int j, int i2, int j2)
{
	if ((abs(i2 - i) == 1 && abs(j2 - j) == 2) || (abs(i2 - i) == 2 && abs(j2 - j) == 1))
	{
		if (chess[i2][j2] >= 1 && chess[i2][j2] < 7)
		{
			return 1;
		}
		else
		{
			if (chess[i][j] == 3)
			{
				if (chess[i2][j2] > 6 || chess[i2][j2] == 0)
				{
					chess[i2][j2] = chess[i][j];
					chess[i][j] = 0;
					for (int k = 0; k < 8; k++)
					{
						for (int z = 0; z < 8; z++)
						{
							printf("%d\t", chess[k][z]);
						}
						printf("\n");
					}
					return 0;
				}
				else
				{
					return 1;
				}

			}
			else if (chess[i][j] == 9)
			{
				if (chess[i2][j2] < 6 || chess[i2][j2] == 0)
				{
					chess[i2][j2] = chess[i][j];
					chess[i][j] = 0;
					for (int k = 0; k < 8; k++)
					{
						for (int z = 0; z < 8; z++)
						{
							printf("%d\t", chess[k][z]);
						}
						printf("\n");
					}
					return 0;
				}
				else
				{
					return 1;
				}
			}

		}
	}
	else
	{
		return 1;
	}
}
int wazeer(int i, int j, int i2, int j2)
{
	if (((i2 == i && j2 != j) || (i2 != i && j2 == j)) || (abs(j2 - j) == abs(i2 - i)))
	{
		if ((i2 == i && j2 != j) || (i2 != i && j2 == j))
		{
			return tabya(i, j, i2, j2);
		}
		else
		{
			if (chess[i][j] == 6)
			{
				return feelW(i, j, i2, j2);
			}
			else
			{
				return feelB(i, j, i2, j2);
			}
		}
	}
	else
		return 1;
}

int main()
{
	int i2, j2, i, j, round = 0, ans = 0;
	printf("start \n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf(" %d\t", chess[i][j]);
		}
		printf("\n");
	}
	int flag = 1 ;
	int flag2 = 1;
	while (flag == 1 && flag2 == 1)
	{
		flag = 0;
		flag2 = 0;
		if (round == 0)
		{
			printf("player1 enter rows and coloumns ");
			scanf_s("%d%d", &i, &j);
			printf("player1 enter rows and coloumns ");
			scanf_s("%d%d", &i2, &j2);


			if (chess[i][j] == 1)
			{
				ans = soldierW(i, j, i2, j2);
				if (ans == 0)
				{
					round = 1;
				}
			}
			else if (chess[i][j] == 2)
			{
				ans = tabya(i, j, i2, j2);
				if (ans == 0)
				{
					round = 1;
				}
			}
			else if (chess[i][j] == 3)
			{
				ans = hossan(i, j, i2, j2);
				if (ans == 0)
				{
					round = 1;
				}
			}
			else if (chess[i][j] == 4)
			{
				ans = feelW(i, j, i2, j2);
				if (ans == 0)
				{
					round = 1;
				}
			}
			else if (chess[i][j] == 5)
			{
				ans = wazeer(i, j, i2, j2);
				if (ans == 0)
				{
					round = 1;
				}
			}
			else if (chess[i][j] == 6)
			{
				ans = malek(i, j, i2, j2);
				if (ans == 0)
				{
					round = 1;
				}
			}
			else if (chess[i][j] == 0)
			{
				break;
			}
			ans = 0;
		}
		else if (round == 1)
		{
			printf("player2 enter rows and coloumns ");
			scanf_s("%d%d", &i, &j);
			printf("player2 enter rows and coloumns ");
			scanf_s("%d%d", &i2, &j2);

			if (chess[i][j] == 7)
			{
				ans = soldierB(i, j, i2, j2);
				if (ans == 0)
				{
					round = 0;
				}
			}
			else if (chess[i][j] == 8)
			{
				ans = tabya(i, j, i2, j2);
				if (ans == 0)
				{
					round = 0;
				}
			}
			else if (chess[i][j] == 9)
			{
				ans = hossan(i, j, i2, j2);
				if (ans == 0)
				{
					round = 0;
				}
			}
			else if (chess[i][j] == 10)
			{
				ans = feelB(i, j, i2, j2);
				if (ans == 0)
				{
					round = 0;
				}
			}
			else if (chess[i][j] == 11)
			{
				ans = wazeer(i, j, i2, j2);
				if (ans == 0)
				{
					round = 0;
				}
			}
			else if (chess[i][j] == 12)
			{
				ans = malek(i, j, i2, j2);
				if (ans == 0)
				{
					round = 0;
				}
			}
		}
		for (int y = 0; y < 8; y++)
		{
			for (int z = 0; z < 8; z++)
			{
				if (chess[y][z] == 5)
				{
					flag = 1;
				}
				else if (chess[y][z] == 12)
				{
					flag2 = 1;
				}
			}
		}
		if (flag == 0)
		{
			printf("player 2 won");
		}
		if (flag2 == 0)
		{
			printf("player 1 won");
		}
	}
}