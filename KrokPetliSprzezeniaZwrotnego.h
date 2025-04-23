<<<<<<< HEAD


// #endif // KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H
#ifndef KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H
#define KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H

#include "RegulatorPID.h"
#include "ModelARX.h"

class KrokPetliSprzezeniaZwrotnego
{
public:
    double operator()(RegulatorPID &regulator, ModelARX &model, double poprzednieWyjscie);
};

#endif // KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H
=======


// #endif // KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H
#ifndef KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H
#define KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H

#include "RegulatorPID.h"
#include "ModelARX.h"

class KrokPetliSprzezeniaZwrotnego
{
public:
    double operator()(RegulatorPID &regulator, ModelARX &model, double poprzednieWyjscie);
};

#endif // KROK_PETLI_SPRZEZENIA_ZWROTNEGO_H
>>>>>>> feca6fd1140f62900434cbb66b09f38aa80035a2
