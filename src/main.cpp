#include <Geode/modify/CCMenuItemSpriteExtra.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSpriteExtra) {
    void selected() {
        CCMenuItemSpriteExtra::selected();

        if (auto sprite = typeinfo_cast<CCSprite*>(this->getNormalImage())) {
            if (auto tex = CCTextureCache::sharedTextureCache()->addImage("soggycat.png", false)) {
                sprite->setTexture(tex);
                sprite->setTextureRect(CCRectMake(
                    0, 0,
                    tex->getPixelsWide(),
                    tex->getPixelsHigh()
                ));
            }
        }
    }
};
