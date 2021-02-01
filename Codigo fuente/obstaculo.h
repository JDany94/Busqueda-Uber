#ifndef OBSTACULO_H
#define OBSTACULO_H


class Obstaculo
{
private:

   int M;
   int N;

public:

    Obstaculo();
    Obstaculo(int m, int n);

    //Setter
    void setM (int m);
    void setN (int n);

    //Getter
    int getM ();
    int getN ();

};

#endif // OBSTACULO_H
