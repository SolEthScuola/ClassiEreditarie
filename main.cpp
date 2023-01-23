#include "iostream"
using namespace std;

/*
classe del lato per definire e modificare
il lato delle figure poi definite
*/
class Lato {
	private:
		float lato;
	public:
		float getLato(){
			return lato;
		}
		void setLato(float l){
			lato = l;
		}
};
/*
quadrato "eredita" la classe Lato e tutti i
suoi metodi e attributi, quindi definiamo
la funzione per trovare l'area utilizzando
getLato() dalla classe ereditata
*/
class Quadrato : public Lato {
	public:
		float getArea(){
			return getLato() * getLato();
		}
};
/*
triangolo eredita anche a sua volta da lato,
in più definiamo una variabile altezza
come attributo necessario aggiuntivo per calcolare l'area, definiamo poi la funzione.
*/
class Triangolo : public Lato {
	public:
		float altezza;
		float getArea(){
			return getLato() * altezza / 2;
		}
};
/*
definisco gli oggetti delle classi e imposto
i lati dalla classe ereditata, in più per il triangolo assegno l'altezza. infine mostro le aree di entrambi'
*/
int main(){
	Quadrato q;
	q.setLato(2.5);
	cout << q.getArea() << endl;
	Triangolo t;
	t.setLato(2.5);
	t.altezza = 3.5;
	cout << t.getArea();
}