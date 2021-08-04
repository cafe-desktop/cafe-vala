/* balaccodeassignment.c generated by balac, the Bala compiler
 * generated from balaccodeassignment.bala, do not modify */

/* balaccodeassignment.bala
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

#define _bala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (bala_ccode_node_unref (var), NULL)))

struct _BalaCCodeAssignmentPrivate {
	BalaCCodeExpression* _left;
	BalaCCodeAssignmentOperator _operator;
	BalaCCodeExpression* _right;
};

static gint BalaCCodeAssignment_private_offset;
static gpointer bala_ccode_assignment_parent_class = NULL;

static void bala_ccode_assignment_real_write (BalaCCodeNode* base,
                                       BalaCCodeWriter* writer);
static void bala_ccode_assignment_real_write_inner (BalaCCodeExpression* base,
                                             BalaCCodeWriter* writer);
static void bala_ccode_assignment_finalize (BalaCCodeNode * obj);
static GType bala_ccode_assignment_get_type_once (void);

static inline gpointer
bala_ccode_assignment_get_instance_private (BalaCCodeAssignment* self)
{
	return G_STRUCT_MEMBER_P (self, BalaCCodeAssignment_private_offset);
}

BalaCCodeExpression*
bala_ccode_assignment_get_left (BalaCCodeAssignment* self)
{
	BalaCCodeExpression* result;
	BalaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_left;
	result = _tmp0_;
	return result;
}

static gpointer
_bala_ccode_node_ref0 (gpointer self)
{
	return self ? bala_ccode_node_ref (self) : NULL;
}

void
bala_ccode_assignment_set_left (BalaCCodeAssignment* self,
                                BalaCCodeExpression* value)
{
	BalaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_ccode_node_ref0 (value);
	_bala_ccode_node_unref0 (self->priv->_left);
	self->priv->_left = _tmp0_;
}

BalaCCodeAssignmentOperator
bala_ccode_assignment_get_operator (BalaCCodeAssignment* self)
{
	BalaCCodeAssignmentOperator result;
	BalaCCodeAssignmentOperator _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_operator;
	result = _tmp0_;
	return result;
}

void
bala_ccode_assignment_set_operator (BalaCCodeAssignment* self,
                                    BalaCCodeAssignmentOperator value)
{
	g_return_if_fail (self != NULL);
	self->priv->_operator = value;
}

BalaCCodeExpression*
bala_ccode_assignment_get_right (BalaCCodeAssignment* self)
{
	BalaCCodeExpression* result;
	BalaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_right;
	result = _tmp0_;
	return result;
}

void
bala_ccode_assignment_set_right (BalaCCodeAssignment* self,
                                 BalaCCodeExpression* value)
{
	BalaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_ccode_node_ref0 (value);
	_bala_ccode_node_unref0 (self->priv->_right);
	self->priv->_right = _tmp0_;
}

BalaCCodeAssignment*
bala_ccode_assignment_construct (GType object_type,
                                 BalaCCodeExpression* l,
                                 BalaCCodeExpression* r,
                                 BalaCCodeAssignmentOperator op)
{
	BalaCCodeAssignment* self = NULL;
	g_return_val_if_fail (l != NULL, NULL);
	g_return_val_if_fail (r != NULL, NULL);
	self = (BalaCCodeAssignment*) bala_ccode_expression_construct (object_type);
	bala_ccode_assignment_set_left (self, l);
	bala_ccode_assignment_set_operator (self, op);
	bala_ccode_assignment_set_right (self, r);
	return self;
}

BalaCCodeAssignment*
bala_ccode_assignment_new (BalaCCodeExpression* l,
                           BalaCCodeExpression* r,
                           BalaCCodeAssignmentOperator op)
{
	return bala_ccode_assignment_construct (BALA_TYPE_CCODE_ASSIGNMENT, l, r, op);
}

static void
bala_ccode_assignment_real_write (BalaCCodeNode* base,
                                  BalaCCodeWriter* writer)
{
	BalaCCodeAssignment * self;
	BalaCCodeExpression* _tmp0_;
	BalaCCodeAssignmentOperator _tmp1_;
	BalaCCodeExpression* _tmp2_;
	self = (BalaCCodeAssignment*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_left;
	bala_ccode_node_write ((BalaCCodeNode*) _tmp0_, writer);
	_tmp1_ = self->priv->_operator;
	switch (_tmp1_) {
		case BALA_CCODE_ASSIGNMENT_OPERATOR_SIMPLE:
		{
			bala_ccode_writer_write_string (writer, " = ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_OR:
		{
			bala_ccode_writer_write_string (writer, " |= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_AND:
		{
			bala_ccode_writer_write_string (writer, " &= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_XOR:
		{
			bala_ccode_writer_write_string (writer, " ^= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_ADD:
		{
			bala_ccode_writer_write_string (writer, " += ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_SUB:
		{
			bala_ccode_writer_write_string (writer, " -= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_MUL:
		{
			bala_ccode_writer_write_string (writer, " *= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_DIV:
		{
			bala_ccode_writer_write_string (writer, " /= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_PERCENT:
		{
			bala_ccode_writer_write_string (writer, " %= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_LEFT:
		{
			bala_ccode_writer_write_string (writer, " <<= ");
			break;
		}
		case BALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_RIGHT:
		{
			bala_ccode_writer_write_string (writer, " >>= ");
			break;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
	_tmp2_ = self->priv->_right;
	bala_ccode_node_write ((BalaCCodeNode*) _tmp2_, writer);
}

static void
bala_ccode_assignment_real_write_inner (BalaCCodeExpression* base,
                                        BalaCCodeWriter* writer)
{
	BalaCCodeAssignment * self;
	self = (BalaCCodeAssignment*) base;
	g_return_if_fail (writer != NULL);
	bala_ccode_writer_write_string (writer, "(");
	bala_ccode_node_write ((BalaCCodeNode*) self, writer);
	bala_ccode_writer_write_string (writer, ")");
}

static void
bala_ccode_assignment_class_init (BalaCCodeAssignmentClass * klass,
                                  gpointer klass_data)
{
	bala_ccode_assignment_parent_class = g_type_class_peek_parent (klass);
	((BalaCCodeNodeClass *) klass)->finalize = bala_ccode_assignment_finalize;
	g_type_class_adjust_private_offset (klass, &BalaCCodeAssignment_private_offset);
	((BalaCCodeNodeClass *) klass)->write = (void (*) (BalaCCodeNode*, BalaCCodeWriter*)) bala_ccode_assignment_real_write;
	((BalaCCodeExpressionClass *) klass)->write_inner = (void (*) (BalaCCodeExpression*, BalaCCodeWriter*)) bala_ccode_assignment_real_write_inner;
}

static void
bala_ccode_assignment_instance_init (BalaCCodeAssignment * self,
                                     gpointer klass)
{
	self->priv = bala_ccode_assignment_get_instance_private (self);
}

static void
bala_ccode_assignment_finalize (BalaCCodeNode * obj)
{
	BalaCCodeAssignment * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_CCODE_ASSIGNMENT, BalaCCodeAssignment);
	_bala_ccode_node_unref0 (self->priv->_left);
	_bala_ccode_node_unref0 (self->priv->_right);
	BALA_CCODE_NODE_CLASS (bala_ccode_assignment_parent_class)->finalize (obj);
}

/**
 * Represents an assignment expression in the C code.
 */
