#pragma once

typedef struct QNode QNode;
typedef struct QNode {
	void* data;
	QNode* prev;
	QNode* next;
	size_t count;
}Queue;

typedef struct Node Node;

struct Node {
	void* data;
	Node* next;
	Node* prev;
	Node* adj[UINT8_MAX];
	uint8_t len;
	uint8_t visited;
	QNode revPath;
};

typedef Node Queue;

typedef struct Node Node;

struct Node {
	int max_size;
	int top;
	void** data;
};

typedef struct Node Stack;

int BFS(Node* root[], void* key, Stack* s);

int DFS(Node* root[], int len, Node* curr, void* key, Stack* s);
