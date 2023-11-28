#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Weapon {};
class Player
{
private:
	short int CurrentHP;
	short int MaxHP;
	short int patron;
	string nickname;
	vector <Weapon*> arsenal;
	Weapon CurrentWeapon;
public:
	Player(short int Health, string NICK)
	{
		MaxHP = Health;
		CurrentHP = MaxHP;
		nickname = NICK;
		
	}
	int shoot(Player victim, Weapon weapon)
	{
		
	}
	void reload(Weapon weapon)
	{
		if (weapon.GetCurrentAmmo() != weapon.GetMaxAmmo() && patron > 0)
		{
			int difference = weapon.GetMaxAmmo() - weapon.GetCurrentAmmo();
			if (patron < difference) 
				patron = difference;
			patron -= difference;
			weapon.SetCurrentAmmo(weapon.GetCurrentAmmo() + difference);
			
		}
		else
			cout << "already reloaded" << endl;
	}
};
class Weapon
{
protected:
	string name;
	int damage;
	int CurrentAmmo;
	int MaxAmmo;
	int WeaponType;// 0 - primary, 1 - secondary, 2 - knife

public:
	Weapon(string NAME, int dmg, int Ammo, int TypeWeapon)
	{
		name = NAME;
		damage = dmg;
		MaxAmmo = Ammo;
		CurrentAmmo = MaxAmmo;
		WeaponType = TypeWeapon;
	}
	Weapon() 
	{
	}
	void SetCurrentAmmo(int Cur) { CurrentAmmo = Cur; }
	void SetMaxAmmo(int Cur) { MaxAmmo = Cur; }
	int GetCurrentAmmo() {	return CurrentAmmo;}
	int GetMaxAmmo() { return MaxAmmo; }
};
main()
{

}