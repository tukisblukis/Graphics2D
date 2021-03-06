#pragma once

#include <glad/glad.h>

class Buffer
{
public:
	Buffer();
	void init(float* vertices, unsigned int verticesSize);
	void init(float* vertices, unsigned int verticesSize, unsigned int* indices, unsigned int indicesSize);
	void destroy();
	void setAttributef(int location, int size, int stride, int offset);
	void use();

private:
	unsigned int vao;
	unsigned int vbo;
	unsigned int ebo;
};