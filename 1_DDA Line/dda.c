#include<stdio.h>

int abs (int n)
{
	return ((n>0) ? n : (n*(-1)));
}

void DDA(int X1, int Y1, int X2, int Y2)
{

	int dx = X2 - X1;
	int dy = Y2 - Y1;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = X1;
	float Y = Y1;

	for (int i=0;i<=steps;i++)
	{
	    printf("%f, %f\n", X, Y);

		X += Xinc;
		Y += Yinc;
	}
}

int main()
{
    int x1,y1,x2,y2;
    printf("Enter the starting coordinates: ");
    scanf("%d%d", &x1,&y1);
    printf("Enter the ending coordinates: ");
    scanf("%d%d", &x2, &y2);

	DDA(x1,y1,x2,y2);
	return 0;
}
