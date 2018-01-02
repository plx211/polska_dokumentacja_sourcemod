/**
 * vim: set ts=4 :
 * =============================================================================
 * SourceMod (C)2004-2008 AlliedModders LLC.  All rights reserved.
 * =============================================================================
 *
 * This file is part of the SourceMod/SourcePawn SDK.
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, AlliedModders LLC gives you permission to link the
 * code of this program (as well as its derivative works) to "Half-Life 2," the
 * "Source Engine," the "SourcePawn JIT," and any Game MODs that run on software
 * by the Valve Corporation.  You must obey the GNU General Public License in
 * all respects for all other code used.  Additionally, AlliedModders LLC grants
 * this exception to all derivative works.  AlliedModders LLC defines further
 * exceptions, found in LICENSE.txt (as of this writing, version JULY-31-2007),
 * or <http://www.sourcemod.net/license.php>.
 *
 * Version: $Id$
 */
 
#if defined _admin_included
 #endinput
#endif
#define _admin_included

/**
 * Flagi dostępu dla admina.
 */
enum AdminFlag
{
	Admin_Reservation = 0,	/**< Rezerwacja slota */
	Admin_Generic,			/**< Prawa standardowego admina */
	Admin_Kick,				/**< Daj graczowi kicka */
	Admin_Ban,				/**< Zbanuj gracza */
	Admin_Unban,			/**< Odbanuj gracza */
	Admin_Slay,				/**< Zgladz/zabij/zadaj obrazenia innemu graczowi */
	Admin_Changemap,		/**< Zmien mape */
	Admin_Convars,			/**< Zmiana podstawowych convarow */
	Admin_Config,			/**< Zmiana konfiguracji */
	Admin_Chat,				/**< Specjalne przywileje przy pisaniu na czacie */
	Admin_Vote,				/**< Specjalne przywileje przy glosowaniu */
	Admin_Password,			/**< Ustawianie hasla serwera */
	Admin_RCON,				/**< Uzywanie RCON */
	Admin_Cheats,			/**< Zmiana komendy sv_cheats i uzywanie jej komend */
	Admin_Root,				/**< Domyslnie dostep do wszystkiego */
	Admin_Custom1,			/**< Pierwsza flaga specjalna */
	Admin_Custom2,			/**< Druga flaga specjalna */
	Admin_Custom3,			/**< Trzecia flaga specjalna */
	Admin_Custom4,			/**< Czwarta flaga specjalna */
	Admin_Custom5,			/**< Piata flaga specjalna */
	Admin_Custom6,			/**< Szosta flaga specjalna */
	/* --- */
};

#define AdminFlags_TOTAL	21		/**< Ogolna ilosc flag admina */

/**
 * @section Wartosci bitowe dla flag admina.
 */
