// Floyd求解最短距离.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*#include <iostream>
#include<string.h>
#include<cmath>
#include<cstdio>
#include <cstring>
#include <queue>  //Floyd算法，求图中两个点之间的最短距离       
#define inf 1000000   //hdu2544 
int main()
{
    int e[10][10], int k, i, j;
    int n;
    for (i = 0; i < n; i++) {

    }
    std::cout << "Hello World!\n";
}*/

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


#include<iostream>
#include<iomanip>
int main()
{
	int e[10][10], k, i, j, n, m, t1, t2, t3;
	int inf = 99999999;

	//输入图的顶点数和边数
	std::cin >> n >> m;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = inf;

	//依次输入初始化邻接矩阵点之间的权值
	for (i = 1; i <= m; i++)
	{
		std::cin >> t1 >> t2 >> t3;
		e[t1][t2] = t3;
	}

	//Floyd-WarshallËã 弗洛伊德核心代码
	for (k = 1; k <= n; k++)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (e[i][j] > e[i][k] + e[k][j])
					e[i][j] = e[i][k] + e[k][j];

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			/*printf("%10d", e[i][j]);*/
			std::cout <<std::setw(10)<< e[i][j];
		}
		std::cout <<std::endl;
	}

	return 0;
}
