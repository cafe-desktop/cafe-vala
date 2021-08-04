/* valaerrortype.c generated by valac, the Vala compiler
 * generated from valaerrortype.vala, do not modify */

/* valaerrortype.vala
 *
 * Copyright (C) 2008-2010  Jürg Billeter
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
 *	Raffaele Sandrini <raffaele@sandrini.ch>
 */

#include "vala.h"
#include <glib.h>
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaErrorTypePrivate {
	ValaErrorCode* _error_code;
	gboolean _dynamic_error;
};

static gint ValaErrorType_private_offset;
static gpointer vala_error_type_parent_class = NULL;

static gboolean vala_error_type_real_compatible (ValaDataType* base,
                                          ValaDataType* target_type);
static gchar* vala_error_type_real_to_qualified_string (ValaDataType* base,
                                                 ValaScope* scope);
static ValaDataType* vala_error_type_real_copy (ValaDataType* base);
static gboolean vala_error_type_real_equals (ValaDataType* base,
                                      ValaDataType* type2);
static ValaSymbol* vala_error_type_real_get_member (ValaDataType* base,
                                             const gchar* member_name);
static gboolean vala_error_type_real_is_reference_type_or_type_parameter (ValaDataType* base);
static gboolean vala_error_type_real_check (ValaCodeNode* base,
                                     ValaCodeContext* context);
static void vala_error_type_finalize (ValaCodeNode * obj);
static GType vala_error_type_get_type_once (void);

static inline gpointer
vala_error_type_get_instance_private (ValaErrorType* self)
{
	return G_STRUCT_MEMBER_P (self, ValaErrorType_private_offset);
}

ValaErrorDomain*
vala_error_type_get_error_domain (ValaErrorType* self)
{
	ValaErrorDomain* result;
	ValaSymbol* _tmp0_;
	ValaSymbol* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = vala_data_type_get_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	result = BALA_IS_ERROR_DOMAIN (_tmp1_) ? ((ValaErrorDomain*) _tmp1_) : NULL;
	return result;
}

ValaErrorCode*
vala_error_type_get_error_code (ValaErrorType* self)
{
	ValaErrorCode* result;
	ValaErrorCode* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_error_code;
	result = _tmp0_;
	return result;
}

void
vala_error_type_set_error_code (ValaErrorType* self,
                                ValaErrorCode* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_error_code = value;
}

gboolean
vala_error_type_get_dynamic_error (ValaErrorType* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_dynamic_error;
	return result;
}