#define ADMFLAG_RESERVATION			(1<<0)		/**< Makra dla Admin_Reservation jako flaga bitowa */
#define ADMFLAG_GENERIC				(1<<1)		/**< Makra dla Admin_Generic jako flaga bitowa */
#define ADMFLAG_KICK				(1<<2)		/**< Makra dla Admin_Kick jako flaga bitowa */
#define ADMFLAG_BAN					(1<<3)		/**< Makra dla Admin_Ban jako flaga bitowa */
#define ADMFLAG_UNBAN				(1<<4)		/**< Makra dla Admin_Unban jako flaga bitowa */
#define ADMFLAG_SLAY				(1<<5)		/**< Makra dla Admin_Slay jako flaga bitowa */
#define ADMFLAG_CHANGEMAP			(1<<6)		/**< Makra dla Admin_Changemap jako flaga bitowa */
#define ADMFLAG_CONVARS				(1<<7)		/**< Makra dla Admin_Convars jako flaga bitowa */
#define ADMFLAG_CONFIG				(1<<8)		/**< Makra dla Admin_Config jako flaga bitowa */
#define ADMFLAG_CHAT				(1<<9)		/**< Makra dla Admin_Chat jako flaga bitowa */
#define ADMFLAG_VOTE				(1<<10)		/**< Makra dla Admin_Vote jako flaga bitowa */
#define ADMFLAG_PASSWORD			(1<<11)		/**< Makra dla Admin_Password jako flaga bitowa */
#define ADMFLAG_RCON				(1<<12)		/**< Makra dla Admin_RCON jako flaga bitowa */
#define ADMFLAG_CHEATS				(1<<13)		/**< Makra dla Admin_Cheats jako flaga bitowa */
#define ADMFLAG_ROOT				(1<<14)		/**< Makra dla Admin_Root jako flaga bitowa */
#define ADMFLAG_CUSTOM1				(1<<15)		/**< Makra dla Admin_Custom1 jako flaga bitowa */
#define ADMFLAG_CUSTOM2				(1<<16)		/**< Makra dla Admin_Custom2 jako flaga bitowa */
#define ADMFLAG_CUSTOM3				(1<<17)		/**< Makra dla Admin_Custom3 jako flaga bitowa */
#define ADMFLAG_CUSTOM4				(1<<18)		/**< Makra dla Admin_Custom4 jako flaga bitowa */
#define ADMFLAG_CUSTOM5				(1<<19)		/**< Makra dla Admin_Custom5 jako flaga bitowa */
#define ADMFLAG_CUSTOM6				(1<<20)		/**< Makra dla Admin_Custom6 jako flaga bitowa */

/**
 * @endsection
 */

/**
 * @section "Sztywne" metody autoryzacji
 */
#define AUTHMETHOD_STEAM			"steam"		/**< Autoryzacja opatra na steamID */
#define AUTHMETHOD_IP				"ip"		/**< Autoryzacja opatra na IP */
#define AUTHMETHOD_NAME				"name"		/**< Autoryzacja opatra na nicku */

/**
 * @endsection
 */

/**
 * Access override types.
 */
enum OverrideType
{
	Override_Command = 1,	/**< Command */
	Override_CommandGroup,	/**< Command group */
};

/**
 * Access override rules.
 */
enum OverrideRule
{
	Command_Deny = 0,
	Command_Allow = 1,
};

/**
 * NIE DZIALA, NIE UZYWAC
 */
enum ImmunityType
{
	Immunity_Default = 1,	/**< NIE DZIALA */
	Immunity_Global,		/**< NIE DZIALA */
};

/** 
 * Okresla unikalne wejscie w pamieci cache pozwolen grupy.  Nie sa uchwytami.
 */
enum GroupId
{
	INVALID_GROUP_ID = -1,	/**< Nieporawidlowa/nieistniejaca grupa */
};

/** 
 * Okresla unikalne wejscie w pamieci cache pozwolen adminow.  Nie sa uchwytami.
 */
enum AdminId
{
	INVALID_ADMIN_ID = -1,	/**< Niepoprawny/nieistniejacy admin */
};

/**
 * Metody obliczania pozwolenia na dostep.
 */
enum AdmAccessMode
{
	Access_Real,		/**< Standardowy dostep dla gracza */
	Access_Effective,	/**< Dostep ktory gracz uzyskuje od swoich grup */
};

/**
 * Reprezentuje zmienne obszary pamieci.
 */
enum AdminCachePart
{
	AdminCache_Overrides = 0,		/**< Global overrides */
	AdminCache_Groups = 1,			/**< Wszystkie grupy (automatically uniewaznia adminow) */
	AdminCache_Admins = 2,			/**< Wszyscy admini */
};

