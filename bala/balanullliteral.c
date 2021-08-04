/* balanullliteral.c generated by balac, the Vala compiler
 * generated from balanullliteral.bala, do not modify */

/* balanullliteral.bala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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

#include "bala.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>

#define _bala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (bala_code_node_unref (var), NULL)))

static gpointer bala_null_literal_parent_class = NULL;

static void bala_null_literal_real_accept (ValaCodeNode* base,
                                    ValaCodeVisitor* visitor);
static gchar* bala_null_literal_real_to_string (ValaCodeNode* base);
static gboolean bala_null_literal_real_is_pure (ValaExpression* base);
static gboolean bala_null_literal_real_check (ValaCodeNode* base,
                                       ValaCodeContext* context);
static void bala_null_literal_real_emit (ValaCodeNode* base,
                                  ValaCodeGenerator* codegen);
static GType bala_null_literal_get_type_once (void);

/**
 * Creates a new null literal.
 *
 * @param source reference to source code
 * @return       newly created null literal
 */
ValaNullLiteral*
bala_null_literal_construct (GType object_type,
                             ValaSourceReference* source)
{
	ValaNullLiteral* self = NULL;
	self = (ValaNullLiteral*) bala_literal_construct (object_type);
	bala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}

ValaNullLiteral*
bala_null_literal_new (ValaSourceReference* source)
{
	return bala_null_literal_construct (BALA_TYPE_NULL_LITERAL, source);
}

static void
bala_null_literal_real_accept (ValaCodeNode* base,
                               ValaCodeVisitor* visitor)
{
	ValaNullLiteral * self;
	self = (ValaNullLiteral*) base;
	g_return_if_fail (visitor != NULL);
	bala_code_visitor_visit_null_literal (visitor, self);
	bala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}

static gchar*
bala_null_literal_real_to_string (ValaCodeNode* base)
{
	ValaNullLiteral * self;
	gchar* _tmp0_;
	gchar* result = NULL;
	self = (ValaNullLiteral*) base;
	_tmp0_ = g_strdup ("null");
	result = _tmp0_;
	return result;
}

static gboolean
bala_null_literal_real_is_pure (ValaExpression* base)
{
	ValaNullLiteral * self;
	gboolean result = FALSE;
	self = (ValaNullLiteral*) base;
	result = TRUE;
	return result;
}

static gboolean
bala_null_literal_real_check (ValaCodeNode* base,
                              ValaCodeContext* context)
{
	ValaNullLiteral * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaSourceReference* _tmp4_;
	ValaSourceReference* _tmp5_;
	ValaNullType* _tmp6_;
	ValaNullType* _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	gboolean result = FALSE;
	self = (ValaNullLiteral*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = bala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = bala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	bala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	_tmp4_ = bala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp5_ = _tmp4_;
	_tmp6_ = bala_null_type_new (_tmp5_);
	_tmp7_ = _tmp6_;
	bala_expression_set_value_type ((ValaExpression*) self, (ValaDataType*) _tmp7_);
	_bala_code_node_unref0 (_tmp7_);
	_tmp8_ = bala_code_node_get_error ((ValaCodeNode*) self);
	_tmp9_ = _tmp8_;
	result = !_tmp9_;
	return result;
}

static void
bala_null_literal_real_emit (ValaCodeNode* base,
                             ValaCodeGenerator* codegen)
{
	ValaNullLiteral * self;
	self = (ValaNullLiteral*) base;
	g_return_if_fail (codegen != NULL);
	bala_code_visitor_visit_null_literal ((ValaCodeVisitor*) codegen, self);
	bala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}

static void
bala_null_literal_class_init (ValaNullLiteralClass * klass,
                              gpointer klass_data)
{
	bala_null_literal_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) bala_null_literal_real_accept;
	((ValaCodeNodeClass *) klass)->to_string = (gchar* (*) (ValaCodeNode*)) bala_null_literal_real_to_string;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*) (ValaExpression*)) bala_null_literal_real_is_pure;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) bala_null_literal_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) bala_null_literal_real_emit;
}

static void
bala_null_literal_instance_init (ValaNullLiteral * self,
                                 gpointer klass)
{
}

/**
 * Represents a literal `null` in the source code.
 */
static GType
bala_null_literal_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaNullLiteralClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_null_literal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaNullLiteral), 0, (GInstanceInitFunc) bala_null_literal_instance_init, NULL };
	GType bala_null_literal_type_id;
	bala_null_literal_type_id = g_type_register_static (BALA_TYPE_LITERAL, "ValaNullLiteral", &g_define_type_info, 0);
	return bala_null_literal_type_id;
}

GType
bala_null_literal_get_type (void)
{
	static volatile gsize bala_null_literal_type_id__volatile = 0;
	if (g_once_init_enter (&bala_null_literal_type_id__volatile)) {
		GType bala_null_literal_type_id;
		bala_null_literal_type_id = bala_null_literal_get_type_once ();
		g_once_init_leave (&bala_null_literal_type_id__volatile, bala_null_literal_type_id);
	}
	return bala_null_literal_type_id__volatile;
}

