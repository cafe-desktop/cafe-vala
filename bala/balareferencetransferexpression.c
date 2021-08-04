/* balareferencetransferexpression.c generated by balac, the Vala compiler
 * generated from balareferencetransferexpression.bala, do not modify */

/* balareferencetransferexpression.bala
 *
 * Copyright (C) 2007-2010  Jürg Billeter
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
#include <glib.h>
#include <balagee.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

#define _bala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (bala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaReferenceTransferExpressionPrivate {
	ValaExpression* _inner;
};

static gint ValaReferenceTransferExpression_private_offset;
static gpointer bala_reference_transfer_expression_parent_class = NULL;

static void bala_reference_transfer_expression_real_accept (ValaCodeNode* base,
                                                     ValaCodeVisitor* visitor);
static void bala_reference_transfer_expression_real_accept_children (ValaCodeNode* base,
                                                              ValaCodeVisitor* visitor);
static void bala_reference_transfer_expression_real_replace_expression (ValaCodeNode* base,
                                                                 ValaExpression* old_node,
                                                                 ValaExpression* new_node);
static gboolean bala_reference_transfer_expression_real_is_pure (ValaExpression* base);
static gboolean bala_reference_transfer_expression_real_is_accessible (ValaExpression* base,
                                                                ValaSymbol* sym);
static gboolean bala_reference_transfer_expression_real_check (ValaCodeNode* base,
                                                        ValaCodeContext* context);
static void bala_reference_transfer_expression_real_emit (ValaCodeNode* base,
                                                   ValaCodeGenerator* codegen);
static void bala_reference_transfer_expression_real_get_defined_variables (ValaCodeNode* base,
                                                                    ValaCollection* collection);
static void bala_reference_transfer_expression_real_get_used_variables (ValaCodeNode* base,
                                                                 ValaCollection* collection);
static gchar* bala_reference_transfer_expression_real_to_string (ValaCodeNode* base);
static void bala_reference_transfer_expression_finalize (ValaCodeNode * obj);
static GType bala_reference_transfer_expression_get_type_once (void);

static inline gpointer
bala_reference_transfer_expression_get_instance_private (ValaReferenceTransferExpression* self)
{
	return G_STRUCT_MEMBER_P (self, ValaReferenceTransferExpression_private_offset);
}

ValaExpression*
bala_reference_transfer_expression_get_inner (ValaReferenceTransferExpression* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}

static gpointer
_bala_code_node_ref0 (gpointer self)
{
	return self ? bala_code_node_ref (self) : NULL;
}

void
bala_reference_transfer_expression_set_inner (ValaReferenceTransferExpression* self,
                                              ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_code_node_ref0 (value);
	_bala_code_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp0_;
	_tmp1_ = self->priv->_inner;
	bala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}

/**
 * Creates a new reference transfer expression.
 *
 * @param inner variable whose reference is to be transferred
 * @return      newly created reference transfer expression
 */
ValaReferenceTransferExpression*
bala_reference_transfer_expression_construct (GType object_type,
                                              ValaExpression* inner,
                                              ValaSourceReference* source_reference)
{
	ValaReferenceTransferExpression* self = NULL;
	g_return_val_if_fail (inner != NULL, NULL);
	self = (ValaReferenceTransferExpression*) bala_expression_construct (object_type);
	bala_reference_transfer_expression_set_inner (self, inner);
	bala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}

ValaReferenceTransferExpression*
bala_reference_transfer_expression_new (ValaExpression* inner,
                                        ValaSourceReference* source_reference)
{
	return bala_reference_transfer_expression_construct (BALA_TYPE_REFERENCE_TRANSFER_EXPRESSION, inner, source_reference);
}

static void
bala_reference_transfer_expression_real_accept (ValaCodeNode* base,
                                                ValaCodeVisitor* visitor)
{
	ValaReferenceTransferExpression * self;
	self = (ValaReferenceTransferExpression*) base;
	g_return_if_fail (visitor != NULL);
	bala_code_visitor_visit_reference_transfer_expression (visitor, self);
	bala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}

