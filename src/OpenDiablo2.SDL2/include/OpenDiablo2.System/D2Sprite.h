#ifndef OPENDIABLO2_SYSTEM_D2SPRITE_H
#define OPENDIABLO2_SYSTEM_D2SPRITE_H

#include <OpenDiablo2.Game/Common/D2Palette.h>
#include <OpenDiablo2.Game/Common/D2Point.h>
#include <OpenDiablo2.Game/Common/D2Size.h>

namespace OpenDiablo2::System {

class D2Sprite {
public:
	int Frame;
	int TotalFrames;
	bool Blend;
	bool Darken;
	OpenDiablo2::Game::Common::D2Point Location;
	OpenDiablo2::Game::Common::D2Size FrameSize;
	OpenDiablo2::Game::Common::D2Size LocalFrameSize;
	OpenDiablo2::Game::Common::D2Palette::Entry CurrentPalette;

	static D2Sprite * Load(std::string resourcePath, std::string palette, Game::Common::D2Point location, bool cacheFrames = false);
	static D2Sprite * Load(std::string resourcePath, std::string palette, bool cacheFrames = false);

private:
	D2Sprite();
};

}

#endif // OPENDIABLO2_SYSTEM_D2SPRITE_H
