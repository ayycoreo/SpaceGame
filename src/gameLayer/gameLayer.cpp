#define GLM_ENABLE_EXPERIMENTAL
#include "gameLayer.h"
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include "platformInput.h"
#include "imgui.h"
#include <iostream>
#include <sstream>
#include "imfilebrowser.h"
#include <gl2d/gl2d.h>
#include <platformTools.h>


struct GamePlayData 
{
	glm::vec2 playerPosition = {100,100};


};





GamePlayData gamePlayData;
gl2d::Renderer2D renderer;
gl2d::Texture playerShipTexture;



bool initGame()
{
	//initializing stuff for the renderer
	gl2d::init();
	renderer.create();

	playerShipTexture.loadFromFile(RESOURCES_PATH "spaceShip/ships/coolBlackShip.png", true);

	
	
	return true;
}



bool gameLogic(float deltaTime)
{
#pragma region init stuff
	int w = 0; int h = 0;
	w = platform::getFrameBufferSizeX(); //window w
	h = platform::getFrameBufferSizeY(); //window h
	
	glViewport(0, 0, w, h);
	glClear(GL_COLOR_BUFFER_BIT); //clear screen

	renderer.updateWindowMetrics(w, h);
#pragma endregion



#pragma region player movement
	glm::vec2 playerMovement = {};


	// Remeber that the origin is at th top left corner of the screen, so that means that for y going down the screen increases y and going up the screen decreases y


	if(platform::isButtonHeld(platform::Button::W) || platform::isButtonHeld(platform::Button::Up))
	{
		playerMovement.y = -1;
	}
	if(platform::isButtonHeld(platform::Button::S) || platform::isButtonHeld(platform::Button::Down))
	{
		playerMovement.y = 1;
	}
	if(platform::isButtonHeld(platform::Button::A) || platform::isButtonHeld(platform::Button::Left))
	{
		playerMovement.x = -1;
	}
	if(platform::isButtonHeld(platform::Button::D) || platform::isButtonHeld(platform::Button::Right))
	{
		playerMovement.x = 1;
	}

	if( playerMovement.x != 0 || playerMovement.y != 0) 
	{
		playerMovement = glm::normalize(playerMovement);
		playerMovement *= 300 * deltaTime; //move player at 300 pixels per second
		gamePlayData.playerPosition += playerMovement;
	}


#pragma endregion


	// How to read the { x , x , x, x} vector: The first two elements are the position (x, y) and the last two are the size (width, height).
	renderer.renderRectangle({gamePlayData.playerPosition, 100, 100}, playerShipTexture);


	renderer.flush();  // informing the GPU to draw the things that were added to the renderer


	//ImGui::ShowDemoWindow();


	return true;
#pragma endregion

}

//This function might not be be called if the program is forced closed
void closeGame()
{



}
