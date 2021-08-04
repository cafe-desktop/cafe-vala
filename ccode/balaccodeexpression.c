/* balaccodeexpression.c generated by balac, the Bala compiler
 * generated from balaccodeexpression.bala, do not modify */

/* balaccodeexpression.bala
 *
 * Copyright (C) 2006-2008  Jürg Billeter
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

static gpointer bala_ccode_expression_parent_class = NULL;

static void bala_ccode_expression_real_write_inner (BalaCCodeExpression* self,
                                             BalaCCodeWriter* writer);
static GType bala_ccode_expression_get_type_once (void);

static void
bala_ccode_expression_real_write_inner (BalaCCodeExpression* self,
                                        BalaCCodeWriter* writer)
{
	g_return_if_fail (writer != NULL);
	bala_ccode_node_write ((BalaCCodeNode*) self, writer);
}

void
bala_ccode_expression_write_inner (BalaCCodeExpression* self,
                                   BalaCCodeWriter* writer)
{
	g_return_if_fail (self != NULL);
	BALA_CCODE_EXPRESSION_GET_CLASS (self)->write_inner (self, writer);
}

BalaCCodeExpression*
bala_ccode_expression_construct (GType object_type)
{
	BalaCCodeExpression* self = NULL;
	self = (BalaCCodeExpression*) bala_ccode_node_construct (object_type);
	return self;
}

static void
bala_ccode_expression_class_init (BalaCCodeExpressionClass * klass,
                                  gpointer klass_data)
{
	bala_ccode_expression_parent_class = g_type_class_peek_parent (klass);
	((BalaCCodeExpressionClass *) klass)->write_inner = (void (*) (BalaCCodeExpression*, BalaCCodeWriter*)) bala_ccode_expression_real_write_inner;
}

static void
bala_ccode_expression_instance_init (BalaCCodeExpression * self,
                                     gpointer klass)
{
}

/**
 * Represents an expression node in the C code tree.
 */
static GType
bala_ccode_expression_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BalaCCodeExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_ccode_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BalaCCodeExpression), 0, (GInstanceInitFunc) bala_ccode_expression_instance_init, NULL };
	GType bala_ccode_expression_type_id;
	bala_ccode_expression_type_id = g_type_register_static (BALA_TYPE_CCODE_NODE, "BalaCCodeExpression", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	return bala_ccode_expression_type_id;
}

GType
bala_ccode_expression_get_type (void)
{
	static volatile gsize bala_ccode_expression_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_expression_type_id__volatile)) {
		GType bala_ccode_expression_type_id;
		bala_ccode_expression_type_id = bala_ccode_expression_get_type_once ();
		g_once_init_leave (&bala_ccode_expression_type_id__volatile, bala_ccode_expression_type_id);
	}
	return bala_ccode_expression_type_id__volatile;
}

