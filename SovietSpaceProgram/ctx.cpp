#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "ctx.h"


namespace ctx 
{
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
		glFlush();
	}
	void save() {
		glPushMatrix();
	}
	void restore() {
		glPopMatrix();
	}
	void rotate(float angle) {
		glRotatef(angle, 0, 0, 1);
	}
	void scale(float x, float y) {
		glScalef(x, y, 1);
	}
	Pixel getPixel(int x, int y)
	{
		Pixel pixel;
		glReadPixels(x, 1080 - y, 1, 1, GL_RGB, GL_UNSIGNED_BYTE, &pixel);
		return pixel;
	}
}