#pragma once

enum EMiniGameId { LOBBY = 0, BATTLE = 1, TUMBLE = 2, GLIDE = 3, BUILD_OFF = 4, NORMAL_WORLD = 15 };

class MiniGameDef {
public:
    static void StaticCtor();

    static void* GetCustomGameModeById(EMiniGameId id, bool);

    bool HasFeatureDirectionalFireworks() const;
    int GetLivesPerRound() const;
    double getBaseDamage(int, double) const;
};
