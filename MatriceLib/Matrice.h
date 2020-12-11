#pragma once
class Matrice
{
public:
	Matrice(int ,int);
	~Matrice();
private:
	int col, lig;
	float** M;
};