methodmap AdminId {
	//Pobiera nazwe admina tak jak jest to robione w CreateAdmin().
	//
	// @note Funkcja moze zwracac ciag UTF-8, and will safely chop UTF-8 strings.
	//
	// @param name          Buffer do zapisania imienia.
	// @param maxlength     Maksymalnyy rozmiar buffera.
	// @return              Ilosc zapisanych bitow.
	public native void GetUsername(char[] name, int maxlength);

	// Przypisuje admina do identyfikatora w celu szybkiego wyszukiwania w przyszlosci. Powiazanie musi byc unikalne.
	//
	// @param authMethod    Metoda uzycia, wczesniej zdefiniowana lub pobrana z RegisterAuthIdentType().
	// @param ident         String zawierajaca dowolne, unikalne ID.
	// @return              True jesli prawda, false jesli metoda autoryzacji nie zostala znaleziona,
	//                      ID jest juz w uzyciu, lub ID niepoprawne dla metody autoryzacji.
	public native bool BindIdentity(const char[] authMethod, const char[] ident);

	// Ustawia lub zabiera flage adminowi.
	//
	// @param flag          flaga.
	// @param enabled       True - odblokowac, False - odblokowac.
	public native void SetFlag(AdminFlag flag, bool enabled);

	// Sprawdza czy admin ma dana flage.
	//
	// @param flag          flaga.
	// @param mode          Tryb dostepu do sprawdzenia.
	// @return              True - posiada flage, False - nie posiada flagi.
	public native bool HasFlag(AdminFlag flag, AdmAccessMode mode=Access_Effective);

	// Zwraca bitowy ciag znakow zawierajacy flagi danego admina.
	//
	// @param mode          Tryb dostepu do sprawdzenia.
	// @return              Ciag znakow zawierajacy posiadane flagi.
	public native int GetFlags(AdmAccessMode mode);

	//Dodaje grupe do odziedziczonej listy grup admina. Wszystkie flagi grupy
	// beda dodane do dzialajacych flag admina.
	//
	// @param gid           index GroupId grupy.
	// @return              True - prawda, False - niepoprawny input lub zduplikowane czlonkostwo.
	public native bool InheritGroup(GroupId gid);

	// Zwraca informacje o grupie od admina.
	//
	// @param index         Numer grupy do pobrania od 0 to n-1, gdzie n
	//                      oznacza wartosc GroupCount.
	// @param name          Buffer do umieszczenia nazwy grupy.
	//                      Note: Operacja bezpiecznie podzieli lancuchy UTF-8.
	// @param maxlength     Maksymalny rozmiar buffera.
	// @return              Index GroupId index i wskaznik imienia, lub
	//                      INVALID_GROUP_ID i NULL w przypadku bledu.
	public native GroupId GetGroup(int index, const char[] name, int maxlength);

	// Ustawia haslo admina.
	//
	// @param password      String zawierajacy haslo.
	public native void SetPassword(const char[] password);

	// Pobiera haslo admina.
	//
	// @param buffer        Opcjonalny buffer do umieszczenia hasla.
	// @param maxlength     Maksymalny rozmiar buffera.
	//                      Note: Operacja bezpiecznie podzieli lancuchy UTF-8.
	// @return              True jesli haslo istnieje, False - nie istnieje.
	public native bool GetPassword(char[] buffer="", int maxlength=0);

	// Sprawdza czy admin moze obrac za cel innego admina (ban etc).
	//
	// Prawa rzadzace ta komenda:
	// 0. Jesli AdminId targetujacego to INVALID_ADMIN_ID, targetowanie nie przechodzi.
	// 1. Jesli AdminId targetowanego to INVALID_ADMIN_ID, targetowanie przechodzi.
	// 2. Jesli admin targetuje samego siebie,
	//    targetowanie przechodzi.
	// 3. Jesli targetujacy admin ma roota, targetowanie przechodzi.
	// 4. Jesli tergetowany admin ma wyzszy immunitet (okreslany komenda
	//    sm_immunity_mode) niz admin targetujacy, then targetowanie nie przechodzi.
	// 5. Jesli targetowany admin ma specjalny immunitet od targetujacego admina
	// przez grupe immunitetow, targetowanie nie przechodzi.
	// 6. Targetowanie przechodzi.
	//
	// @param target        Targetuj admina (moze byc INVALID_ADMIN_ID).
	// @return              True jesli mozna targetowac, false jesli nie mozna.
	public native bool CanTarget(AdminId other);

	// Ilosc w grup w ktorych admin jest czlonkiem.
	property int GroupCount {
		public native get();
	}

	// Poziom immunitetu uzyty do targetowania.
	property int ImmunityLevel {
		public native get();
		public native set(int level);
	}
}