static GType
bala_ccode_assignment_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BalaCCodeAssignmentClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_ccode_assignment_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BalaCCodeAssignment), 0, (GInstanceInitFunc) bala_ccode_assignment_instance_init, NULL };
	GType bala_ccode_assignment_type_id;
	bala_ccode_assignment_type_id = g_type_register_static (BALA_TYPE_CCODE_EXPRESSION, "BalaCCodeAssignment", &g_define_type_info, 0);
	BalaCCodeAssignment_private_offset = g_type_add_instance_private (bala_ccode_assignment_type_id, sizeof (BalaCCodeAssignmentPrivate));
	return bala_ccode_assignment_type_id;
}

GType
bala_ccode_assignment_get_type (void)
{
	static volatile gsize bala_ccode_assignment_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_assignment_type_id__volatile)) {
		GType bala_ccode_assignment_type_id;
		bala_ccode_assignment_type_id = bala_ccode_assignment_get_type_once ();
		g_once_init_leave (&bala_ccode_assignment_type_id__volatile, bala_ccode_assignment_type_id);
	}
	return bala_ccode_assignment_type_id__volatile;
}

static GType
bala_ccode_assignment_operator_get_type_once (void)
{
	static const GEnumValue values[] = {{BALA_CCODE_ASSIGNMENT_OPERATOR_SIMPLE, "BALA_CCODE_ASSIGNMENT_OPERATOR_SIMPLE", "simple"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_OR, "BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_OR", "bitwise-or"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_AND, "BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_AND", "bitwise-and"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_XOR, "BALA_CCODE_ASSIGNMENT_OPERATOR_BITWISE_XOR", "bitwise-xor"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_ADD, "BALA_CCODE_ASSIGNMENT_OPERATOR_ADD", "add"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_SUB, "BALA_CCODE_ASSIGNMENT_OPERATOR_SUB", "sub"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_MUL, "BALA_CCODE_ASSIGNMENT_OPERATOR_MUL", "mul"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_DIV, "BALA_CCODE_ASSIGNMENT_OPERATOR_DIV", "div"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_PERCENT, "BALA_CCODE_ASSIGNMENT_OPERATOR_PERCENT", "percent"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_LEFT, "BALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_LEFT", "shift-left"}, {BALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_RIGHT, "BALA_CCODE_ASSIGNMENT_OPERATOR_SHIFT_RIGHT", "shift-right"}, {0, NULL, NULL}};
	GType bala_ccode_assignment_operator_type_id;
	bala_ccode_assignment_operator_type_id = g_enum_register_static ("BalaCCodeAssignmentOperator", values);
	return bala_ccode_assignment_operator_type_id;
}

GType
bala_ccode_assignment_operator_get_type (void)
{
	static volatile gsize bala_ccode_assignment_operator_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_assignment_operator_type_id__volatile)) {
		GType bala_ccode_assignment_operator_type_id;
		bala_ccode_assignment_operator_type_id = bala_ccode_assignment_operator_get_type_once ();
		g_once_init_leave (&bala_ccode_assignment_operator_type_id__volatile, bala_ccode_assignment_operator_type_id);
	}
	return bala_ccode_assignment_operator_type_id__volatile;
}