static void
bala_reference_transfer_expression_real_accept_children (ValaCodeNode* base,
                                                         ValaCodeVisitor* visitor)
{
	ValaReferenceTransferExpression * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReferenceTransferExpression*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = bala_reference_transfer_expression_get_inner (self);
	_tmp1_ = _tmp0_;
	bala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
}

static void
bala_reference_transfer_expression_real_replace_expression (ValaCodeNode* base,
                                                            ValaExpression* old_node,
                                                            ValaExpression* new_node)
{
	ValaReferenceTransferExpression * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReferenceTransferExpression*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = bala_reference_transfer_expression_get_inner (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		bala_reference_transfer_expression_set_inner (self, new_node);
	}
}

static gboolean
bala_reference_transfer_expression_real_is_pure (ValaExpression* base)
{
	ValaReferenceTransferExpression * self;
	gboolean result = FALSE;
	self = (ValaReferenceTransferExpression*) base;
	result = FALSE;
	return result;
}

static gboolean
bala_reference_transfer_expression_real_is_accessible (ValaExpression* base,
                                                       ValaSymbol* sym)
{
	ValaReferenceTransferExpression * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	gboolean result = FALSE;
	self = (ValaReferenceTransferExpression*) base;
	g_return_val_if_fail (sym != NULL, FALSE);
	_tmp0_ = bala_reference_transfer_expression_get_inner (self);
	_tmp1_ = _tmp0_;
	result = bala_expression_is_accessible (_tmp1_, sym);
	return result;
}

