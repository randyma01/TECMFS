/*
 * Collections.h
 *
 *  Created on: Nov 15, 2016
 *      Author: randy
 */

#ifndef TECMFS_SERVER_COLLECTIONS_H_
#define TECMFS_SERVER_COLLECTIONS_H_

#include "Document.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>

using namespace std;

/**
 *A Collection stand as a group of Document. This class
 *manages a series Documents saving them on a Vector. All operations
 *to be made on the Documents are handle by this class.
 */
class Collections {

private:
	/*Attributes*/
	vector <Document> documentsVector; /*Vector that manage all the the Documents.*/
	string name = "Collection"; /*Set the name of the Collection.*/

public:
	/*Methods*/
	Collections();
	virtual ~Collections();

	/*Getters*/
	string getName();
	vector <Document> getDocumentVector();

	/*Functions*/
	void addDocument(Document newValue); /*Insert a new document in the Collection's List.*/
	void deleteDocument(string delName); /*Delete a Document inside the Collection's List.*/
	void printCollection(); /*Prints the entire Collection's List.*/
	bool searchDocument(string name); /*Searches a Document inside the list.*/

	Document getDocument();

};

#endif /* TECMFS_SERVER_COLLECTIONS_H_ */
