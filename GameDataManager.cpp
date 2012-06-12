#include "GameDataManager.h"

GameDataManager::GameDataManager(void){
	loadGameData();
}

GameDataManager::~GameDataManager(void){
}

void GameDataManager::loadGameData(void){
	loadOtherItem();
	loadWeaponItem();
	loadArmorItem();
	loadStoneItem();
	loadSpilitItem();
	loadCharacterType();
	loadCharacterElement();
}

void GameDataManager::loadOtherItem(void){
	std::vector<std::string> cash;

	int  type = 0;
	char getc;
	std::string load; //‚±‚Ì•Ï”‚É1•¶š‚¸‚Â“Ç‚İ‚İ‚Ü‚·

	//ŠJ‚­
	int filepass = FileRead_open( "dat/oitem.csv" );

	//“Ç‚İ‚İ
	while( 1 ){
		load = "";
		for( int i = 0; i< 100; i++ ){

			getc = FileRead_getc( filepass );

			if( getc == ',' ){
				getc = '\0';
				break;
			}else if( getc == '\n' ){
				getc = '\0';
				break;
			}

			load += getc;

			if( FileRead_eof( filepass ) != 0 ){
				goto EXIT;
			}
		}

		//“Ç‚İ‚ñ‚¾î•ñ‚ğconfig‚ÉŠi”[
		if( cash.size() != 10 ){
			cash.push_back( load );
		}
		if( cash.size() == 10 ){
			this->other.push_back( new ItemOther( cash ) );
			cash.clear();
		}
	}
	
//I—¹ˆ—
EXIT:
	if( filepass != 0 ){
		FileRead_close( filepass );
	}

	return;			
}

void GameDataManager::loadWeaponItem(void){
	std::vector<std::string> cash;
	int  type = 0;
	char getc;
	std::string load; //‚±‚Ì•Ï”‚É1•¶š‚¸‚Â“Ç‚İ‚İ‚Ü‚·

	//ŠJ‚­
	int filepass = FileRead_open( "dat/witem.csv" );

	//“Ç‚İ‚İ
	while( 1 ){
		load = "";
		for( int i = 0; i< 100; i++ ){

			getc = FileRead_getc( filepass );

			if( getc == ',' ){
				getc = '\0';
				break;
			}else if( getc == '\n' ){
				getc = '\0';
				break;
			}

			load += getc;

			if( FileRead_eof( filepass ) != 0 ){
				goto EXIT;
			}
		}

		//“Ç‚İ‚ñ‚¾î•ñ‚ğconfig‚ÉŠi”[
		if( cash.size() != 14 ){
			cash.push_back( load );
		}
		if( cash.size() == 14 ){
			this->weapon.push_back( new ItemWeapon( cash ) );
			cash.clear();
		}
	}
	
//I—¹ˆ—
EXIT:
	if( filepass != 0 ){
		FileRead_close( filepass );
	}

	return;		
}

void GameDataManager::loadArmorItem(void){
	std::vector<std::string> cash;
	int  type = 0;
	char getc;
	std::string load; //‚±‚Ì•Ï”‚É1•¶š‚¸‚Â“Ç‚İ‚İ‚Ü‚·

	//ŠJ‚­
	int filepass = FileRead_open( "dat/aitem.csv" );

	//“Ç‚İ‚İ
	while( 1 ){
		load = "";
		for( int i = 0; i< 100; i++ ){

			getc = FileRead_getc( filepass );

			if( getc == ',' ){
				getc = '\0';
				break;
			}else if( getc == '\n' ){
				getc = '\0';
				break;
			}

			load += getc;

			if( FileRead_eof( filepass ) != 0 ){
				goto EXIT;
			}
		}

		//“Ç‚İ‚ñ‚¾î•ñ‚ğconfig‚ÉŠi”[
		if( cash.size() != 17 ){
			cash.push_back( load );
		}
		if( cash.size() == 17 ){
			this->armor.push_back( new ItemArmor( cash ) );
			cash.clear();
		}
	}
	
//I—¹ˆ—
EXIT:
	if( filepass != 0 ){
		FileRead_close( filepass );
	}

	return;		
}

void GameDataManager::loadStoneItem(void){
	std::vector<std::string> cash;
	int  type = 0;
	char getc;
	std::string load; //‚±‚Ì•Ï”‚É1•¶š‚¸‚Â“Ç‚İ‚İ‚Ü‚·

	//ŠJ‚­
	int filepass = FileRead_open( "dat/jitem.csv" );

	//“Ç‚İ‚İ
	while( 1 ){
		load = "";
		for( int i = 0; i< 100; i++ ){

			getc = FileRead_getc( filepass );

			if( getc == ',' ){
				getc = '\0';
				break;
			}else if( getc == '\n' ){
				getc = '\0';
				break;
			}

			load += getc;

			if( FileRead_eof( filepass ) != 0 ){
				goto EXIT;
			}
		}

		//“Ç‚İ‚ñ‚¾î•ñ‚ğconfig‚ÉŠi”[
		if( cash.size() != 24 ){
			cash.push_back( load );
		}
		if( cash.size() == 24 ){
			this->stone.push_back( new ItemStone( cash ) );
			cash.clear();
		}
	}
	
//I—¹ˆ—
EXIT:
	if( filepass != 0 ){
		FileRead_close( filepass );
	}

	return;	
	
}