static gboolean
bala_reference_transfer_expression_real_check (ValaCodeNode* base,
                                               ValaCodeContext* context)
{
	ValaReferenceTransferExpression * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	ValaExpression* _tmp6_;
	ValaExpression* _tmp7_;
	ValaExpression* _tmp8_;
	ValaExpression* _tmp9_;
	gboolean _tmp10_;
	gboolean _tmp11_;
	gboolean _tmp12_ = FALSE;
	ValaExpression* _tmp13_;
	ValaExpression* _tmp14_;
	gboolean _tmp19_ = FALSE;
	ValaExpression* _tmp20_;
	ValaExpression* _tmp21_;
	ValaDataType* _tmp22_;
	ValaDataType* _tmp23_;
	gboolean _tmp32_ = FALSE;
	ValaExpression* _tmp33_;
	ValaExpression* _tmp34_;
	ValaDataType* _tmp35_;
	ValaDataType* _tmp36_;
	gboolean is_owned_delegate = FALSE;
	gboolean _tmp43_ = FALSE;
	gboolean _tmp44_ = FALSE;
	ValaExpression* _tmp45_;
	ValaExpression* _tmp46_;
	ValaDataType* _tmp47_;
	ValaDataType* _tmp48_;
	ValaExpression* _tmp55_;
	ValaExpression* _tmp56_;
	ValaDataType* _tmp57_;
	ValaDataType* _tmp58_;
	ValaDataType* _tmp59_;
	ValaDataType* _tmp60_;
	ValaDataType* _tmp61_;
	ValaDataType* _tmp62_;
	ValaDataType* _tmp63_;
	ValaDataType* _tmp64_;
	gboolean _tmp65_;
	gboolean _tmp66_;
	gboolean result = FALSE;
	self = (ValaReferenceTransferExpression*) base;
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
	_tmp4_ = bala_reference_transfer_expression_get_inner (self);
	_tmp5_ = _tmp4_;
	bala_expression_set_lvalue (_tmp5_, TRUE);
	_tmp6_ = bala_reference_transfer_expression_get_inner (self);
	_tmp7_ = _tmp6_;
	bala_code_node_check ((ValaCodeNode*) _tmp7_, context);
	_tmp8_ = bala_reference_transfer_expression_get_inner (self);
	_tmp9_ = _tmp8_;
	_tmp10_ = bala_code_node_get_error ((ValaCodeNode*) _tmp9_);
	_tmp11_ = _tmp10_;
	if (_tmp11_) {
		bala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp13_ = bala_reference_transfer_expression_get_inner (self);
	_tmp14_ = _tmp13_;
	if (BALA_IS_MEMBER_ACCESS (_tmp14_)) {
		_tmp12_ = TRUE;
	} else {
		ValaExpression* _tmp15_;
		ValaExpression* _tmp16_;
		_tmp15_ = bala_reference_transfer_expression_get_inner (self);
		_tmp16_ = _tmp15_;
		_tmp12_ = BALA_IS_ELEMENT_ACCESS (_tmp16_);
	}
	if (!_tmp12_) {
		ValaSourceReference* _tmp17_;
		ValaSourceReference* _tmp18_;
		bala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp17_ = bala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp18_ = _tmp17_;
		bala_report_error (_tmp18_, "Reference transfer not supported for this expression");
		result = FALSE;
		return result;
	}
	_tmp20_ = bala_reference_transfer_expression_get_inner (self);
	_tmp21_ = _tmp20_;
	_tmp22_ = bala_expression_get_value_type (_tmp21_);
	_tmp23_ = _tmp22_;
	if (BALA_IS_ARRAY_TYPE (_tmp23_)) {
		ValaExpression* _tmp24_;
		ValaExpression* _tmp25_;
		ValaDataType* _tmp26_;
		ValaDataType* _tmp27_;
		gboolean _tmp28_;
		gboolean _tmp29_;
		_tmp24_ = bala_reference_transfer_expression_get_inner (self);
		_tmp25_ = _tmp24_;
		_tmp26_ = bala_expression_get_value_type (_tmp25_);
		_tmp27_ = _tmp26_;
		_tmp28_ = bala_array_type_get_inline_allocated (G_TYPE_CHECK_INSTANCE_CAST (_tmp27_, BALA_TYPE_ARRAY_TYPE, ValaArrayType));
		_tmp29_ = _tmp28_;
		_tmp19_ = _tmp29_;
	} else {
		_tmp19_ = FALSE;
	}
	if (_tmp19_) {
		ValaSourceReference* _tmp30_;
		ValaSourceReference* _tmp31_;
		bala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp30_ = bala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp31_ = _tmp30_;
		bala_report_error (_tmp31_, "Ownership of inline-allocated array cannot be transferred");
		result = FALSE;
		return result;
	}
	_tmp33_ = bala_reference_transfer_expression_get_inner (self);
	_tmp34_ = _tmp33_;
	_tmp35_ = bala_expression_get_value_type (_tmp34_);
	_tmp36_ = _tmp35_;
	if (BALA_IS_DELEGATE_TYPE (_tmp36_)) {
		ValaExpression* _tmp37_;
		ValaExpression* _tmp38_;
		ValaDataType* _tmp39_;
		ValaDataType* _tmp40_;
		gboolean _tmp41_;
		gboolean _tmp42_;
		_tmp37_ = bala_reference_transfer_expression_get_inner (self);
		_tmp38_ = _tmp37_;
		_tmp39_ = bala_expression_get_value_type (_tmp38_);
		_tmp40_ = _tmp39_;
		_tmp41_ = bala_data_type_get_value_owned (_tmp40_);
		_tmp42_ = _tmp41_;
		_tmp32_ = _tmp42_;
	} else {
		_tmp32_ = FALSE;
	}
	is_owned_delegate = _tmp32_;
	_tmp45_ = bala_reference_transfer_expression_get_inner (self);
	_tmp46_ = _tmp45_;
	_tmp47_ = bala_expression_get_value_type (_tmp46_);
	_tmp48_ = _tmp47_;
	if (!bala_data_type_is_disposable (_tmp48_)) {
		ValaExpression* _tmp49_;
		ValaExpression* _tmp50_;
		ValaDataType* _tmp51_;
		ValaDataType* _tmp52_;
		_tmp49_ = bala_reference_transfer_expression_get_inner (self);
		_tmp50_ = _tmp49_;
		_tmp51_ = bala_expression_get_value_type (_tmp50_);
		_tmp52_ = _tmp51_;
		_tmp44_ = !BALA_IS_POINTER_TYPE (_tmp52_);
	} else {
		_tmp44_ = FALSE;
	}
	if (_tmp44_) {
		_tmp43_ = !is_owned_delegate;
	} else {
		_tmp43_ = FALSE;
	}
	if (_tmp43_) {
		ValaSourceReference* _tmp53_;
		ValaSourceReference* _tmp54_;
		bala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp53_ = bala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp54_ = _tmp53_;
		bala_report_error (_tmp54_, "No reference to be transferred");
		result = FALSE;
		return result;
	}
	_tmp55_ = bala_reference_transfer_expression_get_inner (self);
	_tmp56_ = _tmp55_;
	_tmp57_ = bala_expression_get_value_type (_tmp56_);
	_tmp58_ = _tmp57_;
	_tmp59_ = bala_data_type_copy (_tmp58_);
	_tmp60_ = _tmp59_;
	bala_expression_set_value_type ((ValaExpression*) self, _tmp60_);
	_bala_code_node_unref0 (_tmp60_);
	_tmp61_ = bala_expression_get_value_type ((ValaExpression*) self);
	_tmp62_ = _tmp61_;
	bala_data_type_set_value_owned (_tmp62_, TRUE);
	_tmp63_ = bala_expression_get_value_type ((ValaExpression*) self);
	_tmp64_ = _tmp63_;
	bala_code_node_check ((ValaCodeNode*) _tmp64_, context);
	_tmp65_ = bala_code_node_get_error ((ValaCodeNode*) self);
	_tmp66_ = _tmp65_;
	result = !_tmp66_;
	return result;
}

static void
bala_reference_transfer_expression_real_emit (ValaCodeNode* base,
                                              ValaCodeGenerator* codegen)
{
	ValaReferenceTransferExpression * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReferenceTransferExpression*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = bala_reference_transfer_expression_get_inner (self);
	_tmp1_ = _tmp0_;
	bala_code_node_emit ((ValaCodeNode*) _tmp1_, codegen);
	bala_code_visitor_visit_reference_transfer_expression ((ValaCodeVisitor*) codegen, self);
	bala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}

static void
bala_reference_transfer_expression_real_get_defined_variables (ValaCodeNode* base,
                                                               ValaCollection* collection)
{
	ValaReferenceTransferExpression * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaLocalVariable* local = NULL;
	ValaExpression* _tmp2_;
	ValaExpression* _tmp3_;
	ValaSymbol* _tmp4_;
	ValaSymbol* _tmp5_;
	ValaParameter* param = NULL;
	ValaExpression* _tmp6_;
	ValaExpression* _tmp7_;
	ValaSymbol* _tmp8_;
	ValaSymbol* _tmp9_;
	ValaLocalVariable* _tmp10_;
	self = (ValaReferenceTransferExpression*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = bala_reference_transfer_expression_get_inner (self);
	_tmp1_ = _tmp0_;
	bala_code_node_get_defined_variables ((ValaCodeNode*) _tmp1_, collection);
	_tmp2_ = bala_reference_transfer_expression_get_inner (self);
	_tmp3_ = _tmp2_;
	_tmp4_ = bala_expression_get_symbol_reference (_tmp3_);
	_tmp5_ = _tmp4_;
	local = BALA_IS_LOCAL_VARIABLE (_tmp5_) ? ((ValaLocalVariable*) _tmp5_) : NULL;
	_tmp6_ = bala_reference_transfer_expression_get_inner (self);
	_tmp7_ = _tmp6_;
	_tmp8_ = bala_expression_get_symbol_reference (_tmp7_);
	_tmp9_ = _tmp8_;
	param = BALA_IS_PARAMETER (_tmp9_) ? ((ValaParameter*) _tmp9_) : NULL;
	_tmp10_ = local;
	if (_tmp10_ != NULL) {
		ValaLocalVariable* _tmp11_;
		_tmp11_ = local;
		bala_collection_add (collection, (ValaVariable*) _tmp11_);
	} else {
		gboolean _tmp12_ = FALSE;
		ValaParameter* _tmp13_;
		_tmp13_ = param;
		if (_tmp13_ != NULL) {
			ValaParameter* _tmp14_;
			ValaParameterDirection _tmp15_;
			ValaParameterDirection _tmp16_;
			_tmp14_ = param;
			_tmp15_ = bala_parameter_get_direction (_tmp14_);
			_tmp16_ = _tmp15_;
			_tmp12_ = _tmp16_ == BALA_PARAMETER_DIRECTION_OUT;
		} else {
			_tmp12_ = FALSE;
		}
		if (_tmp12_) {
			ValaParameter* _tmp17_;
			_tmp17_ = param;
			bala_collection_add (collection, (ValaVariable*) _tmp17_);
		}
	}
}

static void
bala_reference_transfer_expression_real_get_used_variables (ValaCodeNode* base,
                                                            ValaCollection* collection)
{
	ValaReferenceTransferExpression * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaLocalVariable* local = NULL;
	ValaExpression* _tmp2_;
	ValaExpression* _tmp3_;
	ValaSymbol* _tmp4_;
	ValaSymbol* _tmp5_;
	ValaParameter* param = NULL;
	ValaExpression* _tmp6_;
	ValaExpression* _tmp7_;
	ValaSymbol* _tmp8_;
	ValaSymbol* _tmp9_;
	ValaLocalVariable* _tmp10_;
	self = (ValaReferenceTransferExpression*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = bala_reference_transfer_expression_get_inner (self);
	_tmp1_ = _tmp0_;
	bala_code_node_get_used_variables ((ValaCodeNode*) _tmp1_, collection);
	_tmp2_ = bala_reference_transfer_expression_get_inner (self);
	_tmp3_ = _tmp2_;
	_tmp4_ = bala_expression_get_symbol_reference (_tmp3_);
	_tmp5_ = _tmp4_;
	local = BALA_IS_LOCAL_VARIABLE (_tmp5_) ? ((ValaLocalVariable*) _tmp5_) : NULL;
	_tmp6_ = bala_reference_transfer_expression_get_inner (self);
	_tmp7_ = _tmp6_;
	_tmp8_ = bala_expression_get_symbol_reference (_tmp7_);
	_tmp9_ = _tmp8_;
	param = BALA_IS_PARAMETER (_tmp9_) ? ((ValaParameter*) _tmp9_) : NULL;
	_tmp10_ = local;
	if (_tmp10_ != NULL) {
		ValaLocalVariable* _tmp11_;
		_tmp11_ = local;
		bala_collection_add (collection, (ValaVariable*) _tmp11_);
	} else {
		gboolean _tmp12_ = FALSE;
		ValaParameter* _tmp13_;
		_tmp13_ = param;
		if (_tmp13_ != NULL) {
			ValaParameter* _tmp14_;
			ValaParameterDirection _tmp15_;
			ValaParameterDirection _tmp16_;
			_tmp14_ = param;
			_tmp15_ = bala_parameter_get_direction (_tmp14_);
			_tmp16_ = _tmp15_;
			_tmp12_ = _tmp16_ == BALA_PARAMETER_DIRECTION_OUT;
		} else {
			_tmp12_ = FALSE;
		}
		if (_tmp12_) {
			ValaParameter* _tmp17_;
			_tmp17_ = param;
			bala_collection_add (collection, (ValaVariable*) _tmp17_);
		}
	}
}

static gchar*
bala_reference_transfer_expression_real_to_string (ValaCodeNode* base)
{
	ValaReferenceTransferExpression * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValaReferenceTransferExpression*) base;
	_tmp0_ = bala_reference_transfer_expression_get_inner (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = bala_code_node_to_string ((ValaCodeNode*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strdup_printf ("(owned) %s", _tmp3_);
	_tmp5_ = _tmp4_;
	_g_free0 (_tmp3_);
	result = _tmp5_;
	return result;
}

static void
bala_reference_transfer_expression_class_init (ValaReferenceTransferExpressionClass * klass,
                                               gpointer klass_data)
{
	bala_reference_transfer_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = bala_reference_transfer_expression_finalize;
	g_type_class_adjust_private_offset (klass, &ValaReferenceTransferExpression_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) bala_reference_transfer_expression_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) bala_reference_transfer_expression_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) bala_reference_transfer_expression_real_replace_expression;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*) (ValaExpression*)) bala_reference_transfer_expression_real_is_pure;
	((ValaExpressionClass *) klass)->is_accessible = (gboolean (*) (ValaExpression*, ValaSymbol*)) bala_reference_transfer_expression_real_is_accessible;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) bala_reference_transfer_expression_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) bala_reference_transfer_expression_real_emit;
	((ValaCodeNodeClass *) klass)->get_defined_variables = (void (*) (ValaCodeNode*, ValaCollection*)) bala_reference_transfer_expression_real_get_defined_variables;
	((ValaCodeNodeClass *) klass)->get_used_variables = (void (*) (ValaCodeNode*, ValaCollection*)) bala_reference_transfer_expression_real_get_used_variables;
	((ValaCodeNodeClass *) klass)->to_string = (gchar* (*) (ValaCodeNode*)) bala_reference_transfer_expression_real_to_string;
}

