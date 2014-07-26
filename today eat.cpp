#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv)
{
	while(1)
	{
		int t = (int) time (NULL);		
		int food;
		int ans;
		srand(time(NULL));
		
		if (strcmp(argv[1], "school") == 0)
		{
			int i = 0;
			for(i = 0 ; i < 3 ; i++)
			{
				food = (rand() % 3) +1;
				switch(food)
				{
					case 0:
						printf("%d. 二餐一樓煎餃\n",i+1);
						break;
					case 1:
						printf("%d. 二餐便當\n",i+1);
						break;
					case 2:
						printf("%d. 二餐三樓\n",i+1);
						break;
					case 3:
						printf("%d. 女二\n",i+1);
						break;
				}
			}
		}
		else if (strcmp(argv[1], "home") == 0)
        {
			for (int i = 0; i < 3; ++i)
			{
				food = (rand() % 7) +1;

				switch(food)
				{
					case 0:
					printf("%d. 清夜義大利麵\n",i+1);
					break;

					case 1:
					printf("%d. 清夜二六食堂\n",i+1);
					break;

					case 2:
					printf("%d. 清夜炒飯\n",i+1);
					break;

					case 3:
					printf("%d. 清夜鐵板燒\n",i+1);
					break;

					case 4:
					printf("%d. 清夜我家小館\n",i+1);
					break;

					case 5:
					printf("%d. 便當店\n",i+1);
					break;

					case 6:
					printf("%d. 漢堡\n",i+1);
					break;

					case 7:
					printf("%d. pizza\n",i+1);
					break;			
				}
			}
		}
		else if (strcmp(argv[1], "info") == 0)
		{
			printf("home => 吃除了學校以外的東西\n");
			printf("school => 學校裡的東西\n");
			printf("然後 info 就相關資訊 ._.\n");
			printf("https://github.com/freetsubasa/TodayEatWhat 求改良（？）\n");
			break;
		}
		printf("小飛機你今天想吃什麼 1、2、3 or ... me ?\n");
		while(scanf("%d", &ans) == 1)
		{
			if (ans == 1 || ans == 2 || ans == 3)
			{
				printf("那就快點去吃吧 <3\n");
			}
			else if (ans == 4)
			{
				printf("居然打槍我 QQ\n");
			}
			else
			{
				printf("輸入其他數字是想吃掉趴趴子的意思嘛 >////<\n");
			}
		}
	}
}