methodmap GroupId {
	// Sprawdza czy flaga jest dostepna w zbiorze flag grupy.
	//
	// @param flag			flaga.
	// @return				True - jest dostepna, false - nie jest.
	public native bool HasFlag(AdminFlag flag);

	// Dodaje lub usuba flage ze zbioru flag grupy.
	//
	// @param flag			Flaga, ktora chcemy zmodyfikowac.
	// @param enabled		True - ustawienie flagi, False - usuniecie/zablokowanie flagi.
	public native void SetFlag(AdminFlag flag, bool enabled);

	// Zwraca flagi, ktore czlonkowie tej grupy posiadaja.
	//
	// @return				Bitowy ciag znakow, zawierajacy posiadane flagi.
	public native int GetFlags();

	// Zwraca grupe, na ktora Twoja grupa jest odporna (czyt. jestescie wyzej w hierarchii) (na podstawie indexu).
	//
	// @param number		Index od 0 do N-1, na podstawie GroupImmunitiesCount.
	// @return				GroupId grupy, na ktora Twoja grupa jest odporna, lub INVALID_GROUP_ID w razie porazki.
	public native GroupId GetGroupImmunity(int index);

	// Dodaje immunitet okreslonej grupie.
	//
	// @param other			Group id, ktora ma uzyskac immunitet.
	public native void AddGroupImmunity(GroupId other);

	// Retrieves a group-specific command override.
	//
	// @param name			String containing command name (case sensitive).
	// @param type			Override type (specific command or group).
	// @param rule			Optional pointer to store allow/deny setting.
	// @return				True if an override exists, false otherwise.
	public native bool GetCommandOverride(const char[] name, OverrideType type, OverrideRule &rule);

	// Adds a group-specific override type.
	//
	// @param name			String containing command name (case sensitive).
	// @param type			Override type (specific command or group).
	// @param rule			Override allow/deny setting.
	public native void AddCommandOverride(const char[] name, OverrideType type, OverrideRule rule);

	// Ilosc grup z okreslonym immunitetem
	property int GroupImmunitiesCount {
		public native get();
	}

	// Poziom immunitetu uzyty do targetowania (?).
	property int ImmunityLevel {
		public native get();
		public native set(int level);
	}
}

/**
 * Wywolywany, kiedy czesc pamieci podrecznej musi zostac przebudowana.
 *
 * @param part			Czesc pamieci podrecznej admina do przebudowania.
 */
forward void OnRebuildAdminCache(AdminCachePart part);

/**
 * Tells the admin system to dump a portion of the cache.
 *
 * @param part			Part of the cache to dump.  Specifying groups also dumps admins.
 * @param rebuild		If true, the rebuild forwards will fire.
 */
native void DumpAdminCache(AdminCachePart part, bool rebuild);

/**
 * Adds a global command flag override.  Any command registered with this name
 * will assume the new flag.  This is applied retroactively as well.
 *
 * @param cmd			String containing command name (case sensitive).
 * @param type			Override type (specific command or group).
 * @param flags			New admin flag.
 */
native void AddCommandOverride(const char[] cmd, OverrideType type, int flags);

/**
 * Returns a command override.
 *
 * @param cmd			String containing command name (case sensitive).
 * @param type			Override type (specific command or group).
 * @param flags			By-reference cell to store the flag (undefined if not found).
 * @return				True if there is an override, false otherwise.
 */
