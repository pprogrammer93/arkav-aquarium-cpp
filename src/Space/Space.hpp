/*
 * Interface Space
 *
 * Middleware between Aquarium and Entity
 * Give possibility for Entity to communicate with Aquarium for
 * object position manipulation in the screen
 */

#ifndef SPACE_HPP
#define SPACE_HPP

class Space {
public:
	// Give Entity possibility to move in Space or derived class of Space
	virtual bool moveTo(int entityId, int entityType, double newX, double newY) = 0;

	// Give Entity possibility to remove/consume in Space or derived class of Space
	virtual void remove(int entityId, int entityType) = 0;

	// Give Entity information about another Entity existence by its id
	virtual bool isExist(int entityId, int entityType) = 0;
};

#endif