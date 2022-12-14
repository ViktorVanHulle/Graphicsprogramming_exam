#ifndef GAME_RENDERER_H_
#define GAME_RENDERER_H_

#include "Externs.h"
#include "Tunnel.h"
#include "Window.h"
#include "Block.h"

class GameRenderer {
private:
	unsigned int tunnelVAO;
	Tunnel* tunnel;
	Block* activeBlock;
	Window window;
	void renderTunnel();
	void renderBlock();
public:

	GameRenderer();
	void renderer();
	void init();
	Tunnel* getTunnel() { return tunnel; };
	Block* getActiveBlock() { return activeBlock; }
};

#endif // !GAME_RENDERER_H_

