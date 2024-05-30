#include <iostream>
#include <stack>
#include <algorithm>
#include<concepts>
#include<type_traits>
using namespace std;
class Ammo {
protected:
	int damage;
public:
	virtual int getDamage() = 0;
};
class AmmoType5_56 : public Ammo {
};
class AmmoType5_56_BP :public AmmoType5_56 {
public:
	AmmoType5_56_BP(int damage) { this->damage = 6; }
	int getDamage() { return this->damage; }
};
class AmmoType5_56_PS :public AmmoType5_56 {
public:
	AmmoType5_56_PS(int damage) { this->damage = 5; }
	int getDamage() { return this->damage; }
};
class AmmoType7_62 : public Ammo {
};
class AmmoType7_62_BP : public Ammo {
public:
	AmmoType7_62_BP(int damage) { this->damage = 7; }
	int getDamage() { return this->damage; }
};
class AmmoType7_62_PS : public Ammo {
public:
	AmmoType7_62_PS(int damage) { this->damage = 6; }
	int getDamage() { return this->damage; }
};
class AmmoType9_19 : public Ammo {
};
class AmmoType9_19_BP : public AmmoType9_19 {
public:
	AmmoType9_19_BP(int damage) { this->damage = 9; }
	int getDamage() { return this->damage; }
};
class AmmoType9_19_PS : public AmmoType9_19 {
public:
	AmmoType9_19_PS(int damage) { this->damage = 7; }
	int getDamage() { return this->damage; }
};
template<typename T>
concept AmmoType = is_base_of<Ammo, remove_pointer<T>>::value && !is_same_v<Ammo, remove_pointer<T>>;
template<typename T>
class Magazin {
private:
	stack<T> bullets;
	int amount;
public:
	Magazin(int amount) :amount(amount) {}
	void loadAmmo(T bullet) {
		if (bullets.size() >= amount)throw out_of_range("full!");
		bullets.push(bullet);
	}
	T unLoadBullet() {
		if (bullets.empty()) throw out_of_range("empty");
		T bullet = bullets.top();
		bullets.pop();
		return bullet;
	}
	stack<T*> fullUnload() {
		if (bullets.empty()) throw out_of_range("empty");
		stack<T> unloadBullets = bullets;
		for (; !bullets.empty();)bullets.pop();
		return unloadBullets;
	}
	int info() {
		cout << "Type: " << bullets.top()->getName << endl;
		cout << "Bullets: " << bullets.size() << endl;
	}
};
class Weapon {
private:

};
class Human {
};
int main()
{
	

	Magazin<AmmoType_5_56*>  m1(10);
	for (int i = 0; i < 5; i++) {
		m5_56.load(new AmmoType_5_56_BP);
	}
	m5_56.info();
	AmmoType5_56* ammo1 = new AmmoType5_56_BP(5);
	AmmoType5_56* ammo2 = new AmmoType5_56_PS(7);
	m1.loadAmmo(ammo1);
	m1.loadAmmo(ammo2);
	cout << m1.unLoadBullet()->getDamage() << endl;
	cout << m1.unLoadBullet()->getDamage() << endl;
	return 0;
}