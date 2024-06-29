/*copyright (c) 2024 Tristan Wellman*/

#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bridethread.h"
#include "log.h"

#define ARRLEN(x) \
		(sizeof(x)/sizeof(x[0]))
		
#define VComp(v1,v2) \
	((v1.x)==(v2.x)) && \
	((v1.y)==(v2.y)) && \
	((v1.z)==(v2.z))

#endif