void
vala_error_type_set_dynamic_error (ValaErrorType* self,
                                   gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_dynamic_error = value;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

ValaErrorType*
vala_error_type_construct (GType object_type,
                           ValaErrorDomain* error_domain,
                           ValaErrorCode* error_code,
                           ValaSourceReference* source_reference)
{
	ValaErrorType* self = NULL;
	ValaSymbol* _tmp0_ = NULL;
	ValaSymbol* _tmp1_;
	_tmp1_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (error_domain, BALA_TYPE_SYMBOL, ValaSymbol));
	_tmp0_ = _tmp1_;
	if (_tmp0_ == NULL) {
		ValaCodeContext* _tmp2_;
		ValaCodeContext* _tmp3_;
		ValaNamespace* _tmp4_;
		ValaNamespace* _tmp5_;
		ValaScope* _tmp6_;
		ValaScope* _tmp7_;
		ValaSymbol* _tmp8_;
		ValaSymbol* _tmp9_;
		ValaScope* _tmp10_;
		ValaScope* _tmp11_;
		ValaSymbol* _tmp12_;
		_tmp2_ = vala_code_context_get ();
		_tmp3_ = _tmp2_;
		_tmp4_ = vala_code_context_get_root (_tmp3_);
		_tmp5_ = _tmp4_;
		_tmp6_ = vala_symbol_get_scope ((ValaSymbol*) _tmp5_);
		_tmp7_ = _tmp6_;
		_tmp8_ = vala_scope_lookup (_tmp7_, "GLib");
		_tmp9_ = _tmp8_;
		_tmp10_ = vala_symbol_get_scope (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = vala_scope_lookup (_tmp11_, "Error");
		_vala_code_node_unref0 (_tmp0_);
		_tmp0_ = _tmp12_;
		_vala_code_node_unref0 (_tmp9_);
		_vala_code_context_unref0 (_tmp3_);
	}
	self = (ValaErrorType*) vala_reference_type_construct (object_type, _tmp0_);
	vala_error_type_set_error_code (self, error_code);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	_vala_code_node_unref0 (_tmp0_);
	return self;
}

ValaErrorType*
vala_error_type_new (ValaErrorDomain* error_domain,
                     ValaErrorCode* error_code,
                     ValaSourceReference* source_reference)
{
	return vala_error_type_construct (BALA_TYPE_ERROR_TYPE, error_domain, error_code, source_reference);
}

static gboolean
vala_error_type_real_compatible (ValaDataType* base,
                                 ValaDataType* target_type)
{
	ValaErrorType * self;
	ValaErrorType* et = NULL;
	ValaErrorType* _tmp0_;
	ValaErrorType* _tmp1_;
	ValaErrorDomain* _tmp2_;
	ValaErrorDomain* _tmp3_;
	ValaErrorType* _tmp4_;
	ValaErrorDomain* _tmp5_;
	ValaErrorDomain* _tmp6_;
	ValaErrorDomain* _tmp7_;
	ValaErrorDomain* _tmp8_;
	ValaErrorType* _tmp9_;
	ValaErrorCode* _tmp10_;
	ValaErrorType* _tmp11_;
	ValaErrorCode* _tmp12_;
	ValaErrorCode* _tmp13_;
	gboolean result = FALSE;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (target_type != NULL, FALSE);
	if (BALA_IS_GENERIC_TYPE (target_type)) {
		result = TRUE;
		return result;
	}
	et = BALA_IS_ERROR_TYPE (target_type) ? ((ValaErrorType*) target_type) : NULL;
	_tmp0_ = et;
	if (_tmp0_ == NULL) {
		result = FALSE;
		return result;
	}
	_tmp1_ = et;
	_tmp2_ = vala_error_type_get_error_domain (_tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_ == NULL) {
		result = TRUE;
		return result;
	}
	_tmp4_ = et;
	_tmp5_ = vala_error_type_get_error_domain (_tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = vala_error_type_get_error_domain (self);
	_tmp8_ = _tmp7_;
	if (_tmp6_ != _tmp8_) {
		result = FALSE;
		return result;
	}
	_tmp9_ = et;
	_tmp10_ = _tmp9_->priv->_error_code;
	if (_tmp10_ == NULL) {
		result = TRUE;
		return result;
	}
	_tmp11_ = et;
	_tmp12_ = _tmp11_->priv->_error_code;
	_tmp13_ = self->priv->_error_code;
	result = _tmp12_ == _tmp13_;
	return result;
}

static gchar*
vala_error_type_real_to_qualified_string (ValaDataType* base,
                                          ValaScope* scope)
{
	ValaErrorType * self;
	gchar* _result_ = NULL;
	ValaErrorDomain* _tmp0_;
	ValaErrorDomain* _tmp1_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	gchar* result = NULL;
	self = (ValaErrorType*) base;
	_tmp0_ = vala_error_type_get_error_domain (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == NULL) {
		gchar* _tmp2_;
		_tmp2_ = g_strdup ("GLib.Error");
		_g_free0 (_result_);
		_result_ = _tmp2_;
	} else {
		ValaErrorDomain* _tmp3_;
		ValaErrorDomain* _tmp4_;
		gchar* _tmp5_;
		_tmp3_ = vala_error_type_get_error_domain (self);
		_tmp4_ = _tmp3_;
		_tmp5_ = vala_symbol_get_full_name ((ValaSymbol*) _tmp4_);
		_g_free0 (_result_);
		_result_ = _tmp5_;
	}
	_tmp6_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp7_ = _tmp6_;
	if (_tmp7_) {
		const gchar* _tmp8_;
		gchar* _tmp9_;
		_tmp8_ = _result_;
		_tmp9_ = g_strconcat (_tmp8_, "?", NULL);
		_g_free0 (_result_);
		_result_ = _tmp9_;
	}
	result = _result_;
	return result;
}

static ValaDataType*
vala_error_type_real_copy (ValaDataType* base)
{
	ValaErrorType * self;
	ValaErrorType* _result_ = NULL;
	ValaErrorDomain* _tmp0_;
	ValaErrorDomain* _tmp1_;
	ValaErrorCode* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaSourceReference* _tmp4_;
	ValaErrorType* _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	gboolean _tmp10_;
	ValaDataType* result = NULL;
	self = (ValaErrorType*) base;
	_tmp0_ = vala_error_type_get_error_domain (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->_error_code;
	_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp4_ = _tmp3_;
	_tmp5_ = vala_error_type_new (_tmp1_, _tmp2_, _tmp4_);
	_result_ = _tmp5_;
	_tmp6_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp7_ = _tmp6_;
	vala_data_type_set_value_owned ((ValaDataType*) _result_, _tmp7_);
	_tmp8_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp9_ = _tmp8_;
	vala_data_type_set_nullable ((ValaDataType*) _result_, _tmp9_);
	_tmp10_ = self->priv->_dynamic_error;
	vala_error_type_set_dynamic_error (_result_, _tmp10_);
	result = (ValaDataType*) _result_;
	return result;
}

static gboolean
vala_error_type_real_equals (ValaDataType* base,
                             ValaDataType* type2)
{
	ValaErrorType * self;
	ValaErrorType* et = NULL;
	ValaErrorType* _tmp0_;
	ValaErrorDomain* _tmp1_;
	ValaErrorDomain* _tmp2_;
	ValaErrorType* _tmp3_;
	ValaErrorDomain* _tmp4_;
	ValaErrorDomain* _tmp5_;
	gboolean result = FALSE;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (type2 != NULL, FALSE);
	et = BALA_IS_ERROR_TYPE (type2) ? ((ValaErrorType*) type2) : NULL;
	_tmp0_ = et;
	if (_tmp0_ == NULL) {
		result = FALSE;
		return result;
	}
	_tmp1_ = vala_error_type_get_error_domain (self);
	_tmp2_ = _tmp1_;
	_tmp3_ = et;
	_tmp4_ = vala_error_type_get_error_domain (_tmp3_);
	_tmp5_ = _tmp4_;
	result = _tmp2_ == _tmp5_;
	return result;
}

static ValaSymbol*
vala_error_type_real_get_member (ValaDataType* base,
                                 const gchar* member_name)
{
	ValaErrorType * self;
	ValaSymbol* gerror_symbol = NULL;
	ValaCodeContext* _tmp0_;
	ValaCodeContext* _tmp1_;
	ValaNamespace* _tmp2_;
	ValaNamespace* _tmp3_;
	ValaScope* _tmp4_;
	ValaScope* _tmp5_;
	ValaSymbol* _tmp6_;
	ValaSymbol* _tmp7_;
	ValaScope* _tmp8_;
	ValaScope* _tmp9_;
	ValaSymbol* _tmp10_;
	ValaSymbol* _tmp11_;
	ValaScope* _tmp12_;
	ValaScope* _tmp13_;
	ValaSymbol* _tmp14_;
	ValaSymbol* result = NULL;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_root (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_get_scope ((ValaSymbol*) _tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_scope_lookup (_tmp5_, "GLib");
	_tmp7_ = _tmp6_;
	_tmp8_ = vala_symbol_get_scope (_tmp7_);
	_tmp9_ = _tmp8_;
	_tmp10_ = vala_scope_lookup (_tmp9_, "Error");
	_tmp11_ = _tmp10_;
	_vala_code_node_unref0 (_tmp7_);
	_vala_code_context_unref0 (_tmp1_);
	gerror_symbol = _tmp11_;
	_tmp12_ = vala_symbol_get_scope (gerror_symbol);
	_tmp13_ = _tmp12_;
	_tmp14_ = vala_scope_lookup (_tmp13_, member_name);
	result = _tmp14_;
	_vala_code_node_unref0 (gerror_symbol);
	return result;
}

static gboolean
vala_error_type_real_is_reference_type_or_type_parameter (ValaDataType* base)
{
	ValaErrorType * self;
	gboolean result = FALSE;
	self = (ValaErrorType*) base;
	result = TRUE;
	return result;
}

static gboolean
vala_error_type_real_check (ValaCodeNode* base,
                            ValaCodeContext* context)
{
	ValaErrorType * self;
	ValaErrorDomain* _tmp0_;
	ValaErrorDomain* _tmp1_;
	gboolean result = FALSE;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_error_type_get_error_domain (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaErrorDomain* _tmp2_;
		ValaErrorDomain* _tmp3_;
		_tmp2_ = vala_error_type_get_error_domain (self);
		_tmp3_ = _tmp2_;
		result = vala_code_node_check ((ValaCodeNode*) _tmp3_, context);
		return result;
	}
	result = TRUE;
	return result;
}

static void
vala_error_type_class_init (ValaErrorTypeClass * klass,
                            gpointer klass_data)
{
	vala_error_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_error_type_finalize;
	g_type_class_adjust_private_offset (klass, &ValaErrorType_private_offset);
	((ValaDataTypeClass *) klass)->compatible = (gboolean (*) (ValaDataType*, ValaDataType*)) vala_error_type_real_compatible;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType*, ValaScope*)) vala_error_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_error_type_real_copy;
	((ValaDataTypeClass *) klass)->equals = (gboolean (*) (ValaDataType*, ValaDataType*)) vala_error_type_real_equals;
	((ValaDataTypeClass *) klass)->get_member = (ValaSymbol* (*) (ValaDataType*, const gchar*)) vala_error_type_real_get_member;
	((ValaDataTypeClass *) klass)->is_reference_type_or_type_parameter = (gboolean (*) (ValaDataType*)) vala_error_type_real_is_reference_type_or_type_parameter;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_error_type_real_check;
}

static void
vala_error_type_instance_init (ValaErrorType * self,
                               gpointer klass)
{
	self->priv = vala_error_type_get_instance_private (self);
}

static void
vala_error_type_finalize (ValaCodeNode * obj)
{
	ValaErrorType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_ERROR_TYPE, ValaErrorType);
	BALA_CODE_NODE_CLASS (vala_error_type_parent_class)->finalize (obj);
}

/**
 * A class type.
 */
static GType
vala_error_type_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaErrorTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_error_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaErrorType), 0, (GInstanceInitFunc) vala_error_type_instance_init, NULL };
	GType vala_error_type_type_id;
	vala_error_type_type_id = g_type_register_static (BALA_TYPE_REFERENCE_TYPE, "ValaErrorType", &g_define_type_info, 0);
	ValaErrorType_private_offset = g_type_add_instance_private (vala_error_type_type_id, sizeof (ValaErrorTypePrivate));
	return vala_error_type_type_id;
}

GType
vala_error_type_get_type (void)
{
	static volatile gsize vala_error_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_error_type_type_id__volatile)) {
		GType vala_error_type_type_id;
		vala_error_type_type_id = vala_error_type_get_type_once ();
		g_once_init_leave (&vala_error_type_type_id__volatile, vala_error_type_type_id);
	}
	return vala_error_type_type_id__volatile;
}