native bool GetCommandOverride(const char[] cmd, OverrideType type, int &flags);

/**
 * Unsets a command override.
 *
 * @param cmd			String containing command name (case sensitive).
 * @param type			Override type (specific command or group).
 */
native void UnsetCommandOverride(const char[] cmd, OverrideType type);

/**
 * Tworzy nowa grupe.  Nazwa musi byc unikatowa.
 *
 * @param group_name	String zawietajacy nazwe grupy.
 * @return				id nowej grupy, INVALID_GROUP_ID jesli dana grupa juz istnieje.
 */
native GroupId CreateAdmGroup(const char[] group_name);

/**
 * Znajduje grupe po imieniu.
 *
 * @param group_name	String zawierajacy nazwe grupy.
 * @return				id grupy, lub INVALID_GROUP_ID jesli nie znaleziono.
 */
native GroupId FindAdmGroup(const char[] group_name);

/**
 * Dodaje lub usuwa flage ze zbioru flag grupy.
 * @note These are called "add flags" because they add to a user's flags.
 *
 * @param id			Group id.
 * @param flag			Flaga admina to zmiany.
 * @param enabled		True - ustawienie flagi, false usuniecie/zablokowanie jej.
 */
native void SetAdmGroupAddFlag(GroupId id, AdminFlag flag, bool enabled);

/**
 * Gets the set value of an add flag on a group's flag set.
 * @note These are called "add flags" because they add to a user's flags.
 *
 * @param id			Group id.
 * @param flag			Admin flag to retrieve.
 * @return				True if enabled, false otherwise,
 */
native bool GetAdmGroupAddFlag(GroupId id, AdminFlag flag);

/**
 * Zwraca zbior flag dany uzytkownikowi z jego grup.
 * @note These are called "add flags" because they add to a user's flags.
 *
 * @param id			GroupId of the group.
 * @return				Bitowy ciag znakow zawierajacy aktywne flagi.
 */
native int GetAdmGroupAddFlags(GroupId id);

/**
 * @deprecated			Funkcjonalnosc usunieta.
 */
#pragma deprecated Use SetAdmGroupImmunityLevel() instead.
native void SetAdmGroupImmunity(GroupId id, ImmunityType type, bool enabled);

/**
 * @deprecated			Funkcjonalnosc usunieta.
 */
#pragma deprecated Use GetAdmGroupImmunityLevel() instead.
native bool GetAdmGroupImmunity(GroupId id, ImmunityType type);

/**
 * Daje immunitet konkretnej grupie.
 *
 * @param id			Group id.
 * @param other_id		Group id od ktorej otrzymano immunitet.
 */
native void SetAdmGroupImmuneFrom(GroupId id, GroupId other_id);

/**
 * Zwraca ilosc konkretnych immunitetow grup.
 *
 * @param id			Group id.
 * @return				Ilosc immunitetow grup.
 */
native int GetAdmGroupImmuneCount(GroupId id);

/**
 * Zwraca grupe, na ktora Twoja grupa jest odporna (czyt. jestescie wyzej w hierarchii) (na podstawie indexu).
 *
 * @param id			Group id.
 * @param number		Index od 0 do N-1, na podstawie GetAdmGroupImmuneCount().
 * @return				GroupId na ktora Twoja grupa jest odporna, lub INVALID_GROUP_ID w razie niepowodzenia.
 */
native GroupId GetAdmGroupImmuneFrom(GroupId id, int number); 

/**
 * Adds a group-specific override type.
 *
 * @param id			Group id.
 * @param name			String containing command name (case sensitive).
 * @param type			Override type (specific command or group).
 * @param rule			Override allow/deny setting.
 */
native void AddAdmGroupCmdOverride(GroupId id, const char[] name, OverrideType type, OverrideRule rule);

/**
 * Retrieves a group-specific command override.
 *
 * @param id			Group id.
 * @param name			String containing command name (case sensitive).
 * @param type			Override type (specific command or group).
 * @param rule			Optional pointer to store allow/deny setting.
 * @return				True if an override exists, false otherwise.
 */
