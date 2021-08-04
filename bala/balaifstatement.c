/* balaifstatement.c generated by balac, the Bala compiler
 * generated from balaifstatement.bala, do not modify */

/* balaifstatement.bala
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
#include <balagee.h>
#include <glib-object.h>
#include <glib.h>

#define _bala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (bala_code_node_unref (var), NULL)))

struct _BalaIfStatementPrivate {
	BalaExpression* _condition;
	BalaBlock* _true_statement;
	BalaBlock* _false_statement;
};

static gint BalaIfStatement_private_offset;
static gpointer bala_if_statement_parent_class = NULL;
static BalaStatementIface * bala_if_statement_bala_statement_parent_iface = NULL;

static void bala_if_statement_real_accept (BalaCodeNode* base,
                                    BalaCodeVisitor* visitor);
static void bala_if_statement_real_accept_children (BalaCodeNode* base,
                                             BalaCodeVisitor* visitor);
static void bala_if_statement_real_replace_expression (BalaCodeNode* base,
                                                BalaExpression* old_node,
                                                BalaExpression* new_node);
static void bala_if_statement_real_get_error_types (BalaCodeNode* base,
                                             BalaCollection* collection,
                                             BalaSourceReference* source_reference);
static gboolean bala_if_statement_real_check (BalaCodeNode* base,
                                       BalaCodeContext* context);
static void bala_if_statement_real_emit (BalaCodeNode* base,
                                  BalaCodeGenerator* codegen);
static void bala_if_statement_finalize (BalaCodeNode * obj);
static GType bala_if_statement_get_type_once (void);

static inline gpointer
bala_if_statement_get_instance_private (BalaIfStatement* self)
{
	return G_STRUCT_MEMBER_P (self, BalaIfStatement_private_offset);
}

BalaExpression*
bala_if_statement_get_condition (BalaIfStatement* self)
{
	BalaExpression* result;
	BalaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_condition;
	result = _tmp0_;
	return result;
}

static gpointer
_bala_code_node_ref0 (gpointer self)
{
	return self ? bala_code_node_ref (self) : NULL;
}

void
bala_if_statement_set_condition (BalaIfStatement* self,
                                 BalaExpression* value)
{
	BalaExpression* _tmp0_;
	BalaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_code_node_ref0 (value);
	_bala_code_node_unref0 (self->priv->_condition);
	self->priv->_condition = _tmp0_;
	_tmp1_ = self->priv->_condition;
	bala_code_node_set_parent_node ((BalaCodeNode*) _tmp1_, (BalaCodeNode*) self);
}

BalaBlock*
bala_if_statement_get_true_statement (BalaIfStatement* self)
{
	BalaBlock* result;
	BalaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_true_statement;
	result = _tmp0_;
	return result;
}

void
bala_if_statement_set_true_statement (BalaIfStatement* self,
                                      BalaBlock* value)
{
	BalaBlock* _tmp0_;
	BalaBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_code_node_ref0 (value);
	_bala_code_node_unref0 (self->priv->_true_statement);
	self->priv->_true_statement = _tmp0_;
	_tmp1_ = self->priv->_true_statement;
	bala_code_node_set_parent_node ((BalaCodeNode*) _tmp1_, (BalaCodeNode*) self);
}

BalaBlock*
bala_if_statement_get_false_statement (BalaIfStatement* self)
{
	BalaBlock* result;
	BalaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_false_statement;
	result = _tmp0_;
	return result;
}

void
bala_if_statement_set_false_statement (BalaIfStatement* self,
                                       BalaBlock* value)
{
	BalaBlock* _tmp0_;
	BalaBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_code_node_ref0 (value);
	_bala_code_node_unref0 (self->priv->_false_statement);
	self->priv->_false_statement = _tmp0_;
	_tmp1_ = self->priv->_false_statement;
	if (_tmp1_ != NULL) {
		BalaBlock* _tmp2_;
		_tmp2_ = self->priv->_false_statement;
		bala_code_node_set_parent_node ((BalaCodeNode*) _tmp2_, (BalaCodeNode*) self);
	}
}

/**
 * Creates a new if statement.
 *
 * @param cond       a boolean condition
 * @param true_stmt  statement to be evaluated if condition is true
 * @param false_stmt statement to be evaluated if condition is false
 * @return           newly created if statement
 */
