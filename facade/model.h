/**
 * @file model.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MODEL_H
#define MODEL_H

#include "element.h"

class Model
{
private:
	/* data */
public:
	Model();
	Model(Element &e);
	~Model();
};

#endif // MODEL_H
