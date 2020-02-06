#pragma once

class ClassA
{
public:
	ClassA(int value);
	void Afficher() const;
	void Assigner(int val);
	int Obtenir() const;

private:
	int m_value;
};
