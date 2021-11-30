/*
 * CYANCORE LICENSE
 * Copyrights (C) 2019, Cyancore Team
 *
 * File Name		: project.c
 * Description		: This file consists of project srouces
 * Primary Author	: Akash Kollipara [akashkollipara@gmail.com]
 * Organisation		: Cyancore Core-Team
 */
#include <terravisor/bootstrap.h>
volatile int temp;
void plug()
{
	/* < ! > Plug in one time setup code */
	bootstrap();
	while(temp<20)temp++;
	return;
}

void play()
{
	/* < ! > Play looping code here*/
	return;
}
