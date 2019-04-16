
#include <cstdio>
#include <cstdlib>

/**
 * @brief InfとNaNをそれぞれ比較する。
 * 
 * @param argc 
 * @param argv 
 * @return int 
 * @since 2018-04-10
 */
int main(int argc, char **argv)
{
	//inf
	double dInf = 1 / 0.0;

	printf("Inf:%f\n", dInf);

	printf("Inf>0:%d\n", dInf > 0);
	printf("Inf<0:%d\n", dInf < 0);

	//nan
	double dNan = 0 / 0.0;
	printf("Nan:%f\n", dNan);

	printf("Nan>0:%d\n", dNan > 0);
	printf("Nan<0:%d\n", dNan < 0);
	return 0;
}
