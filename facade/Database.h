/**
 * @file Database.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef DATABASE_H
#define DATABASE_H

#include "Model.h"

class Database
{
 private:

 public:
	Database(/* args */);
	~Database();
	void Save(Model &model);
};

#endif // DATABASE_H
