#include "TP2.h"

#include <stdio.h>
#include <stdlib.h>
#pragma once

 #include "stb_image.h"
 #include "stb_image_write.h"

int BFS() {
	int width, height, channels;
	unsigned char* img = stbi_load("31.bmp", &width, &height, &channels, 0);
	if (img == NULL) {
		printf("error loading image");
	}
}

Node* FindBeginning(unsigned char* img)
{
	Node* begin;
	malloc(sizeof(begin));
	//TODO: Find the entrance pixel
	return begin;
}

Node* FindEnd(unsigned char* img) {
	Node* end;
	malloc(sizeof(end));
	//TODO Find the exit pixel
	return end;
}

int A_Star(Node* stack, Node* current) {
	return 0;
}
