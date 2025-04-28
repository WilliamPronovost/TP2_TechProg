#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

void* allocate(size_t size);

typedef struct Node Node;

struct Node {
	int x;
	int y;
	Node* prev;
	Node* adj[3];
	int visited;
};

int BFS();

Node* FindBeginning(unsigned char* img);
Node* FindEnd(unsigned char* img);
int A_Star(Node* stack, Node* current);
