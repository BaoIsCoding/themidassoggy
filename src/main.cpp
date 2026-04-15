#include <Geode/Geode.hpp>
#include <Geode/modify/CCMenuItemSprite.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSprite) {
    void selected() {
        CCMenuItemSprite::selected();

        FMODAudioEngine::sharedEngine()->playEffect("honk.wav");

        if (auto sprite = typeinfo_cast<CCSprite*>(this->getNormalImage())) {
            auto texCache = CCTextureCache::sharedTextureCache();
            auto newTexture = texCache->addImage("soggy.png", false);

            if (newTexture) {
                sprite->setTexture(newTexture);
            }
        }
    }
};