static void
bala_reference_transfer_expression_instance_init (ValaReferenceTransferExpression * self,
                                                  gpointer klass)
{
	self->priv = bala_reference_transfer_expression_get_instance_private (self);
}

static void
bala_reference_transfer_expression_finalize (ValaCodeNode * obj)
{
	ValaReferenceTransferExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_REFERENCE_TRANSFER_EXPRESSION, ValaReferenceTransferExpression);
	_bala_code_node_unref0 (self->priv->_inner);
	BALA_CODE_NODE_CLASS (bala_reference_transfer_expression_parent_class)->finalize (obj);
}

/**
 * Represents a reference transfer expression.
 *
 * {{{ (owned) foo }}}
 */
static GType
bala_reference_transfer_expression_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaReferenceTransferExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_reference_transfer_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaReferenceTransferExpression), 0, (GInstanceInitFunc) bala_reference_transfer_expression_instance_init, NULL };
	GType bala_reference_transfer_expression_type_id;
	bala_reference_transfer_expression_type_id = g_type_register_static (BALA_TYPE_EXPRESSION, "ValaReferenceTransferExpression", &g_define_type_info, 0);
	ValaReferenceTransferExpression_private_offset = g_type_add_instance_private (bala_reference_transfer_expression_type_id, sizeof (ValaReferenceTransferExpressionPrivate));
	return bala_reference_transfer_expression_type_id;
}

GType
bala_reference_transfer_expression_get_type (void)
{
	static volatile gsize bala_reference_transfer_expression_type_id__volatile = 0;
	if (g_once_init_enter (&bala_reference_transfer_expression_type_id__volatile)) {
		GType bala_reference_transfer_expression_type_id;
		bala_reference_transfer_expression_type_id = bala_reference_transfer_expression_get_type_once ();
		g_once_init_leave (&bala_reference_transfer_expression_type_id__volatile, bala_reference_transfer_expression_type_id);
	}
	return bala_reference_transfer_expression_type_id__volatile;
}

