#include <Geode/modify/CCMenuItemSpriteExtra.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSpriteExtra) {
    void selected() {
        CCMenuItemSpriteExtra::selected();
        
        auto currentSprite = this->getNormalImage();
        if (currentSprite) {
            auto newSpriteFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("soggycat.png"_spr);
            
            if (newSpriteFrame) {
                static_cast<CCSprite*>(currentSprite)->setDisplayFrame(newSpriteFrame);
            } else {
                auto texture = CCTextureCache::sharedTextureCache()->addImage("soggycat.png"_spr);
                if (texture) {
                    static_cast<CCSprite*>(currentSprite)->setTexture(texture);
                }
            }
        }
    }
};
