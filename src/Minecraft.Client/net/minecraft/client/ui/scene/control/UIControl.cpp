#include "net/minecraft/client/ui/scene/control/UIControl.h"

#include "fui/fuiRenderNode.h"

UIControl::UIControl() {
    this->mParentUIScene = nullptr;
    this->mOpacity = 1.0f;
    this->mName = "";
    this->mVisible = true;
    this->mBoolIdk = 0;
    this->mSettedUp = 0;
    this->mFuiRenderNode = nullptr;
}

bool UIControl::setupControl(UIScene* parentUIScene, fuiRenderNode* renderNode, const std::string& name) {
    this->mParentUIScene = parentUIScene;
    this->mName = name;
    this->mFuiRenderNode = renderNode->findNode(name.c_str());

    if (this->mFuiRenderNode) {
        this->mPosX = this->mFuiRenderNode->getX();
        this->mPosY = this->mFuiRenderNode->getY();
        this->mWidth = this->mFuiRenderNode->getWidth();
        this->mHeight = this->mFuiRenderNode->getHeight();
    }

    return this->mFuiRenderNode != nullptr;
}

void UIControl::UpdateControl() {
    if (this->mFuiRenderNode) {
        this->mPosX = this->mFuiRenderNode->getX();
        this->mPosY = this->mFuiRenderNode->getY();
        this->mWidth = this->mFuiRenderNode->getWidth();
        this->mHeight = this->mFuiRenderNode->getHeight();
    }
}

void UIControl::tick() {}

void UIControl::ReInit() {
    if (this->mFuiRenderNode) {
        this->mFuiRenderNode->setAlpha(this->mOpacity);
        this->mFuiRenderNode->setVisibility(this->mVisible);
    }
}

void UIControl::setFocus(bool) {}

bool UIControl::hasFocus() {
    return false;
}
