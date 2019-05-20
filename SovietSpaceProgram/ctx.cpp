#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <vector>
#include "ctx.h"


namespace ctx 
{
	std::vector<GLfloat> transformStack;
	void fillStyle(float r, float g, float b) {
		glColor3f(r / 255, g / 255, b / 255);
	}
	void translate(float x, float y) {
		glTranslatef(x, y, 0);
	}
	void fillRect(float x, float y, float width, float height) {
		glBegin(GL_QUADS);
		glVertex2f(x, y);
		glVertex2f(x + width, y);
		glVertex2f(x + width, y + height);
		glVertex2f(x, y + height);
		glEnd();
		glFlush();
	}
	void drawImage(sf::Texture & image, float ix, float iy, float iw, float ih, float x, float y, float width, float height) {
		glEnable(GL_TEXTURE_2D);
		sf::Texture::bind(&image);
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glTexCoord2f(ix / image.getSize().x, iy / image.getSize().y); glVertex2f(x, y);
		glTexCoord2f((ix + iw) / image.getSize().x, iy / image.getSize().y); glVertex2f(x + width, y);
		glTexCoord2f((ix + iw) / image.getSize().x, (iy + ih) / image.getSize().y); glVertex2f(x + width, y + height);
		glTexCoord2f(ix / image.getSize().x, (iy + ih) / image.getSize().y); glVertex2f(x, y + height);
		glEnd();
		glDisable(GL_TEXTURE_2D);
	}
	void save() {
		glPushMatrix();
		/*
			GLfloat * mat = new GLfloat[16];
		glGetFloatv(GL_MODELVIEW_MATRIX, mat);
		transformStack.push_back(mat);
		*/
	}
	void restore() {
		glPopMatrix();
		/*
			glLoadMatrixf(transformStack.back());
		transformStack.pop_back();
		*/
	}
	void rotate(float angle) {
		glRotatef(angle, 0, 0, 1);
	}
	void scale(float x, float y) {
		glScalef(x, y, 1);
	}
}