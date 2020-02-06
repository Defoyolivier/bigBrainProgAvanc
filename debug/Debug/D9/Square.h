#pragma once

void GetValue(int* a, int b)
{
    int i = 10;
    const int v = *a;
	
    for(int i = 0; i < b; i++)
    {
        *a *= v;
    }

    *a /= i;
}