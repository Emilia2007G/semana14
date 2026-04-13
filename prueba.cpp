#include<iostream>
using namespace std;

void mostrarEstado(string nombre, int hp, int maxHP) {
    cout << nombre << "  HP: " << hp << "/" << maxHP << endl;
}
void recibirDanio(int& hp, int danio) {
    hp -= danio;
    if (hp < 0) {
        hp = 0;
    }
}
void curar(int& hp, int cantidad, int maxHP){
	hp+=cantidad;
	if (hp>maxHP){
		hp=maxHP;
	}
}
int main(){
	string nombre = "Arthas";
	 int hp = 100;
	 int maxHP = 100;
	 cout<<"El heroe "<<nombre<<" inicia con: "<<hp<<" puntos de vida "<<endl;
	 recibirDanio(hp,30);
	 cout<<"El heroe "<<nombre<<" recibe 30 puntos de dano, ahora tiene: "<<hp<<" puntos de vida de "<<maxHP<<endl;
     recibirDanio(hp,50);
     cout<<"El heroe "<<nombre<<" recibe 50 puntos de dano, ahora tiene: "<<hp<<" puntos de vida de "<<maxHP<<endl;
     curar(hp,40,maxHP);
     cout<<"El heroe "<<nombre<<" recibe 40 puntos para curarse, ahora tiene: "<<hp<<" puntos de vida de "<<maxHP<<endl;
     recibirDanio(hp,80);
     cout<<"El heroe "<<nombre<<" recibe 80 puntos de dano, ahora tiene: "<<hp<<" puntos de vida de "<<maxHP<<endl;
}