BalaIfStatement*
bala_if_statement_construct (GType object_type,
                             BalaExpression* cond,
                             BalaBlock* true_stmt,
                             BalaBlock* false_stmt,
                             BalaSourceReference* source)
{
	BalaIfStatement* self = NULL;
	g_return_val_if_fail (cond != NULL, NULL);
	g_return_val_if_fail (true_stmt != NULL, NULL);
	self = (BalaIfStatement*) bala_code_node_construct (object_type);
	bala_if_statement_set_condition (self, cond);
	bala_if_statement_set_true_statement (self, true_stmt);
	bala_if_statement_set_false_statement (self, false_stmt);
	bala_code_node_set_source_reference ((BalaCodeNode*) self, source);
	return self;
}

BalaIfStatement*
bala_if_statement_new (BalaExpression* cond,
                       BalaBlock* true_stmt,
                       BalaBlock* false_stmt,
                       BalaSourceReference* source)
{
	return bala_if_statement_construct (BALA_TYPE_IF_STATEMENT, cond, true_stmt, false_stmt, source);
}

static void
bala_if_statement_real_accept (BalaCodeNode* base,
                               BalaCodeVisitor* visitor)
{
	BalaIfStatement * self;
	self = (BalaIfStatement*) base;
	g_return_if_fail (visitor != NULL);
	bala_code_visitor_visit_if_statement (visitor, self);
}