native bool GetAdmGroupCmdOverride(GroupId id, const char[] name, OverrideType type, OverrideRule &rule);

/**
 * Registers an authentication identity type.  You normally never need to call this except for 
 * very specific systems.
 *
 * @param name		Codename to use for your authentication type.
 */
native void RegisterAuthIdentType(const char[] name);

/**
 * Creates a new admin entry in the permissions cache.
 *
 * @param name			Name for this entry (does not have to be unique).
 * 						Specify an empty string for an anonymous admin.
 */
native AdminId CreateAdmin(const char[] name="");

/**
 * Zwraca nazwe admina, stworzona za pomoca CreateAdmin().
 *
 * @note This function can return UTF-8 strings, and will safely chop UTF-8 strings.
 *
 * @param id			AdminId admina.
 * @param name			Buffer do umieszczenia imienia.
 * @param maxlength		Maksymalny rozmiar buffera.
 * @return				Ilosc zapisanych bajtow.
 */
native int GetAdminUsername(AdminId id, char[] name, int maxlength);

/**
 * Binds an admin to an identity for fast lookup later on.  The bind must be unique.
 *
 * @param id			AdminId of the admin.
 * @param auth			Auth method to use, predefined or from RegisterAuthIdentType().
 * @param ident			String containing the arbitrary, unique identity.
 * @return				True on success, false if the auth method was not found,
 *						ident was already taken, or ident invalid for auth method.
 */
native bool BindAdminIdentity(AdminId id, const char[] auth, const char[] ident);

/**
 * Ustawia flage admina (niezaleznie, czy ja ma czy nie).
 *
 * @param id			AdminId admina.
 * @param flag			Flaga do modyfikacji.
 * @param enabled		True - ustawienie flagi, false - usuniecie/zablokowanie jej.
 */
native void SetAdminFlag(AdminId id, AdminFlag flag, bool enabled);

/**
 * Sprawdza, czy dana flaga admina jest aktywna.
 *
 * @param id			AdminId admina.
 * @param flag			Sprawdzana flaga.
 * @param mode			Sprawdzany tryb dostepu.
 * @return				True jesli aktywna, w przeciwnym razie - false.
 */
native bool GetAdminFlag(AdminId id, AdminFlag flag, AdmAccessMode mode=Access_Effective);

/**
 * Zwraca bitowy ciag znakow aktywnych flag admina.
 *
 * @param id			AdminId admina.
 * @param mode			Sprawdzany tryb dostepu.
 * @return				Bitowy ciag znakow aktywnych flag.
 */
native int GetAdminFlags(AdminId id, AdmAccessMode mode);

/**
 * Adds a group to an admin's inherited group list.  Any flags the group has 
 * will be added to the admin's effective flags.
 *
 * @param id			AdminId index of the admin.
 * @param gid			GroupId index of the group.
 * @return				True on success, false on invalid input or duplicate membership.
 */
native bool AdminInheritGroup(AdminId id, GroupId gid);

/**
 * Zwraca ilosc grup, ktorych dany admin jest czlonkiem.
 * 
 * @param id			AdminId admina.
 * @return				Ilosc grup, ktorych dany admin jest czlonkiem.
 */
native int GetAdminGroupCount(AdminId id);

/**
 * Zwraca informacje o grupie admina
 *
 * @param id        	AdminId admina.
 * @param index			Numer grupy, od 0 do N-1, gdzie N
 *						jest wartoscia GetAdminGroupCount(id).
 * @param name			Buffer do umieszczenia nazwy grupy.
 *						Note: This will safely chop UTF-8 strings.
 * @param maxlength		Maksymalny rozmiar buffera.
 * @return				GroupId oraz name pointer, lub
 *						INVALID_GROUP_ID oraz NULL w razie bledu.
 */
