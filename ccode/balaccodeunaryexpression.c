/* balaccodeunaryexpression.c generated by balac, the Vala compiler
 * generated from balaccodeunaryexpression.bala, do not modify */

/* balaccodeunaryexpression.bala
 *
 * Copyright (C) 2006-2009  Jürg Billeter
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

struct _ValaCCodeUnaryExpressionPrivate {
	ValaCCodeUnaryOperator _operator;
	ValaCCodeExpression* _inner;
};

static gint ValaCCodeUnaryExpression_private_offset;
static gpointer bala_ccode_unary_expression_parent_class = NULL;

static void bala_ccode_unary_expression_real_write (ValaCCodeNode* base,
                                             ValaCCodeWriter* writer);
static void bala_ccode_unary_expression_real_write_inner (ValaCCodeExpression* base,
                                                   ValaCCodeWriter* writer);
static void bala_ccode_unary_expression_finalize (ValaCCodeNode * obj);
static GType bala_ccode_unary_expression_get_type_once (void);

static inline gpointer
bala_ccode_unary_expression_get_instance_private (ValaCCodeUnaryExpression* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeUnaryExpression_private_offset);
}

ValaCCodeUnaryOperator
bala_ccode_unary_expression_get_operator (ValaCCodeUnaryExpression* self)
{
	ValaCCodeUnaryOperator result;
	ValaCCodeUnaryOperator _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_operator;
	result = _tmp0_;
	return result;
}

void
bala_ccode_unary_expression_set_operator (ValaCCodeUnaryExpression* self,
                                          ValaCCodeUnaryOperator value)
{
	g_return_if_fail (self != NULL);
	self->priv->_operator = value;
}

ValaCCodeExpression*
bala_ccode_unary_expression_get_inner (ValaCCodeUnaryExpression* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}

static gpointer
_bala_ccode_node_ref0 (gpointer self)
{
	return self ? bala_ccode_node_ref (self) : NULL;
}

void
bala_ccode_unary_expression_set_inner (ValaCCodeUnaryExpression* self,
                                       ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_ccode_node_ref0 (value);
	_bala_ccode_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp0_;
}

ValaCCodeUnaryExpression*
bala_ccode_unary_expression_construct (GType object_type,
                                       ValaCCodeUnaryOperator op,
                                       ValaCCodeExpression* expr)
{
	ValaCCodeUnaryExpression* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (ValaCCodeUnaryExpression*) bala_ccode_expression_construct (object_type);
	bala_ccode_unary_expression_set_operator (self, op);
	bala_ccode_unary_expression_set_inner (self, expr);
	return self;
}

ValaCCodeUnaryExpression*
bala_ccode_unary_expression_new (ValaCCodeUnaryOperator op,
                                 ValaCCodeExpression* expr)
{
	return bala_ccode_unary_expression_construct (BALA_TYPE_CCODE_UNARY_EXPRESSION, op, expr);
}

static void
bala_ccode_unary_expression_real_write (ValaCCodeNode* base,
                                        ValaCCodeWriter* writer)
{
	ValaCCodeUnaryExpression * self;
	ValaCCodeUnaryOperator _tmp0_;
	self = (ValaCCodeUnaryExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_operator;
	switch (_tmp0_) {
		case BALA_CCODE_UNARY_OPERATOR_PLUS:
		{
			ValaCCodeExpression* _tmp1_;
			bala_ccode_writer_write_string (writer, "+");
			_tmp1_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp1_, writer);
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_MINUS:
		{
			ValaCCodeExpression* _tmp2_;
			bala_ccode_writer_write_string (writer, "-");
			_tmp2_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp2_, writer);
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION:
		{
			ValaCCodeExpression* _tmp3_;
			bala_ccode_writer_write_string (writer, "!");
			_tmp3_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp3_, writer);
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT:
		{
			ValaCCodeExpression* _tmp4_;
			bala_ccode_writer_write_string (writer, "~");
			_tmp4_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp4_, writer);
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION:
		{
			ValaCCodeUnaryExpression* inner_unary = NULL;
			ValaCCodeExpression* _tmp5_;
			ValaCCodeUnaryExpression* _tmp6_;
			gboolean _tmp7_ = FALSE;
			ValaCCodeUnaryExpression* _tmp8_;
			ValaCCodeExpression* _tmp13_;
			_tmp5_ = self->priv->_inner;
			_tmp6_ = _bala_ccode_node_ref0 (BALA_IS_CCODE_UNARY_EXPRESSION (_tmp5_) ? ((ValaCCodeUnaryExpression*) _tmp5_) : NULL);
			inner_unary = _tmp6_;
			_tmp8_ = inner_unary;
			if (_tmp8_ != NULL) {
				ValaCCodeUnaryExpression* _tmp9_;
				ValaCCodeUnaryOperator _tmp10_;
				_tmp9_ = inner_unary;
				_tmp10_ = _tmp9_->priv->_operator;
				_tmp7_ = _tmp10_ == BALA_CCODE_UNARY_OPERATOR_ADDRESS_OF;
			} else {
				_tmp7_ = FALSE;
			}
			if (_tmp7_) {
				ValaCCodeUnaryExpression* _tmp11_;
				ValaCCodeExpression* _tmp12_;
				_tmp11_ = inner_unary;
				_tmp12_ = _tmp11_->priv->_inner;
				bala_ccode_node_write ((ValaCCodeNode*) _tmp12_, writer);
				_bala_ccode_node_unref0 (inner_unary);
				return;
			}
			bala_ccode_writer_write_string (writer, "*");
			_tmp13_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp13_, writer);
			_bala_ccode_node_unref0 (inner_unary);
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_ADDRESS_OF:
		{
			ValaCCodeUnaryExpression* inner_unary = NULL;
			ValaCCodeExpression* _tmp14_;
			ValaCCodeUnaryExpression* _tmp15_;
			gboolean _tmp16_ = FALSE;
			ValaCCodeUnaryExpression* _tmp17_;
			ValaCCodeExpression* _tmp22_;
			_tmp14_ = self->priv->_inner;
			_tmp15_ = _bala_ccode_node_ref0 (BALA_IS_CCODE_UNARY_EXPRESSION (_tmp14_) ? ((ValaCCodeUnaryExpression*) _tmp14_) : NULL);
			inner_unary = _tmp15_;
			_tmp17_ = inner_unary;
			if (_tmp17_ != NULL) {
				ValaCCodeUnaryExpression* _tmp18_;
				ValaCCodeUnaryOperator _tmp19_;
				_tmp18_ = inner_unary;
				_tmp19_ = _tmp18_->priv->_operator;
				_tmp16_ = _tmp19_ == BALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION;
			} else {
				_tmp16_ = FALSE;
			}
			if (_tmp16_) {
				ValaCCodeUnaryExpression* _tmp20_;
				ValaCCodeExpression* _tmp21_;
				_tmp20_ = inner_unary;
				_tmp21_ = _tmp20_->priv->_inner;
				bala_ccode_node_write ((ValaCCodeNode*) _tmp21_, writer);
				_bala_ccode_node_unref0 (inner_unary);
				return;
			}
			bala_ccode_writer_write_string (writer, "&");
			_tmp22_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp22_, writer);
			_bala_ccode_node_unref0 (inner_unary);
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT:
		{
			bala_ccode_writer_write_string (writer, "++");
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT:
		{
			bala_ccode_writer_write_string (writer, "--");
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT:
		{
			ValaCCodeExpression* _tmp23_;
			_tmp23_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp23_, writer);
			bala_ccode_writer_write_string (writer, "++");
			break;
		}
		case BALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT:
		{
			ValaCCodeExpression* _tmp24_;
			_tmp24_ = self->priv->_inner;
			bala_ccode_expression_write_inner (_tmp24_, writer);
			bala_ccode_writer_write_string (writer, "--");
			break;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
}

static void
bala_ccode_unary_expression_real_write_inner (ValaCCodeExpression* base,
                                              ValaCCodeWriter* writer)
{
	ValaCCodeUnaryExpression * self;
	self = (ValaCCodeUnaryExpression*) base;
	g_return_if_fail (writer != NULL);
	bala_ccode_writer_write_string (writer, "(");
	bala_ccode_node_write ((ValaCCodeNode*) self, writer);
	bala_ccode_writer_write_string (writer, ")");
}

static void
bala_ccode_unary_expression_class_init (ValaCCodeUnaryExpressionClass * klass,
                                        gpointer klass_data)
{
	bala_ccode_unary_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = bala_ccode_unary_expression_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeUnaryExpression_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) bala_ccode_unary_expression_real_write;
	((ValaCCodeExpressionClass *) klass)->write_inner = (void (*) (ValaCCodeExpression*, ValaCCodeWriter*)) bala_ccode_unary_expression_real_write_inner;
}

static void
bala_ccode_unary_expression_instance_init (ValaCCodeUnaryExpression * self,
                                           gpointer klass)
{
	self->priv = bala_ccode_unary_expression_get_instance_private (self);
}

static void
bala_ccode_unary_expression_finalize (ValaCCodeNode * obj)
{
	ValaCCodeUnaryExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_CCODE_UNARY_EXPRESSION, ValaCCodeUnaryExpression);
	_bala_ccode_node_unref0 (self->priv->_inner);
	BALA_CCODE_NODE_CLASS (bala_ccode_unary_expression_parent_class)->finalize (obj);
}

/**
 * Represents an expression with one operand in the C code.
 */
