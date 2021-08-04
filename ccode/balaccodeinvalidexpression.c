/* balaccodeinvalidexpression.c generated by balac, the Vala compiler
 * generated from balaccodeinvalidexpression.bala, do not modify */

/* balaccodeinvalidexpression.bala
 *
 * Copyright (C) 2009  Jürg Billeter
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

static gpointer bala_ccode_invalid_expression_parent_class = NULL;

static void bala_ccode_invalid_expression_real_write (ValaCCodeNode* base,
                                               ValaCCodeWriter* writer);
static GType bala_ccode_invalid_expression_get_type_once (void);

ValaCCodeInvalidExpression*
bala_ccode_invalid_expression_construct (GType object_type)
{
	ValaCCodeInvalidExpression* self = NULL;
	self = (ValaCCodeInvalidExpression*) bala_ccode_expression_construct (object_type);
	return self;
}

ValaCCodeInvalidExpression*
bala_ccode_invalid_expression_new (void)
{
	return bala_ccode_invalid_expression_construct (BALA_TYPE_CCODE_INVALID_EXPRESSION);
}

static void
bala_ccode_invalid_expression_real_write (ValaCCodeNode* base,
                                          ValaCCodeWriter* writer)
{
	ValaCCodeInvalidExpression * self;
	self = (ValaCCodeInvalidExpression*) base;
	g_return_if_fail (writer != NULL);
	g_assert_not_reached ();
}

static void
bala_ccode_invalid_expression_class_init (ValaCCodeInvalidExpressionClass * klass,
                                          gpointer klass_data)
{
	bala_ccode_invalid_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) bala_ccode_invalid_expression_real_write;
}

static void
bala_ccode_invalid_expression_instance_init (ValaCCodeInvalidExpression * self,
                                             gpointer klass)
{
}

/**
 * Represents an invalid expression.
 */
static GType
bala_ccode_invalid_expression_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeInvalidExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_ccode_invalid_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeInvalidExpression), 0, (GInstanceInitFunc) bala_ccode_invalid_expression_instance_init, NULL };
	GType bala_ccode_invalid_expression_type_id;
	bala_ccode_invalid_expression_type_id = g_type_register_static (BALA_TYPE_CCODE_EXPRESSION, "ValaCCodeInvalidExpression", &g_define_type_info, 0);
	return bala_ccode_invalid_expression_type_id;
}

GType
bala_ccode_invalid_expression_get_type (void)
{
	static volatile gsize bala_ccode_invalid_expression_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_invalid_expression_type_id__volatile)) {
		GType bala_ccode_invalid_expression_type_id;
		bala_ccode_invalid_expression_type_id = bala_ccode_invalid_expression_get_type_once ();
		g_once_init_leave (&bala_ccode_invalid_expression_type_id__volatile, bala_ccode_invalid_expression_type_id);
	}
	return bala_ccode_invalid_expression_type_id__volatile;
}