native GroupId GetAdminGroup(AdminId id, int index, const char[] name, int maxlength);

/**
 * Ustawia adminowi haslo.
 *
 * @param id			AdminId admina.
 * @param password		Ciag znakow, zawierajacy haslo.
 */
native void SetAdminPassword(AdminId id, const char[] password);

/**
 * Zwraca haslo admina.
 *
 * @param id			AdminId admina.
 * @param buffer			Opcjonalny buffer do przechowania hasla.
 * @param maxlength		Maksymalny rozmiar buffera.
 *						Note: This will safely chop UTF-8 strings.
 * @return				True, jest haslo bylo ustawione, w przeciwnym wypadku - false.
 */
native bool GetAdminPassword(AdminId id, char[] buffer="", int maxlength=0);

/**
 * Probuje znalezc admina na podstawie metody autoryzacji oraz identyfikator.
 *
 * @param auth			Metoda autoryzacji.
 * @param identity		Ciag znakow zawierajacy identyfikator.
 * @return				AdminId jesli znaleziono, w przeciwnym razie INVALID_ADMIN_ID.
 */
native AdminId FindAdminByIdentity(const char[] auth, const char[] identity);

/**
 * Removes an admin entry from the cache.
 *
 * @note This will remove any bindings to a specific user.
 *
 * @param id			AdminId index to remove/invalidate.
 * @return				True on success, false otherwise.
 */
native bool RemoveAdmin(AdminId id);

/**
 * Konwetruje bitowy ciag znakow do tablicy bitow.
 *
 * @param bits			Bitowy ciag znakow zawierajacy flagi.
 * @param array			Tablica do zapisania flag.  Odblokowane flagi beda ustawione na 'true'.
 * @param maxSize		Maksymalna ilosc flag, jakie tablica moze pomiescic.
 * @return				Ilosc zapisanych flag.
 */
native int FlagBitsToBitArray(int bits, bool[] array, int maxSize);

/**
 * Konwertuje tablice flag do bitowego ciagu znakow.
 *
 * @param array			Tablica, zawierajaca true/false poszczegolnych flag.
 * @param maxSize		Maksymalny rozmiar tablicy flag.
 * @return				Bitowy ciag znakow stworzony na podstawie tablicy.
 */
native int FlagBitArrayToBits(const bool[] array, int maxSize);

/**
 * Konwertuje tablice flag do postaci bitowej.
 *
 * @param array			Tablica, zawierajaca flagi, ktore sa aktywne.
 * @param numFlags		Ilosc flag w tablicy.
 * @return				Bitowy ciag znakow stworzony na podstawie tablicy flag.
 */
native int FlagArrayToBits(const AdminFlag[] array, int numFlags);

/**
 * Konwertuje bitowy ciag znakow do tablicy flag.
 *
 * @param bits			Bitowy ciag znakow zawierajacy flagi.
 * @param array			Tablica do zapisania flag.
 * @param maxSize		Maksymalny rozmiar tablicy.
 * @return				Ilosc zapisanych flag.
 */
native int FlagBitsToArray(int bits, AdminFlag[] array, int maxSize);

/**
 * Znajduje flage na podstawie jej imienia.
 *
 * @param name			Nazwa flagi (np. "kick"), rozmiar liter ma znaczenie.
 * @param flag			Zmienna, w ktorej zostanie umieszczona flaga.
 * @return				True, jesli sie powiodlo, w przeciwnym razie - false.
 */
native bool FindFlagByName(const char[] name, AdminFlag &flag);

/**
 * Znajduje flage na podstawie znaku.
 *
 * @param c				Znak/token flagi (ASCII)
 * @param flag			Zmienna, w ktorej zostanie umieszczona flaga.
 * @return				True, jesli sie powiodlo, w przeciwnym razie - false.
 */
native bool FindFlagByChar(int c, AdminFlag &flag);