static GType
bala_ccode_unary_expression_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeUnaryExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_ccode_unary_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeUnaryExpression), 0, (GInstanceInitFunc) bala_ccode_unary_expression_instance_init, NULL };
	GType bala_ccode_unary_expression_type_id;
	bala_ccode_unary_expression_type_id = g_type_register_static (BALA_TYPE_CCODE_EXPRESSION, "ValaCCodeUnaryExpression", &g_define_type_info, 0);
	ValaCCodeUnaryExpression_private_offset = g_type_add_instance_private (bala_ccode_unary_expression_type_id, sizeof (ValaCCodeUnaryExpressionPrivate));
	return bala_ccode_unary_expression_type_id;
}

GType
bala_ccode_unary_expression_get_type (void)
{
	static volatile gsize bala_ccode_unary_expression_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_unary_expression_type_id__volatile)) {
		GType bala_ccode_unary_expression_type_id;
		bala_ccode_unary_expression_type_id = bala_ccode_unary_expression_get_type_once ();
		g_once_init_leave (&bala_ccode_unary_expression_type_id__volatile, bala_ccode_unary_expression_type_id);
	}
	return bala_ccode_unary_expression_type_id__volatile;
}

static GType
bala_ccode_unary_operator_get_type_once (void)
{
	static const GEnumValue values[] = {{BALA_CCODE_UNARY_OPERATOR_PLUS, "BALA_CCODE_UNARY_OPERATOR_PLUS", "plus"}, {BALA_CCODE_UNARY_OPERATOR_MINUS, "BALA_CCODE_UNARY_OPERATOR_MINUS", "minus"}, {BALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION, "BALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION", "logical-negation"}, {BALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT, "BALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT", "bitwise-complement"}, {BALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION, "BALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION", "pointer-indirection"}, {BALA_CCODE_UNARY_OPERATOR_ADDRESS_OF, "BALA_CCODE_UNARY_OPERATOR_ADDRESS_OF", "address-of"}, {BALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT, "BALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT", "prefix-increment"}, {BALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT, "BALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT", "prefix-decrement"}, {BALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT, "BALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT", "postfix-increment"}, {BALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT, "BALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT", "postfix-decrement"}, {0, NULL, NULL}};
	GType bala_ccode_unary_operator_type_id;
	bala_ccode_unary_operator_type_id = g_enum_register_static ("ValaCCodeUnaryOperator", values);
	return bala_ccode_unary_operator_type_id;
}

GType
bala_ccode_unary_operator_get_type (void)
{
	static volatile gsize bala_ccode_unary_operator_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_unary_operator_type_id__volatile)) {
		GType bala_ccode_unary_operator_type_id;
		bala_ccode_unary_operator_type_id = bala_ccode_unary_operator_get_type_once ();
		g_once_init_leave (&bala_ccode_unary_operator_type_id__volatile, bala_ccode_unary_operator_type_id);
	}
	return bala_ccode_unary_operator_type_id__volatile;
}

