/* Corpus.cpp
 *
 * Copyright (C) 2011 Paul Boersma
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Corpus.h"

#include "oo_DESTROY.h"
#include "Corpus_def.h"
#include "oo_COPY.h"
#include "Corpus_def.h"
#include "oo_EQUAL.h"
#include "Corpus_def.h"
#include "oo_CAN_WRITE_AS_ENCODING.h"
#include "Corpus_def.h"
#include "oo_WRITE_TEXT.h"
#include "Corpus_def.h"
#include "oo_READ_TEXT.h"
#include "Corpus_def.h"
#include "oo_WRITE_BINARY.h"
#include "Corpus_def.h"
#include "oo_READ_BINARY.h"
#include "Corpus_def.h"
#include "oo_DESCRIPTION.h"
#include "Corpus_def.h"

Thing_implement (Corpus, Table, 0);

/* End of file Corpus.cpp */