/**
 * Znajduje znak flagi (char).
 *
 * @param flag                 Flaga.
 * @param c                    Zmienna, w ktorej zostanie umieszczony znak.
 * @return                     True, jesli sie powiodlo, w przeciwnym razie - false.
 */
native bool FindFlagChar(AdminFlag flag, int &c);

/**
 * Converts a string of flag characters to a bit string.
 *
 * @param flags			Flag ASCII string.
 * @param numchars		Optional variable to store the number of bytes read.
 * @return				Bit string of ADMFLAG values.
 */
native int ReadFlagString(const char[] flags, int &numchars=0);

/**
 * Sprawdza, czy dany admin moze cos zrobic drugiemu (slap, kick etc.).
 *
 * Dla uproszczenia opisu zakladamy, ze X to admin, ktoremu sprawdzamy, czy ma wladze nad drugim adminem (Y).
 * Obowiazujace zasady:
 * 0. Jezeli AdminId admina X wynosi INVALID_ADMIN_ID, zwraca false.
 * 1. Jezeli AdminId admina Y wynosi INVALID_ADMIN_ID, zwraca true.
 * 2. Jezeli X i Y maja takie same AdminId, zwraca true.
 * 3. Jezeli X ma roota, zwraca true.
 * 4. Jezeli Y ma wieksza wartosc sm_immunity_mode niz X, zwraca false.
 * 5. Jezeli Y ma okreslony immunitet dany mu przez X poprzez immunitety grup, zwraca false
 * 6. W kazdym innym przypadku zwraca true.
 *
 * @param admin			AdminId X (moze byc INVALID_ADMIN_ID).
 * @param target		AdminId Y (moze byc INVALID_ADMIN_ID).
 * @return				True, jesli ma wladze. False, jesli jest odporny.
 */
native bool CanAdminTarget(AdminId admin, AdminId target);

/**
 * Tworzy metode identyfikacji admina.  Nie musi byc wywolywane wiecej niz jeden raz dla konkretnej metody.
 *
 * @param method		Nazwa metody identyfikacji.
 * @return				True, jesli sie powiodlo, w przeciwnym razie - false.
 */
native bool CreateAuthMethod(const char[] method);

/**
 * Ustawia poziom immunitetu grupie.
 *
 * @param gid			Id grupy.
 * @param level			Wartosc immunitetu.
 * @return				Stara wartosc immunitetu grupy.
 */
native int SetAdmGroupImmunityLevel(GroupId gid, int level);

/**
 * Zwraca poziom immunitetu grupy (defaults to 0).
 *
 * @param gid			Id grupy.
 * @return				Poziom immunitetu grupy.
 */
native int GetAdmGroupImmunityLevel(GroupId gid);

/**
 * Ustawia poziom immunitetu admina.
 *
 * @param id			Id admina.
 * @param level			Poziom immunitetu.
 * @return				Stary poziom immunitetu admina.
 */
native int SetAdminImmunityLevel(AdminId id, int level);

/**
 * Zwraca poziom immunitetu admina.
 *
 * @param id			Id admina.
 * @return				Poziom immunitetu admina.
 */
native int GetAdminImmunityLevel(AdminId id);

/**
 * Konwertuje flage (char) do postaci bitowej.
 * 
 * @param flag			Flaga.
 * @return				Bitowa reprezentacja flagi.
 */
stock int FlagToBit(AdminFlag flag)
{
	return (1 << view_as<int>(flag));
}

/**
 * Konwetruje flage (bit) do postaci znaku (AdminFlag).
 *
 * @param bit			Flaga (bit).
 * @param flag			Tutaj umieszczona zostanie flaga w postaci znaku.
 * @return				True, jesli sie powiodlo. W przeciwnym razie - false
 */
stock bool BitToFlag(int bit, AdminFlag &flag)
{
	AdminFlag array[1];
	
	if (FlagBitsToArray(bit, array, 1))
	{
		flag = array[0];
		return true;
	}
	
	return false;
}
