#include <Geode/modify/CCMenuItemSpriteExtra.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSpriteExtra) {
    void selected() {
        CCMenuItemSpriteExtra::selected();

        if (auto sprite = this->getNormalImage()) {
            if (auto tex = CCTextureCache::sharedTextureCache()->addImage("soggycat.png")) {
                sprite->setTexture(tex);
                sprite->setTextureRect(CCRectMake(
                    0, 0,
                    tex->getContentSize().width,
                    tex->getContentSize().height
                ));
            }
        }
    }
};