static void
bala_if_statement_real_accept_children (BalaCodeNode* base,
                                        BalaCodeVisitor* visitor)
{
	BalaIfStatement * self;
	BalaExpression* _tmp0_;
	BalaExpression* _tmp1_;
	BalaExpression* _tmp2_;
	BalaExpression* _tmp3_;
	BalaBlock* _tmp4_;
	BalaBlock* _tmp5_;
	BalaBlock* _tmp6_;
	BalaBlock* _tmp7_;
	self = (BalaIfStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = bala_if_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	bala_code_node_accept ((BalaCodeNode*) _tmp1_, visitor);
	_tmp2_ = bala_if_statement_get_condition (self);
	_tmp3_ = _tmp2_;
	bala_code_visitor_visit_end_full_expression (visitor, _tmp3_);
	_tmp4_ = bala_if_statement_get_true_statement (self);
	_tmp5_ = _tmp4_;
	bala_code_node_accept ((BalaCodeNode*) _tmp5_, visitor);
	_tmp6_ = bala_if_statement_get_false_statement (self);
	_tmp7_ = _tmp6_;
	if (_tmp7_ != NULL) {
		BalaBlock* _tmp8_;
		BalaBlock* _tmp9_;
		_tmp8_ = bala_if_statement_get_false_statement (self);
		_tmp9_ = _tmp8_;
		bala_code_node_accept ((BalaCodeNode*) _tmp9_, visitor);
	}
}

static void
bala_if_statement_real_replace_expression (BalaCodeNode* base,
                                           BalaExpression* old_node,
                                           BalaExpression* new_node)
{
	BalaIfStatement * self;
	BalaExpression* _tmp0_;
	BalaExpression* _tmp1_;
	self = (BalaIfStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = bala_if_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		bala_if_statement_set_condition (self, new_node);
	}
}

static void
bala_if_statement_real_get_error_types (BalaCodeNode* base,
                                        BalaCollection* collection,
                                        BalaSourceReference* source_reference)
{
	BalaIfStatement * self;
	BalaExpression* _tmp0_;
	BalaExpression* _tmp1_;
	BalaBlock* _tmp2_;
	BalaBlock* _tmp3_;
	BalaBlock* _tmp4_;
	BalaBlock* _tmp5_;
	self = (BalaIfStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = bala_if_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	bala_code_node_get_error_types ((BalaCodeNode*) _tmp1_, collection, source_reference);
	_tmp2_ = bala_if_statement_get_true_statement (self);
	_tmp3_ = _tmp2_;
	bala_code_node_get_error_types ((BalaCodeNode*) _tmp3_, collection, source_reference);
	_tmp4_ = bala_if_statement_get_false_statement (self);
	_tmp5_ = _tmp4_;
	if (_tmp5_ != NULL) {
		BalaBlock* _tmp6_;
		BalaBlock* _tmp7_;
		_tmp6_ = bala_if_statement_get_false_statement (self);
		_tmp7_ = _tmp6_;
		bala_code_node_get_error_types ((BalaCodeNode*) _tmp7_, collection, source_reference);
	}
}

static gboolean
bala_if_statement_real_check (BalaCodeNode* base,
                              BalaCodeContext* context)
{
	BalaIfStatement * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	BalaExpression* _tmp4_;
	BalaExpression* _tmp5_;
	BalaSemanticAnalyzer* _tmp6_;
	BalaSemanticAnalyzer* _tmp7_;
	BalaDataType* _tmp8_;
	BalaDataType* _tmp9_;
	BalaDataType* _tmp10_;
	BalaExpression* _tmp11_;
	BalaExpression* _tmp12_;
	BalaBlock* _tmp13_;
	BalaBlock* _tmp14_;
	BalaBlock* _tmp15_;
	BalaBlock* _tmp16_;
	BalaExpression* _tmp19_;
	BalaExpression* _tmp20_;
	gboolean _tmp21_;
	gboolean _tmp22_;
	gboolean _tmp23_ = FALSE;
	BalaExpression* _tmp24_;
	BalaExpression* _tmp25_;
	BalaDataType* _tmp26_;
	BalaDataType* _tmp27_;
	gboolean _tmp39_;
	gboolean _tmp40_;
	gboolean result = FALSE;
	self = (BalaIfStatement*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = bala_code_node_get_checked ((BalaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = bala_code_node_get_error ((BalaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	bala_code_node_set_checked ((BalaCodeNode*) self, TRUE);
	_tmp4_ = bala_if_statement_get_condition (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = bala_code_context_get_analyzer (context);
	_tmp7_ = _tmp6_;
	_tmp8_ = _tmp7_->bool_type;
	_tmp9_ = bala_data_type_copy (_tmp8_);
	_tmp10_ = _tmp9_;
	bala_expression_set_target_type (_tmp5_, _tmp10_);
	_bala_code_node_unref0 (_tmp10_);
	_tmp11_ = bala_if_statement_get_condition (self);
	_tmp12_ = _tmp11_;
	bala_code_node_check ((BalaCodeNode*) _tmp12_, context);
	_tmp13_ = bala_if_statement_get_true_statement (self);
	_tmp14_ = _tmp13_;
	bala_code_node_check ((BalaCodeNode*) _tmp14_, context);
	_tmp15_ = bala_if_statement_get_false_statement (self);
	_tmp16_ = _tmp15_;
	if (_tmp16_ != NULL) {
		BalaBlock* _tmp17_;
		BalaBlock* _tmp18_;
		_tmp17_ = bala_if_statement_get_false_statement (self);
		_tmp18_ = _tmp17_;
		bala_code_node_check ((BalaCodeNode*) _tmp18_, context);
	}
	_tmp19_ = bala_if_statement_get_condition (self);
	_tmp20_ = _tmp19_;
	_tmp21_ = bala_code_node_get_error ((BalaCodeNode*) _tmp20_);
	_tmp22_ = _tmp21_;
	if (_tmp22_) {
		bala_code_node_set_error ((BalaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp24_ = bala_if_statement_get_condition (self);
	_tmp25_ = _tmp24_;
	_tmp26_ = bala_expression_get_value_type (_tmp25_);
	_tmp27_ = _tmp26_;
	if (_tmp27_ == NULL) {
		_tmp23_ = TRUE;
	} else {
		BalaExpression* _tmp28_;
		BalaExpression* _tmp29_;
		BalaDataType* _tmp30_;
		BalaDataType* _tmp31_;
		BalaSemanticAnalyzer* _tmp32_;
		BalaSemanticAnalyzer* _tmp33_;
		BalaDataType* _tmp34_;
		_tmp28_ = bala_if_statement_get_condition (self);
		_tmp29_ = _tmp28_;
		_tmp30_ = bala_expression_get_value_type (_tmp29_);
		_tmp31_ = _tmp30_;
		_tmp32_ = bala_code_context_get_analyzer (context);
		_tmp33_ = _tmp32_;
		_tmp34_ = _tmp33_->bool_type;
		_tmp23_ = !bala_data_type_compatible (_tmp31_, _tmp34_);
	}
	if (_tmp23_) {
		BalaExpression* _tmp35_;
		BalaExpression* _tmp36_;
		BalaSourceReference* _tmp37_;
		BalaSourceReference* _tmp38_;
		bala_code_node_set_error ((BalaCodeNode*) self, TRUE);
		_tmp35_ = bala_if_statement_get_condition (self);
		_tmp36_ = _tmp35_;
		_tmp37_ = bala_code_node_get_source_reference ((BalaCodeNode*) _tmp36_);
		_tmp38_ = _tmp37_;
		bala_report_error (_tmp38_, "Condition must be boolean");
		result = FALSE;
		return result;
	}
	_tmp39_ = bala_code_node_get_error ((BalaCodeNode*) self);
	_tmp40_ = _tmp39_;
	result = !_tmp40_;
	return result;
}

static void
bala_if_statement_real_emit (BalaCodeNode* base,
                             BalaCodeGenerator* codegen)
{
	BalaIfStatement * self;
	BalaExpression* _tmp0_;
	BalaExpression* _tmp1_;
	BalaExpression* _tmp2_;
	BalaExpression* _tmp3_;
	self = (BalaIfStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = bala_if_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	bala_code_node_emit ((BalaCodeNode*) _tmp1_, codegen);
	_tmp2_ = bala_if_statement_get_condition (self);
	_tmp3_ = _tmp2_;
	bala_code_visitor_visit_end_full_expression ((BalaCodeVisitor*) codegen, _tmp3_);
	bala_code_visitor_visit_if_statement ((BalaCodeVisitor*) codegen, self);
}

static void
bala_if_statement_class_init (BalaIfStatementClass * klass,
                              gpointer klass_data)
{
	bala_if_statement_parent_class = g_type_class_peek_parent (klass);
	((BalaCodeNodeClass *) klass)->finalize = bala_if_statement_finalize;
	g_type_class_adjust_private_offset (klass, &BalaIfStatement_private_offset);
	((BalaCodeNodeClass *) klass)->accept = (void (*) (BalaCodeNode*, BalaCodeVisitor*)) bala_if_statement_real_accept;
	((BalaCodeNodeClass *) klass)->accept_children = (void (*) (BalaCodeNode*, BalaCodeVisitor*)) bala_if_statement_real_accept_children;
	((BalaCodeNodeClass *) klass)->replace_expression = (void (*) (BalaCodeNode*, BalaExpression*, BalaExpression*)) bala_if_statement_real_replace_expression;
	((BalaCodeNodeClass *) klass)->get_error_types = (void (*) (BalaCodeNode*, BalaCollection*, BalaSourceReference*)) bala_if_statement_real_get_error_types;
	((BalaCodeNodeClass *) klass)->check = (gboolean (*) (BalaCodeNode*, BalaCodeContext*)) bala_if_statement_real_check;
	((BalaCodeNodeClass *) klass)->emit = (void (*) (BalaCodeNode*, BalaCodeGenerator*)) bala_if_statement_real_emit;
}

static void
bala_if_statement_bala_statement_interface_init (BalaStatementIface * iface,
                                                 gpointer iface_data)
{
	bala_if_statement_bala_statement_parent_iface = g_type_interface_peek_parent (iface);
}

static void
bala_if_statement_instance_init (BalaIfStatement * self,
                                 gpointer klass)
{
	self->priv = bala_if_statement_get_instance_private (self);
}

static void
bala_if_statement_finalize (BalaCodeNode * obj)
{
	BalaIfStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_IF_STATEMENT, BalaIfStatement);
	_bala_code_node_unref0 (self->priv->_condition);
	_bala_code_node_unref0 (self->priv->_true_statement);
	_bala_code_node_unref0 (self->priv->_false_statement);
	BALA_CODE_NODE_CLASS (bala_if_statement_parent_class)->finalize (obj);
}

/**
 * Represents an if selection statement in the source code.
 */
static GType
bala_if_statement_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BalaIfStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_if_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BalaIfStatement), 0, (GInstanceInitFunc) bala_if_statement_instance_init, NULL };
	static const GInterfaceInfo bala_statement_info = { (GInterfaceInitFunc) bala_if_statement_bala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType bala_if_statement_type_id;
	bala_if_statement_type_id = g_type_register_static (BALA_TYPE_CODE_NODE, "BalaIfStatement", &g_define_type_info, 0);
	g_type_add_interface_static (bala_if_statement_type_id, BALA_TYPE_STATEMENT, &bala_statement_info);
	BalaIfStatement_private_offset = g_type_add_instance_private (bala_if_statement_type_id, sizeof (BalaIfStatementPrivate));
	return bala_if_statement_type_id;
}

GType
bala_if_statement_get_type (void)
{
	static volatile gsize bala_if_statement_type_id__volatile = 0;
	if (g_once_init_enter (&bala_if_statement_type_id__volatile)) {
		GType bala_if_statement_type_id;
		bala_if_statement_type_id = bala_if_statement_get_type_once ();
		g_once_init_leave (&bala_if_statement_type_id__volatile, bala_if_statement_type_id);
	}
	return bala_if_statement_type_id__volatile;
}

