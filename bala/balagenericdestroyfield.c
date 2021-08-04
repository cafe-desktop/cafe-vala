/* valagenericdestroyfield.c generated by valac, the Vala compiler
 * generated from valagenericdestroyfield.vala, do not modify */

/* valagenericdestroyfield.vala
 *
 * Copyright (C) 2019  Rico Tzschichholz
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
 * 	Rico Tzschichholz <ricotz@ubuntu.com>
 */

#include "vala.h"
#include <glib.h>

#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))

static gpointer vala_generic_destroy_field_parent_class = NULL;

static GType vala_generic_destroy_field_get_type_once (void);

/**
 * Creates a new generic destroy field.
 *
 * @return newly created field
 */
ValaGenericDestroyField*
vala_generic_destroy_field_construct (GType object_type,
                                      ValaSourceReference* source_reference)
{
	ValaGenericDestroyField* self = NULL;
	ValaCodeContext* _tmp0_;
	ValaCodeContext* _tmp1_;
	ValaSemanticAnalyzer* _tmp2_;
	ValaSemanticAnalyzer* _tmp3_;
	ValaDelegateType* _tmp4_;
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_analyzer (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_->delegate_target_destroy_type;
	self = (ValaGenericDestroyField*) vala_field_construct (object_type, "destroy", (ValaDataType*) _tmp4_, NULL, source_reference, NULL);
	_vala_code_context_unref0 (_tmp1_);
	vala_symbol_set_external ((ValaSymbol*) self, TRUE);
	return self;
}

ValaGenericDestroyField*
vala_generic_destroy_field_new (ValaSourceReference* source_reference)
{
	return vala_generic_destroy_field_construct (BALA_TYPE_GENERIC_DESTROY_FIELD, source_reference);
}

static void
vala_generic_destroy_field_class_init (ValaGenericDestroyFieldClass * klass,
                                       gpointer klass_data)
{
	vala_generic_destroy_field_parent_class = g_type_class_peek_parent (klass);
}

static void
vala_generic_destroy_field_instance_init (ValaGenericDestroyField * self,
                                          gpointer klass)
{
}

/**
 * Represents the Generic.destroy field.
 */
static GType
vala_generic_destroy_field_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaGenericDestroyFieldClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_generic_destroy_field_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaGenericDestroyField), 0, (GInstanceInitFunc) vala_generic_destroy_field_instance_init, NULL };
	GType vala_generic_destroy_field_type_id;
	vala_generic_destroy_field_type_id = g_type_register_static (BALA_TYPE_FIELD, "ValaGenericDestroyField", &g_define_type_info, 0);
	return vala_generic_destroy_field_type_id;
}

GType
vala_generic_destroy_field_get_type (void)
{
	static volatile gsize vala_generic_destroy_field_type_id__volatile = 0;
	if (g_once_init_enter (&vala_generic_destroy_field_type_id__volatile)) {
		GType vala_generic_destroy_field_type_id;
		vala_generic_destroy_field_type_id = vala_generic_destroy_field_get_type_once ();
		g_once_init_leave (&vala_generic_destroy_field_type_id__volatile, vala_generic_destroy_field_type_id);
	}
	return vala_generic_destroy_field_type_id__volatile;
}

