#include <Geode/modify/CCMenuItemSprite.hpp>

class $modify(MyButtonHook, CCMenuItemSprite) {
    void selected() {
        CCMenuItemSprite::selected();

        auto sprite = this->getNormalImage();
        if (sprite) {
            auto tex = CCTextureCache::sharedTextureCache()
                ->addImage("soggy.png");

            sprite->setTexture(tex);
            sprite->setTextureRect(
                CCRectMake(0, 0, tex->getContentSize().width, tex->getContentSize().height)
            );
        }
    }
};
