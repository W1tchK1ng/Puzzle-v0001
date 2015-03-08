#ifndef __INICIO_SCENE_H__
#define __INICIO_SCENE_H__

#include "cocos2d.h"
#include "cocos-ext.h"

class Inicio : public cocos2d::CCLayer
{
public:
	Inicio();
	~Inicio();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback    
	void Salir();	
	void GotoSceneGame();
	void GotoSceneTileMap();
	void ActiveMainMenu();
	void ButtonUpdate_MainMenu(CCObject* pSender, cocos2d::gui::TouchEventType type);		
	void ButtonUpdate_Settings(CCObject* pSender, cocos2d::gui::TouchEventType type);	
	void ShowLogo(bool value);	
	void ShowMainMenu(bool value);
	void ShowSettings(bool value1, bool value2);	
	void FadeOutSettings();
	void FadeOutMainMenu();	
	bool flag_music;
	cocos2d::CCSequence *create_button_animation1();
	cocos2d::CCSequence *create_button_animation2();
	cocos2d::CCSequence *create_button_animation3();

    // implement the "static node()" method manually
    CREATE_FUNC(Inicio);

	cocos2d::gui::UIImageView* imageLogo;
	cocos2d::gui::UIImageView* imageMenu;	
	
	};

#endif // __Inicio_SCENE_H__
