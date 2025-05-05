#include "TP2.h"

#include <stdio.h>
#include <stdlib.h>
#pragma once

 #include "stb_image.h"
 #include "stb_image_write.h"

int BFS() {
	int width, height, channels;
	unsigned char* img = stbi_load("Labyrinthe/31.bmp", &width, &height, &channels, 0);
	unsigned char* img_2 = stbi_load("Labyrinthe/31.bmp", &width, &height, &channels, 0);
	if (img == NULL) {
		printf("error loading image");
		return 0;
	}
	size_t img_size = width * height * channels;
	size_t last_line_offset = width * (height - 1) * channels;
	size_t first_line_end = width * channels;
	//for (unsigned char* p = img, *pg = img_2; //debut
	//	p != img + first_line_end; // fin
	//	p += channels, pg += channels) { // increment
		
	unsigned char* pg = img + coord_to_linear(15, 15, width, channels);
		printf("%d", * pg);
		printf(" ,");
		printf("%d", *(pg+1));
		printf(" ,"); 
		printf("%d", *(pg+2));
		
	//}
	//stbi_write_bmp("Labyrinthe/31_cpy.bmp", width, height, channels, img_2);

}

size_t coord_to_linear(int x, int y,int width, int channels) {
	return (x + (y * width)) * channels;
}

Node* FindBeginning(unsigned char* img)
{
	Node* begin;
	Node* searching_node = begin->prev;
	malloc(sizeof(begin));
	begin->x = 0;
	begin->y = 0;
	while (searching_node != begin->x && searching_node != begin->y) {
		if (searching_node->prev != NULL) {
			if (searching_node->prev == begin->prev) {
				searching_node == NULL;
			}
			else {
				searching_node->prev = searching_node->prev->prev;
			}
		}
		else if (searching_node->prev == begin == NULL) {
			break;
		}
		if (searching_node->adj == NULL) {
			searching_node->adj[3] = searching_node->prev = begin;
			searching_node->visited += 1;
			searching_node->prev = searching_node;
		}
	}
}

Node* FindEnd(unsigned char* img) {
	Node* end;
	Node* searching_node;
	malloc(sizeof(end));
	end->x = 0;
	end->y = 0;
	while (searching_node != end->x && searching_node != end->y) {
		if (searching_node->prev != NULL) {
			if (searching_node->prev == end->prev) {
				searching_node == NULL;
			}
			else {
				searching_node->prev = searching_node->prev->prev;
			}
		}
		else if (searching_node->prev == end == NULL) {
			break;
		}
		if (searching_node->adj == NULL) {
			searching_node->adj[3] = searching_node->prev = end;
			searching_node->visited += 1;
			searching_node->prev = searching_node;
		}
	}
}

int A_Star(Node* stack, Node* current) {
	Node* visit_node = stack;
	Node* edge;
	if (visit_node = stack->visited) {
		edge = current;
		visit_node = visit_node->visited;
	}
	if (edge != NULL) {
		edge = edge->prev;
		visit_node = visit_node->visited;
	}
	else {
		visit_node++;
		visit_node = stack;
	}
	return 0;
}
