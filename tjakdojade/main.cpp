#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
void wielkopolska() {
	std::cout << "/* WIELKOPOLSKA! */" << std::endl;
	std::cout << "Write name of city/town in  Wielkopolska : ";
	std::string twielkopolska;
	std::cin >> twielkopolska;
	std::transform(twielkopolska.begin(), twielkopolska.end(), twielkopolska.begin(),[](unsigned char c) {return std::tolower(c);});

	if (twielkopolska == "poznan") {
		std::cout << "Buses: " << std::endl;
		std::cout << "	113: From Gorzyn PKM To Gorczyn PKM (17 stops)" << std::endl;
		std::cout << "	121: From Ogrody To Ogrody (4 stops)" << std::endl;
		std::cout << "	122: From Junikowo To Junikowo (16 stops)" << std::endl;
		std::cout << "	123: From Krzesiny To Staroleka PKM (9 stops)" << std::endl;
		std::cout << "	124: From Instytut Technologiczno-Przyrodniczy To Safony (9 stops)" << std::endl;
		std::cout << "	125: From Franowo To Franowo (25 stops)" << std::endl;
		std::cout << "	145: From Dworzec Zachodni To Kacza (12 stops)" << std::endl;
		std::cout << "	146: From Boranta To Stary Strzeszyn (24 stops)" << std::endl;
		std::cout << "	148: From Poznan Glowny To Poznan Glowny (35 stops)" << std::endl;
		std::cout << "	149: From Debiec PKM To Gorczyn PKM (18 stops)" << std::endl;
		std::cout << " 	151: From Osiedle Sobielskiego To Osiedle Sobielskiego (33 stops)" << std::endl;
		std::cout << "	152: From Rondo Rataje To Darzybor (22 stops)" << std::endl;
		std::cout << "	153: From Staroleka PKM To Sypniewo (26 stops)" << std::endl;
		std::cout << "	154: From Splawie To Rondo Rataje (13 stops)" << std::endl;
		std::cout << "	156: From Ogrody To Krzyzowniki (13 stops)" << std::endl;
		std::cout << "	157: From Rondo Srodka To Mogilenska (16 stops)" << std::endl;
		std::cout << "	158: From Sypniewo To Staroleka PKM (16 stops)" << std::endl;
		std::cout << "	159: From Poznan Glowny To Port Lotniczy Lawica (14 stops)" << std::endl;
		std::cout << "	160: From Stary Strzeszyn To Garbary PKM (21 stops)" << std::endl;
		std::cout << "	162: From Rondo Rataje To Rondo Rataje (34 stops)" << std::endl;
		std::cout << "	163: From Garbary PKM To Gorczyn PKM (20 stops)" << std::endl;
		std::cout << "	164: From Puszkina To Kacza (31 stops)" << std::endl;
		std::cout << "	166: From Zielniec To Rondo Rataje (23 stops)" << std::endl;
		std::cout << "	167: From Rondo Srodka To Radojewo (22 stops)" << std::endl;
		std::cout << "	168: From Strzeszyn PKM To Poznan Glowny (21 stops)" << std::endl;
		std::cout << "	169: From Osidle Kopernika To Luzycka (26 stops)" << std::endl;
		std::cout << "	170: From Rondo Solidarnosci To Puszkina (14 stops)" << std::endl;
		std::cout << "	171: From Osiedle Debina To Osiedle Wichrowe Wzgorze (28 stops)" << std::endl;
		std::cout << "	173: From Rondo Srodka To Janikowo (11 stops)" << std::endl;
		std::cout << "	174: From Unii Lubelskiej To Osidle Sobielskiego (37 stops)" << std::endl;
		std::cout << "	175: From Gorczyn PKM To Debiec PKM (12 stops)" << std::endl;
		std::cout << "	176: From Osidle Debina To Garbary PKM (17 stops)" << std::endl;
		std::cout << "	177: From Junikowo To Rondo Kaponiera (22 stops)" << std::endl;
		std::cout << "	178: From Rondo Srodka To Starych Szeregow (20 stops)" << std::endl;
		std::cout << "	179: From Kacza To Debiec PKM (14 stops)" << std::endl;
		std::cout << "	180: From Gorczyn PKM To Sycowska Centrum Handlowe (14 stops)" << std::endl;
		std::cout << "	181: From Krzywoustego To Rondo Rataje (16 stops)" << std::endl;
		std::cout << "	182: From Osidle Wichrowe Wzgorze To Gorczyn PKM (24 stops)" << std::endl;
		std::cout << "	183: From Rondo Srodka To Szrych Szeregow (27 stops)" << std::endl;
		std::cout << "	184: From Rondo Rataje To Termy Maltanskie (29 stops)" << std::endl;
		std::cout << "	185: From Osiedle Sobielskiego To Rondo Srodka (26 stops)" << std::endl;
		std::cout << "	186: From Ogrody To Kiekrz (23 stops)" << std::endl;
	} 
	else if (twielkopolska == "rawicz") {
		std::cout << "Buses: " << std::endl;
		std::cout << "	1: From Rawicz To Zolednica (19 stops)" << std::endl;
		std::cout << "	2: From Rawicz To Wydawy (21 stops)" << std::endl;
		std::cout << "	3: From Rawicz To Katy (21 stops)" << std::endl;
		std::cout << "	4: From Rawicz To Zylice (15 stops)" << std::endl;
		std::cout << "	5: From Rawicz To Wasosz (19 stops)" << std::endl;
		std::cout << "	D31: From Rawicz to Gora Slaska (5 stops)" << std::endl;
		std::cout << "Trams: " << std::endl;
		std::cout << "	There is no tram in Rawicz" << std::endl;
	}
	else if (twielkopolska == "leszno") {
		std::cout << "Buses: " << std::endl;
		std::cout << "	1: From Jagielly To Rynek Zaborowski (18 stops)" << std::endl;
		std::cout << "	2: From Strzyzewice To Rejtana (29 stops)" << std::endl;
		std::cout << "	3: From Osiecka cmentarz To Strzyzewice (34 stops)" << std::endl;
		std::cout << "	4: From Rynek Zaborowski To Wilkowice (31 stops)" << std::endl;
		std::cout << "	5: From Osiecka cmentarz To Kosmonautow (27 stops)" << std::endl;
		std::cout << "	6: From Rejtana To Towarowa Dworzec PKP (20 stops)" << std::endl;
		std::cout << "	8: From Rynek Zaborowski To Goniembice (23 stops)" << std::endl;
		std::cout << "	10: From Okrezna To Dworzec PKP (21 stops)" << std::endl;
		std::cout << "	11: From Jagielly To Swieciechowa (20 stops)" << std::endl;
		std::cout << "	12: From Kloda stacja kolejowa To Jagielly (29 stops)" << std::endl;
		std::cout << "	17: From Rejtana To Rejtana (przez Gmine Lipno) (34 stops)" << std::endl;
		std::cout << "Trams: " << std::endl;
		std::cout << "	There is no tram in Leszno" << std::endl;
	}
	else if (twielkopolska == "mosina") {
		std::cout << "Buses: " << std::endl;
		std::cout << "	691: From Mosina Dworcowa To Mosina Dworcowa (30 stops)" << std::endl;
		std::cout << "	692: From Mosina Dworcowa To Mosina Dworcowa (20 stops)" << std::endl;
		std::cout << "	693: From Mosina Dworcowa To Mosina Dworcowa (8 stops)" << std::endl;
		std::cout << "	694: From Mosina Dworcowa To Mosina Dworcowa (10 stops)" << std::endl;
		std::cout << "	698: From Mosina Dworcowa To Mosina Dworcowa (20 stops)" << std::endl;
		std::cout << "	699: From Mosina Dworcowa To Mosina Dworcowa (64 stops)" << std::endl;
		std::cout << "	651: From Mosina Dworcowa To Debiec PKM (27 stops)" << std::endl;
		std::cout << "Trams: " << std::endl;
		std::cout << "	There is no tram in Mosina" << std::endl;
	}
}
int main() {
	std::cout << "/* Terminal Transport Info */" << std::endl;
	std::cout << "Write name of region :";
	std::string name;
	std::cin >> name;
	std::transform(name.begin(), name.end(), name.begin(),[](unsigned char c) {return std::tolower(c);});

	if (name == "wielkopolska") {
		wielkopolska();
	}
	else if (name == "dolnyslask");
	else if (name == "pomorkie");
	else if (name == "mazowieckie");
}