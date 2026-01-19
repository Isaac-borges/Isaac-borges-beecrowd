#include <stdio.h>

double POW(double NUMBER, int EXP)
{
	double RESULT = NUMBER;
	for (int i=1; i < EXP; i++) RESULT *= RESULT;

	return RESULT;
}

double areaQuadrado(double LADO_B)
{
	return POW(LADO_B, 2);
}

double areaRetangulo(double LADO_A, double LADO_B)
{
	return LADO_A * LADO_B;
}

double areaCirculo(double RAIO_C)
{
	return 3.14159 * POW(RAIO_C, 2);
}

double areaTrianguloRetangulo(double A, double C) 
{
	return (A * C) / 2;
}

double areaTrapezio(double A, double B, double C) 
{
	return ((A + B) * C) / 2;
}

int main(void)
{
	double A, B, C;
	double AREA_TRIANGULO, AREA_CIRCULO, AREA_TRAPEZIO, AREA_QUADRADO, AREA_RETANGULO;

	fscanf(stdin, "%lf %lf %lf", &A, &B, &C);
	AREA_TRIANGULO = areaTrianguloRetangulo(A, C);
	AREA_CIRCULO = areaCirculo(C);
	AREA_TRAPEZIO = areaTrapezio(A, B, C);
	AREA_QUADRADO = areaQuadrado(B);
	AREA_RETANGULO = areaRetangulo(A, B);

	fprintf(stdout, "TRIANGULO: %.3lf\n", AREA_TRIANGULO);
	fprintf(stdout, "CIRCULO: %.3lf\n", AREA_CIRCULO);
	fprintf(stdout, "TRAPEZIO: %.3lf\n", AREA_TRAPEZIO);
	fprintf(stdout, "QUADRADO: %.3lf\n", AREA_QUADRADO);
	fprintf(stdout, "RETANGULO: %.3lf\n", AREA_RETANGULO);

	return 0;
}
