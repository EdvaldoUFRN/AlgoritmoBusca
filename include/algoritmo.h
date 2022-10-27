#ifndef algoritmo_h
#define algoritmo_h


template<typename T>
T* ordena(T a, T *k){ 
for (int i = 0; i < a; i++)
{
    for (int ii = 0; ii < a; ii++)
    {
        if (k[i] < k[ii])
        {
            int b;
            b = k[ii];
            k[ii] = k[i];
            k[i] = b;
        }
        
    }
}

    return k;
}
    













#endif