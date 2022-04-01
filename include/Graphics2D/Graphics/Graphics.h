#pragma once

#include <glad/glad.h>

#include <Graphics2D/Graphics/Shader.h>
#include <Graphics2D/Graphics/Buffer.h>
#include <Graphics2D/Color.h>

class Graphics {
public:
	Graphics();
	~Graphics();
	void init();
	void destroy();
	void setColor(float r, float g, float b, float a);
	void setColor(int r, int g, int b, int a);
	void clear();

	void drawRect(float x, float y, float width, float height);
	void fillRect(float x, float y, float height, float width);

private:
	Shader* rectShader;
	Buffer* buffer;
	Color* color;
};