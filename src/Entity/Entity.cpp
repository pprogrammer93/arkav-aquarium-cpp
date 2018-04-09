#include "Entity.hpp"

Entity::Entity(int x, int y, char type) {
	this->x = x;
	this->y = y;
	this->type = type;
}

void Entity::tick() {
	this->tickTime = tickTime + 1;
}

// Getter
int Entity::getId() const {
	return this->id;
}
int Entity::getX() const {
	return this->x;
}
int Entity::getY() const {
	return this->y;
}

// Setter
void setId(int id) {
	this->id = id;
}
void setX(int x) {
	this->x = x;
}
void setY(int y) {
	this->y = y;
}