#include "pch.h"
#include "Matrice.h"

Matrice::Matrice(int C,int L)
{
	int i, j;
	this->col = C;
	this->lig = L;
	this->M= new float* [this->lig];
	for (i = 0; i < this->lig; i++)
	{
		this->M[i] = new float[this->col];
	}
	for (i = 0; i < this->lig; i++)
	{
		for (j = 0; j < this->col; i++)
		{
			this->M[i][j] = 0;
		}
	}

}
