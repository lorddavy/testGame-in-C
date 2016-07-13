#include <windows.h>

void foo(void)	//Function signature or prototype
{
	char *Foo = "this is the first thing that we actually printed.\n";
	OutputDebugStringA(Foo);
}


struct projectile {
	char unsigned IsThisOnFire;
	int Damage;
	int ParticlesPerSecond;
	short HowManyCooKS;
};

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow
) {
	/*char SmallS; // 8 bits - 256 diff values: [-128,127]
	char unsigned SmallU;  // 8 bits unsigned - 256 diff values: [0,255]

	short MediumS; // 16 bits - 65536 diff values
	short MediumU;  // 16 bits unsigned - 65536 diff values

	int LargeS; // 32 bits - 4 billion diff values
	int unsigned LargeU; // 32 bits unsigned - 4 billion diff values*/

	projectile Test;

	int size = sizeof(Test);

	Test.IsThisOnFire = 1;
	Test.Damage = 342314;
	Test.ParticlesPerSecond = 14423;
	Test.HowManyCooKS = 50;

	//projectile *ProjectilePointer = &Test;
	unsigned short *MrPointerMan = (unsigned short*)&Test;


	projectile Projectiles[40];

	projectile *ProjectilePointer = Projectiles;

	int WhichProjectile;
	WhichProjectile = 4;

	Projectiles[WhichProjectile];

	Projectiles[30].Damage = 60;

	(ProjectilePointer+30)->Damage = 100;
	char *BytePointer = (char*)ProjectilePointer;
	((projectile*)(BytePointer + 30 * sizeof(projectile)))->Damage = 200;

	/*char unsigned *TestPointer;

	TestPointer = &Test;*/

	//Test = 200;

	/*
	//Overflow
	Test = 255;
	Test = Test + 1;
	*/

	foo();
}