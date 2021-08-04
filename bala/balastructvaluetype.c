/* balastructvaluetype.c generated by balac, the Vala compiler
 * generated from balastructvaluetype.bala, do not modify */

/* balastructvaluetype.bala
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

#include "bala.h"
#include <glib.h>
#include <balagee.h>
#include <glib-object.h>

#define _bala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (bala_code_node_unref (var), NULL)))
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))

static gpointer bala_struct_value_type_parent_class = NULL;

static gboolean bala_struct_value_type_real_is_invokable (ValaDataType* base);
static ValaDataType* bala_struct_value_type_real_get_return_type (ValaDataType* base);
static ValaList* bala_struct_value_type_real_get_parameters (ValaDataType* base);
static ValaDataType* bala_struct_value_type_real_copy (ValaDataType* base);
static GType bala_struct_value_type_get_type_once (void);

ValaStructValueType*
bala_struct_value_type_construct (GType object_type,
                                  ValaStruct* type_symbol)
{
	ValaStructValueType* self = NULL;
	g_return_val_if_fail (type_symbol != NULL, NULL);
	self = (ValaStructValueType*) bala_value_type_construct (object_type, (ValaTypeSymbol*) type_symbol);
	return self;
}

ValaStructValueType*
bala_struct_value_type_new (ValaStruct* type_symbol)
{
	return bala_struct_value_type_construct (BALA_TYPE_STRUCT_VALUE_TYPE, type_symbol);
}

static gboolean
bala_struct_value_type_real_is_invokable (ValaDataType* base)
{
	ValaStructValueType * self;
	ValaStruct* st = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	gboolean _tmp2_ = FALSE;
	ValaStruct* _tmp3_;
	gboolean result = FALSE;
	self = (ValaStructValueType*) base;
	_tmp0_ = bala_data_type_get_type_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	st = BALA_IS_STRUCT (_tmp1_) ? ((ValaStruct*) _tmp1_) : NULL;
	_tmp3_ = st;
	if (_tmp3_ != NULL) {
		ValaStruct* _tmp4_;
		ValaCreationMethod* _tmp5_;
		ValaCreationMethod* _tmp6_;
		_tmp4_ = st;
		_tmp5_ = bala_struct_get_default_construction_method (_tmp4_);
		_tmp6_ = _tmp5_;
		_tmp2_ = _tmp6_ != NULL;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		result = TRUE;
		return result;
	} else {
		result = FALSE;
		return result;
	}
}

static ValaDataType*
bala_struct_value_type_real_get_return_type (ValaDataType* base)
{
	ValaStructValueType * self;
	ValaStruct* st = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	gboolean _tmp2_ = FALSE;
	ValaStruct* _tmp3_;
	ValaDataType* result = NULL;
	self = (ValaStructValueType*) base;
	_tmp0_ = bala_data_type_get_type_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	st = BALA_IS_STRUCT (_tmp1_) ? ((ValaStruct*) _tmp1_) : NULL;
	_tmp3_ = st;
	if (_tmp3_ != NULL) {
		ValaStruct* _tmp4_;
		ValaCreationMethod* _tmp5_;
		ValaCreationMethod* _tmp6_;
		_tmp4_ = st;
		_tmp5_ = bala_struct_get_default_construction_method (_tmp4_);
		_tmp6_ = _tmp5_;
		_tmp2_ = _tmp6_ != NULL;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		ValaStruct* _tmp7_;
		ValaCreationMethod* _tmp8_;
		ValaCreationMethod* _tmp9_;
		ValaDataType* _tmp10_;
		ValaDataType* _tmp11_;
		_tmp7_ = st;
		_tmp8_ = bala_struct_get_default_construction_method (_tmp7_);
		_tmp9_ = _tmp8_;
		_tmp10_ = bala_callable_get_return_type ((ValaCallable*) _tmp9_);
		_tmp11_ = _tmp10_;
		result = _tmp11_;
		return result;
	} else {
		result = NULL;
		return result;
	}
}

static ValaList*
bala_struct_value_type_real_get_parameters (ValaDataType* base)
{
	ValaStructValueType * self;
	ValaStruct* st = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	gboolean _tmp2_ = FALSE;
	ValaStruct* _tmp3_;
	ValaList* result = NULL;
	self = (ValaStructValueType*) base;
	_tmp0_ = bala_data_type_get_type_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	st = BALA_IS_STRUCT (_tmp1_) ? ((ValaStruct*) _tmp1_) : NULL;
	_tmp3_ = st;
	if (_tmp3_ != NULL) {
		ValaStruct* _tmp4_;
		ValaCreationMethod* _tmp5_;
		ValaCreationMethod* _tmp6_;
		_tmp4_ = st;
		_tmp5_ = bala_struct_get_default_construction_method (_tmp4_);
		_tmp6_ = _tmp5_;
		_tmp2_ = _tmp6_ != NULL;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		ValaStruct* _tmp7_;
		ValaCreationMethod* _tmp8_;
		ValaCreationMethod* _tmp9_;
		ValaList* _tmp10_;
		_tmp7_ = st;
		_tmp8_ = bala_struct_get_default_construction_method (_tmp7_);
		_tmp9_ = _tmp8_;
		_tmp10_ = bala_callable_get_parameters ((ValaCallable*) _tmp9_);
		result = _tmp10_;
		return result;
	} else {
		result = NULL;
		return result;
	}
}

static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

static ValaDataType*
bala_struct_value_type_real_copy (ValaDataType* base)
{
	ValaStructValueType * self;
	ValaStructValueType* _result_ = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaStructValueType* _tmp2_;
	ValaStructValueType* _tmp3_;
	ValaSourceReference* _tmp4_;
	ValaSourceReference* _tmp5_;
	ValaStructValueType* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	ValaStructValueType* _tmp9_;
	gboolean _tmp10_;
	gboolean _tmp11_;
	ValaDataType* result = NULL;
	self = (ValaStructValueType*) base;
	_tmp0_ = bala_data_type_get_type_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = bala_struct_value_type_new (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, BALA_TYPE_STRUCT, ValaStruct));
	_result_ = _tmp2_;
	_tmp3_ = _result_;
	_tmp4_ = bala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp5_ = _tmp4_;
	bala_code_node_set_source_reference ((ValaCodeNode*) _tmp3_, _tmp5_);
	_tmp6_ = _result_;
	_tmp7_ = bala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	bala_data_type_set_value_owned ((ValaDataType*) _tmp6_, _tmp8_);
	_tmp9_ = _result_;
	_tmp10_ = bala_data_type_get_nullable ((ValaDataType*) self);
	_tmp11_ = _tmp10_;
	bala_data_type_set_nullable ((ValaDataType*) _tmp9_, _tmp11_);
	{
		ValaList* _arg_list = NULL;
		ValaList* _tmp12_;
		ValaList* _tmp13_;
		gint _arg_size = 0;
		ValaList* _tmp14_;
		gint _tmp15_;
		gint _tmp16_;
		gint _arg_index = 0;
		_tmp12_ = bala_data_type_get_type_arguments ((ValaDataType*) self);
		_tmp13_ = _bala_iterable_ref0 (_tmp12_);
		_arg_list = _tmp13_;
		_tmp14_ = _arg_list;
		_tmp15_ = bala_collection_get_size ((ValaCollection*) _tmp14_);
		_tmp16_ = _tmp15_;
		_arg_size = _tmp16_;
		_arg_index = -1;
		while (TRUE) {
			gint _tmp17_;
			gint _tmp18_;
			ValaDataType* arg = NULL;
			ValaList* _tmp19_;
			gpointer _tmp20_;
			ValaStructValueType* _tmp21_;
			ValaDataType* _tmp22_;
			ValaDataType* _tmp23_;
			ValaDataType* _tmp24_;
			_arg_index = _arg_index + 1;
			_tmp17_ = _arg_index;
			_tmp18_ = _arg_size;
			if (!(_tmp17_ < _tmp18_)) {
				break;
			}
			_tmp19_ = _arg_list;
			_tmp20_ = bala_list_get (_tmp19_, _arg_index);
			arg = (ValaDataType*) _tmp20_;
			_tmp21_ = _result_;
			_tmp22_ = arg;
			_tmp23_ = bala_data_type_copy (_tmp22_);
			_tmp24_ = _tmp23_;
			bala_data_type_add_type_argument ((ValaDataType*) _tmp21_, _tmp24_);
			_bala_code_node_unref0 (_tmp24_);
			_bala_code_node_unref0 (arg);
		}
		_bala_iterable_unref0 (_arg_list);
	}
	result = (ValaDataType*) _result_;
	return result;
}

static void
bala_struct_value_type_class_init (ValaStructValueTypeClass * klass,
                                   gpointer klass_data)
{
	bala_struct_value_type_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->is_invokable = (gboolean (*) (ValaDataType*)) bala_struct_value_type_real_is_invokable;
	((ValaDataTypeClass *) klass)->get_return_type = (ValaDataType* (*) (ValaDataType*)) bala_struct_value_type_real_get_return_type;
	((ValaDataTypeClass *) klass)->get_parameters = (ValaList* (*) (ValaDataType*)) bala_struct_value_type_real_get_parameters;
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) bala_struct_value_type_real_copy;
}

static void
bala_struct_value_type_instance_init (ValaStructValueType * self,
                                      gpointer klass)
{
}

/**
 * A struct value type.
 */
static GType
bala_struct_value_type_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaStructValueTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_struct_value_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaStructValueType), 0, (GInstanceInitFunc) bala_struct_value_type_instance_init, NULL };
	GType bala_struct_value_type_type_id;
	bala_struct_value_type_type_id = g_type_register_static (BALA_TYPE_VALUE_TYPE, "ValaStructValueType", &g_define_type_info, 0);
	return bala_struct_value_type_type_id;
}

GType
bala_struct_value_type_get_type (void)
{
	static volatile gsize bala_struct_value_type_type_id__volatile = 0;
	if (g_once_init_enter (&bala_struct_value_type_type_id__volatile)) {
		GType bala_struct_value_type_type_id;
		bala_struct_value_type_type_id = bala_struct_value_type_get_type_once ();
		g_once_init_leave (&bala_struct_value_type_type_id__volatile, bala_struct_value_type_type_id);
	}
	return bala_struct_value_type_type_id__volatile;
}

