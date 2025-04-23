#ifndef OBIEKT_SISO_H
#define OBIEKT_SISO_H

class ObiektSISO {
public:
    virtual double symuluj(double u) = 0;
    virtual ~ObiektSISO() = default;
};

#endif // OBIEKT_SISO_H

