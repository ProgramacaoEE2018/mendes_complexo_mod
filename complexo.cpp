#include <iostream>
#include <math.h>
using namespace std;

class complexo{
public:
	float Re;
	float Im;
public:
	complexo(float a, float b){
		Re=a;
		Im=b;
	};
	float modulo(){
		return sqrt(Re*Re + Im*Im);
	};
	complexo soma(complexo x){
		complexo y(Re,Im);
		y.Re = this ->Re + x.Re;
		y.Im = this ->Im + x.Im;
        	return y;
	};
	complexo subtracao(complexo x){
        	complexo z(Re,Im);
        	z.Re = this ->Re - x.Re;
        	z.Im = this ->Im - x.Im;
        	return z;
	};
	complexo multiplicacao(complexo x){
        	complexo w(Re, Im);
        	w.Re = (this ->Re * x.Re) - (this ->Im * x.Im);
        	w.Im = (this ->Re * x.Im) + (this ->Im * x.Re);
        	return w;
	};
	complexo divisao(complexo x){
        	return complexo((this ->Re * x.Re  +  this ->Im * x.Im)/(x.Re*x.Re + x.Im*x.Im) , (-this ->Re * x.Im  +  this ->Im * x.Re)/(x.Re*x.Re + x.Im*x.Im
));
	};
	complexo conjugado(){
		return complexo(Re, -Im);
	};
}