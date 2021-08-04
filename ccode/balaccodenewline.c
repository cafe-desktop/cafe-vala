/* balaccodenewline.c generated by balac, the Bala compiler
 * generated from balaccodenewline.bala, do not modify */

/* balaccodenewline.bala
 *
 * Copyright (C) 2006  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include "balaccode.h"
#include <glib.h>

static gpointer bala_ccode_newline_parent_class = NULL;

static void bala_ccode_newline_real_write (BalaCCodeNode* base,
                                    BalaCCodeWriter* writer);
static GType bala_ccode_newline_get_type_once (void);

static void
bala_ccode_newline_real_write (BalaCCodeNode* base,
                               BalaCCodeWriter* writer)
{
	BalaCCodeNewline * self;
	self = (BalaCCodeNewline*) base;
	g_return_if_fail (writer != NULL);
	bala_ccode_writer_write_newline (writer);
}

BalaCCodeNewline*
bala_ccode_newline_construct (GType object_type)
{
	BalaCCodeNewline* self = NULL;
	self = (BalaCCodeNewline*) bala_ccode_node_construct (object_type);
	return self;
}

BalaCCodeNewline*
bala_ccode_newline_new (void)
{
	return bala_ccode_newline_construct (BALA_TYPE_CCODE_NEWLINE);
}

static void
bala_ccode_newline_class_init (BalaCCodeNewlineClass * klass,
                               gpointer klass_data)
{
	bala_ccode_newline_parent_class = g_type_class_peek_parent (klass);
	((BalaCCodeNodeClass *) klass)->write = (void (*) (BalaCCodeNode*, BalaCCodeWriter*)) bala_ccode_newline_real_write;
}

static void
bala_ccode_newline_instance_init (BalaCCodeNewline * self,
                                  gpointer klass)
{
}

/**
 * Represents a line break in the C code.
 */
static GType
bala_ccode_newline_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BalaCCodeNewlineClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_ccode_newline_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BalaCCodeNewline), 0, (GInstanceInitFunc) bala_ccode_newline_instance_init, NULL };
	GType bala_ccode_newline_type_id;
	bala_ccode_newline_type_id = g_type_register_static (BALA_TYPE_CCODE_NODE, "BalaCCodeNewline", &g_define_type_info, 0);
	return bala_ccode_newline_type_id;
}

GType
bala_ccode_newline_get_type (void)
{
	static volatile gsize bala_ccode_newline_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_newline_type_id__volatile)) {
		GType bala_ccode_newline_type_id;
		bala_ccode_newline_type_id = bala_ccode_newline_get_type_once ();
		g_once_init_leave (&bala_ccode_newline_type_id__volatile, bala_ccode_newline_type_id);
	}
	return bala_ccode_newline_type_id__volatile;
}