void GameDataManager::loadSpilitItem(void){

	std::vector<std::string> cash;
	int  type = 0;
	char getc;
	std::string load; //‚±‚Ì•Ï”‚É1•¶š‚¸‚Â“Ç‚İ‚İ‚Ü‚·

	//ŠJ‚­
	int filepass = FileRead_open( "dat/sitem.csv" );

	//“Ç‚İ‚İ
	while( 1 ){
		load = "";
		for( int i = 0; i< 100; i++ ){

			getc = FileRead_getc( filepass );

			if( getc == ',' ){
				getc = '\0';
				break;
			}else if( getc == '\n' ){
				getc = '\0';
				break;
			}

			load += getc;

			if( FileRead_eof( filepass ) != 0 ){
				goto EXIT;
			}
		}

		//“Ç‚İ‚ñ‚¾î•ñ‚ğconfig‚ÉŠi”[
		if( cash.size() != 14 ){
			cash.push_back( load );
		}
		if( cash.size() == 14 ){
			this->spilit.push_back( new ItemSpilit( cash ) );
			cash.clear();
		}
	}
	
//I—¹ˆ—
EXIT:
	if( filepass != 0 ){
		FileRead_close( filepass );
	}

	return;		
	
}
void GameDataManager::loadCharacterType(void){
	std::vector<std::string> cash;
	int  type = 0;
	char getc;
	std::string load; //‚±‚Ì•Ï”‚É1•¶š‚¸‚Â“Ç‚İ‚İ‚Ü‚·

	//ŠJ‚­
	int filepass = FileRead_open( "dat/typest.csv" );

	//“Ç‚İ‚İ
	while( 1 ){
		load = "";
		for( int i = 0; i< 100; i++ ){

			getc = FileRead_getc( filepass );

			if( getc == ',' ){
				getc = '\0';
				break;
			}else if( getc == '\n' ){
				getc = '\0';
				break;
			}

			load += getc;

			if( FileRead_eof( filepass ) != 0 ){
				goto EXIT;
			}
		}

		//“Ç‚İ‚ñ‚¾î•ñ‚ğconfig‚ÉŠi”[
		if( cash.size() != 28 ){
			cash.push_back( load );
		}
		if( cash.size() == 28 ){
			this->type.push_back( new CharacterDataType( cash ) );
			cash.clear();
		}
	}
	
//I—¹ˆ—
EXIT:
	if( filepass != 0 ){
		FileRead_close( filepass );
	}

	return;	
}

void GameDataManager::loadCharacterElement(void){
	std::vector<std::string> cash;
	int  type = 0;
	char getc;
	std::string load; //‚±‚Ì•Ï”‚É1•¶š‚¸‚Â“Ç‚İ‚İ‚Ü‚·

	//ŠJ‚­
	int filepass = FileRead_open( "dat/element.csv" );

	//“Ç‚İ‚İ
	while( 1 ){
		load = "";
		for( int i = 0; i< 100; i++ ){

			getc = FileRead_getc( filepass );

			if( getc == ',' ){
				getc = '\0';
				break;
			}else if( getc == '\n' ){
				getc = '\0';
				break;
			}

			load += getc;

			if( FileRead_eof( filepass ) != 0 ){
				goto EXIT;
			}
		}

		//“Ç‚İ‚ñ‚¾î•ñ‚ğconfig‚ÉŠi”[
		if( cash.size() != 18 ){
			cash.push_back( load );
		}
		if( cash.size() == 18 ){
			this->element.push_back( new CharacterElement( cash ) );
			cash.clear();
		}
	}
	
//I—¹ˆ—
EXIT:
	if( filepass != 0 ){
		FileRead_close( filepass );
	}

	return;	
}

ItemOther*  GameDataManager::getDataOtherItem( int dataNumber ){
	return other[dataNumber];
}

ItemWeapon* GameDataManager::getDataWeaponItem( int dataNumber ){
	return weapon[dataNumber];
}

ItemArmor*  GameDataManager::getDataArmorItem( int dataNumber ){
	return armor[dataNumber];
}

ItemStone*  GameDataManager::getDataStoneItem( int dataNumber ){
	return stone[dataNumber];
}

ItemSpilit* GameDataManager::getDataSpilitItem( int dataNumber ){
	return spilit[dataNumber];
}

CharacterDataType* GameDataManager::getCharacterType( int dataNumber ){
	return type[dataNumber];
}

CharacterElement*  GameDataManager::getCharacterElement( int dataNumber ){
	return element[dataNumber];
}

void GameDataManager::getListOtherItem(std::vector<ListItem*>& cash){

	for( int i = 0; i < other.size(); i++ ){
		cash.push_back( other[i]->createListItem( 200, other[i] ) );
	}
}
void GameDataManager::getListWeapon(std::vector<ListItem*>& cash){

	for( int i = 0; i < weapon.size(); i++ ){
		cash.push_back( weapon[i]->createListItem( 200, weapon[i] ) );
	}
}
void GameDataManager::getListArmor(std::vector<ListItem*>& cash){

	for( int i = 0; i < armor.size(); i++ ){
		cash.push_back( armor[i]->createListItem( 200, armor[i] ) );
	}
}
void GameDataManager::getListStone(std::vector<ListItem*>& cash){

	for( int i = 0; i < stone.size(); i++ ){
		cash.push_back( stone[i]->createListItem( 200, stone[i] ) );
	}
}
void GameDataManager::getListSpilit(std::vector<ListItem*>& cash){

	for( int i = 0; i < spilit.size(); i++ ){
		cash.push_back( spilit[i]->createListItem( 200, spilit[i] ) );
	}
}
void GameDataManager::getListCharacterType(std::vector<ListItem*>& cash){

	for( int i = 0; i < type.size(); i++ ){
		cash.push_back( type[i]->createListItem( 200 ) );
	}
}
void GameDataManager::getListCharacterElement(std::vector<ListItem*>& cash){

	for( int i = 0; i < element.size(); i++ ){
		cash.push_back( element[i]->createListItem( 200 ) );
	}
}

