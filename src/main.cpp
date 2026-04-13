#include <Geode/modify/CCMenuItemSprite.hpp>

class $modify(MyButtonHook, CCMenuItemSprite) {
void selected() {
    CCMenuItemSprite::selected();

    FMODAudioEngine::sharedEngine()->playEffect("honk.wav");

    auto sprite = this->getNormalImage();
    if (sprite) {
        auto tex = CCTextureCache::sharedTextureCache()
            ->addImage("soggy.png");

        sprite->setTexture(tex);
    }
}
};
