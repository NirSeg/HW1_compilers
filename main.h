/**************************************
 *
 * University of Haifa
 *
 * Theory of compilation
 *
 * P machine compiler - code generation project
 *
 * Yosi Ben Asher
 * Email: yosibenasher@gmail.com
 *
 * Mariah Akree
 * Email: mariah.uni.haifa@gmail.com
 *
 **************************************/

#ifndef MAIN_H
#define MAIN_H
// Cause the current source file to be included only once in a single compilation.
//#pragma once


#include <iostream>
#include <fstream>
#include <assert.h>

#include "ast.h"
#include "miny.tab.hpp"

#include <map>
#include <stack>
#include <string>

//Global constant strings (file names)
#define AST_FILE_HEADER "==================  Abstract Syntax Tree ================"
#define TREE_OUTPUT_TEXT_FILE "ASTFile.txt"
#define OUTPUT_CODE_TEXT "outputFile.txt"


/**
 * Global Object, root of AST created by the parser (look for instantiation at miny.tab.cpp) 
 */
extern Object * root;
extern int yyparse (void);

extern "C" {
	// Pointer to the program file that should be compiled.
	extern FILE *yyin;
	// syntax check and AST builder.  
  extern int yylex(void);
}













class CodeGenerator {
public:
	CodeGenerator() : spIndex_(0),jmpIndex_(0),depth_(0){
		OutputFile_ = new fstream(OUTPUT_CODE_TEXT,ios::out);
		assert(OutputFile_);
	}

	virtual ~CodeGenerator() {	
		OutputFile_->close();
	}

	void Code (Object * node) ;

private:
	//int CaseLevel (NODE node) const;
	//void CodeI(NODE node, ArrayNode* arrayNode) ;
	//void CodeR (NODE node) ;
	//void CodeL (NODE node) ;

private:
	fstream * OutputFile_;
	//map<string,VarInfo> hashMmap_;
	//map<string,ArrayNode*> arrayHashMmap_;
	//map<string,RecordNode*> recordHashMmap_;
	// stack to hold spIndex;
	//stack<int> spStack_; 
	
	int spIndex_;
	int jmpIndex_;
	int depth_; 
};

#endif //MAIN_H
